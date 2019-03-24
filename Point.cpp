/**************************************************************************************
 **** Name: Austin Crow
 **** Date: 2/27/19
 **** Description: Source file for the class Point. This class will have get and set
 ****              functions for the x and y variables and will have a class function
 ****              that computes the distance between the current Point and another
 ****              Point paramater.
 **************************************************************************************/

//Include class header
#include "Point.Hpp"
//Default constructor sets parameters to 0
Point::Point()
{
    xPointCoord = 0;
    yPointCoord = 0;
}
//Input parameters get assigned to Class variables
Point::Point(double xCoord, double yCoord)
{
    xPointCoord = xCoord;
    yPointCoord = yCoord;
}
//Get function for the x coordinate. returns a double
double Point::getXCoord()
{
    return xPointCoord;
}
//Get function for the y coordinate. returns a double
double Point::getYCoord()
{
    return yPointCoord;
}
//Set function for the x coordinate. accepts a double
void Point::setXCoord(double xCoord)
{
    xPointCoord = xCoord;
}
//Set function for the y coordinate. accepts a double
void Point::setYcoord(double yCoord)
{
    yPointCoord = yCoord;
}
//function to calculate distance to another Point class object.
//Accepts a Point class object, returns distance as a double.
double Point::distanceTo(Point fakePoint)
{
    double distanceDouble = 0.0, xtotal = 0.0, ytotal = 0.0;
    
    xtotal = pow(xPointCoord - fakePoint.getXCoord(),2);
    ytotal = pow(yPointCoord - fakePoint.getYCoord(), 2);
    
    distanceDouble = sqrt(xtotal + ytotal);
    
    return distanceDouble;
}








