#include "dialog.h"
#include "ui_dialog.h"
#include <QSqlError>
#include <QDebug>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    connect(ui->searchButton, SIGNAL(clicked()), this, SLOT(processQuery()));

    // Setup database
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("sprites.db");

    if (!db.open()) {
        qDebug() << "Database open error:" << db.lastError();
        exit(1);
    }

    // -------------------------
    // Create Table
    // -------------------------
    QSqlQuery q;
    if (!q.exec("CREATE TABLE IF NOT EXISTS sprites ("
                "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                "name TEXT UNIQUE, "
                "image_path TEXT)"))
    {
        qDebug() << "Error creating table:" << q.lastError();
        return;
    }

    // -------------------------
    // Insert default sprites (ignoring duplicates)
    // -------------------------
    q.exec("INSERT OR IGNORE INTO sprites (name, image_path) VALUES('Blue',   ':/sprites/blueSprite.png')");
    q.exec("INSERT OR IGNORE INTO sprites (name, image_path) VALUES('Red',    ':/sprites/redSprite.png')");
    q.exec("INSERT OR IGNORE INTO sprites (name, image_path) VALUES('Yellow', ':/sprites/yellowSprite.png')");
    q.exec("INSERT OR IGNORE INTO sprites (name, image_path) VALUES('Green',  ':/sprites/greenSprite.png')");
    q.exec("INSERT OR IGNORE INTO sprites (name, image_path) VALUES('Enemy',  ':/sprites/enemySprite.png')");
    q.exec("INSERT OR IGNORE INTO sprites (name, image_path) VALUES('Bullet', ':/sprites/playerBullet.png')");
    q.exec("INSERT OR IGNORE INTO sprites (name, image_path) VALUES('EBullet',':/sprites/enemyBullet.png')");

    // Show current DB contents for debugging
    q.exec("SELECT name, image_path FROM sprites");
    ui->textBrowser->append("*** Sprite DB Contents ***");
    while (q.next()) {
        QString s = q.value(0).toString() + "  -->  " + q.value(1).toString();
        ui->textBrowser->append(s);
    }
    ui->textBrowser->append("********************************\n");
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::processQuery()
{
    QString searchName = ui->nameEdit->text();
    if (searchName.isEmpty()) return;

    QSqlQuery q;
    q.prepare("SELECT name, image_path FROM sprites WHERE name = ?");
    q.addBindValue(searchName);

    if (!q.exec()) {
        qDebug() << "Query error: " << q.lastError();
        return;
    }

    bool found = false;
    while (q.next()) {
        found = true;
        QString s = q.value(0).toString() + "  -->  " + q.value(1).toString();
        ui->textBrowser->append(s);
    }

    qm.setQuery(q);
    ui->queryView->setModel(&qm);

    // NEW: Load the sprite image into the graphics label
    if (found) {
        QString path = getSpritePath(searchName);
        QPixmap pix(path);
        QPixmap scaled = pix.scaled(100, 100, Qt::KeepAspectRatio, Qt::SmoothTransformation);
        ui->graphics->setPixmap(scaled);
        ui->graphics->setFixedSize(100, 100);
    } else {
        ui->graphics->clear(); // clear if no match
    }

    ui->nameEdit->clear();
}


QString Dialog::getSpritePath(const QString &name)
{
    QSqlQuery q;
    q.prepare("SELECT image_path FROM sprites WHERE name = ?");
    q.addBindValue(name);

    if (!q.exec()) {
        qDebug() << "DB Query Error:" << q.lastError();
        return QString();
    }

    if (q.next()) {
        return q.value(0).toString();
    }

    qDebug() << "Sprite not found:" << name;
    return QString();
}

void Dialog::loadSpriteToLabel(const QString &name)
{
    QString path = getSpritePath(name);
    if (path.isEmpty()) {
        qDebug() << "Sprite not found or path empty!";
        return;
    }

    QPixmap pix(path);
    if (pix.isNull()) {
        qDebug() << "Failed to load sprite image:" << path;
        return;
    }

    // Scale to 100x100 preserving aspect ratio
    QPixmap scaled = pix.scaled(100, 100, Qt::KeepAspectRatio, Qt::SmoothTransformation);

    ui->graphics->setPixmap(scaled);
    ui->graphics->setFixedSize(100, 100);
    ui->graphics->setScaledContents(false); // keep quality
}
