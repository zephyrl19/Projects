/**************************************************************************************
 **** Name: Austin Crow
 **** Date: 2/27/19
 **** Description: Header file for the class Point. This class will have get and set
 ****              functions for the x and y variables and will have a class function
 ****              that computes the distance between the current Point and another
 ****              Point paramater.
 **************************************************************************************/

//File protection
#ifndef Point_h
#define Point_h

//include relevent libraries
#include <iostream>
#include <cmath>

//Class prototype
class Point
{
    //Class parameters
private:
    double xPointCoord, yPointCoord;
public:
    //Default constructor
    Point();
    //Input Parameter constructor
    Point(double,double);
    //Class functions
    double getXCoord();
    double getYCoord();
    void setXCoord(double);
    void setYcoord(double);
    double distanceTo(Point);
};

//End file protection
#endif /* Point_h */
