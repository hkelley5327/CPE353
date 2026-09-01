/*
 *  main.cpp
 */


#include <iostream>
#include "triangle.h"

using namespace std;


int main (int argc, char* argv[]) 
{
    int n = argc - 1;       // Compute number of values supplied
    int s1, s2, s3;         // Side lengths
    int triplets;           // Total number of triplets provided
    int offset = 0;

    cout << endl << "START" << endl;

    if ( (n > 1) && (n % 3 == 0) )  
    {
        cout << endl << "Processing arguments now..." << endl;
    }
    else 
    {
        cout << endl << "ERROR: incorrect command line arguments" << endl;
        return 1;
    }

    triplets = n / 3;       // Set number of complete triplets
    cout << endl << "Number of complete triplets = " << triplets << endl;

    while (triplets > 0)
    {
        // Convert command line arguments into integers
        s1 = atoi(argv[offset + 1]);
        s2 = atoi(argv[offset + 2]);
        s3 = atoi(argv[offset + 3]);

        Triangle t(s1, s2, s3);

        cout << endl << "[" << s1 << ", " << s2 << ", " << s3 << "] ==> ";
        if ( t.triangle() )
        {
            /* Determine and output type of triangle formed */     
            switch ( t.type() )
            {
                case 3:     cout << " Equilateral ";     break;
                case 2:     cout << " Isosceles ";       break;
                case 1:     cout << " Scalene ";         break;  
            };

            cout << " triangle" << endl;
        }
        else
            cout << " NOT a triangle" << endl;


        offset = offset + 3;
        triplets = triplets - 1;
    }

    cout << endl << "DONE" << endl << endl;

    return 0;
}



