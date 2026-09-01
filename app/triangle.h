/*
 *  triangle.h
 */

#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <iostream>
#include <cstdlib>

using namespace std;

enum TriangleType { NOT_TRIANGLE = 0, SCALENE = 1, ISOSCELES = 2, EQUILATERAL = 3 };

class Triangle
{
  private:
    int side1;
    int side2;
    int side3;

  public:
    Triangle();
    Triangle(int a, int b, int c);
    bool triangle();
    TriangleType type();
};

#endif


