//
// leak.cpp
//
// Memory leak detection using valgrind
//
// g++ leak.cpp -o leak
// valgrind --leak-check=full  ./leak
//

#include <iostream>

using namespace std;

void f();

int main()
{
  char firstname[6] = "Homer";
  char* lastname = new char[5];

  lastname[0] = '0';
  lastname[1] = '1';
  lastname[2] = '2';
  lastname[3] = '3';
  lastname[4] = '4';
  lastname[5] = '\0';

  cout << "firstname = " << firstname << endl;
  cout << "lastname = " << lastname << endl;

  cout << "sizeof(firstname) = " << sizeof(firstname) << endl;
  cout << "sizeof(lastname) = " << sizeof(lastname) << endl;
  cout << "sizeof(lastname[0]) = " << sizeof(lastname[0]) << endl;

  for(int k = 0; k < 4; k++)
  {
    lastname[k] = char(65 + k);
  }
  cout << "lastname = " << lastname << endl;

  f();

  return 0;
}

void f()
{
  int* array = new int[10];

  for(int k = 0; k < 10; k++)
  {
    array[k] = k;
    cout << "array[" << k << "] = " << array[k] << endl;
  }
}
