/*
 *  triangle.cpp
 */

#include "triangle.h"

Triangle::Triangle()
{
    side1 = 0;
    side2 = 0;
    side3 = 0;
}

Triangle::Triangle(int a, int b, int c)
{ 
    side1 = a; 
    side2 = b; 
    side3 = c;
}

bool Triangle::triangle()
{
    if ( (side1 < side2 + side3) && (side2 < side1 + side3) && (side3 < side1 + side2) )
        return true;       // Sides may form a triangle
    else
        return false;       // Sides cannot form a triangle
}

TriangleType Triangle::type()
{
    // Assumes ( (side1 < side2 + side3) && (side2 < side1 + side3) && (side3 < side1 + side2) )

    // Assuming the triplet [side1, side2, side3] forms a
    // triangle, determine type of triangle formed

    if ( (side1 == side2) && (side2 == side3) )
        return EQUILATERAL;       // Equilateral triangle
    else if ( (side1 == side2) || (side2 == side3) || (side1 == side3) )
        return ISOSCELES;       // Isosceles triangle
    else
        return SCALENE;       // Scalene triangle
}



