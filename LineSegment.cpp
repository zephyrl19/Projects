/**************************************************************************************
 **** Name: Austin Crow
 **** Date: 2/27/19
 **** Description: Source file for the class LineSegment. This class will have get and set
 ****              functions for the 2 pointers that contain Point class object addresses
 ****              and will calculate the length of the line segment and the slope.
 **************************************************************************************/

//Include appropriate header files.
#include "LineSegment.Hpp"
//Default constructor sets Point pointers to NULL
LineSegment::LineSegment()
{
    ptrPoint1 = NULL;
    ptrPoint2 = NULL;
}
//constructor with input parameters. Sets pointers to respective Point Class Object Addresses
LineSegment::LineSegment(Point *point1, Point *point2)
{
    ptrPoint1 = point1;
    ptrPoint2 = point2;
}
//Function returns a pointer to a Point class object for end1.
Point* LineSegment::getEnd1()
{
    return ptrPoint1;
}
//Function returns a pointer to a Point class object for end 2.
Point* LineSegment::getEnd2()
{
    return ptrPoint2;
}
//Function accepts a Point class object and sets the pointer for end 1 to that object
void LineSegment::setEnd1(Point point1)
{
    ptrPoint1 = &point1;
}
//Function accepts a Point class object and sets the pointer for end 2 to that object
void LineSegment::setEnd2(Point point2)
{
    ptrPoint2 = &point2;
}
//Function returns slope of line as a double. Decides which point is to the right, and then calculates slope.
double LineSegment::slope()
{
    if (ptrPoint1->getXCoord() < ptrPoint2->getXCoord()) {
        
        return ((ptrPoint2->getYCoord()-ptrPoint1->getYCoord())/(ptrPoint2->getXCoord()-ptrPoint1->getXCoord()));
    }
    else
    {
        return ((ptrPoint1->getYCoord()-ptrPoint2->getYCoord())/(ptrPoint1->getXCoord()-ptrPoint2->getXCoord()));
    }
}
//Function returns length of line segment as a double
double LineSegment::length()
{
    return (ptrPoint1->distanceTo(*ptrPoint2));
}





