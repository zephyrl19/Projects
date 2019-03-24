/**************************************************************************************
 **** Name: Austin Crow
 **** Date: 2/27/19
 **** Description: Header file for the class LineSegment. This class will have get and set
 ****              functions for the 2 pointers that contain Point class object addresses
 ****              and will calculate the length of the line segment and the slope.
 **************************************************************************************/

//File protection
#ifndef LineSegment_h
#define LineSegment_h

//Include Point Class

#include "Point.Hpp"

//Class Prototype
class LineSegment{
    //Class parameters
private:
    Point* ptrPoint1;
    Point* ptrPoint2;
public:
    //Class functions
    LineSegment();
    LineSegment(Point *point1, Point *point2);
    void setEnd1(Point point1);
    void setEnd2(Point point2);
    Point* getEnd1();
    Point* getEnd2();
    double length();
    double slope();
};

//end of file protection
#endif /* lineSegment_h */
