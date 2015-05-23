/*
 * Point.h
 *
 *  Created on: 18-Apr-2015
 *      Author: som
 */

#ifndef POINT_H_
#define POINT_H_
#include <iostream>
#include "Shape.h"
#include "global.h"
using namespace std;

class Point : public Shape
{
public:
 Point():x_Coord(0),y_Coord(0){}
 Point(int x, int y):x_Coord(x), y_Coord(y){}
 Point(const Point& p)
 {
 x_Coord = p.x_Coord;
 y_Coord = p.y_Coord;
 }
 Point& operator = (const Point& p)
 {
 x_Coord = p.x_Coord;
 y_Coord = p.y_Coord;

 return *this;
 }

 virtual void Display()
 {
 cout<<"X Coordinate is:"<<x_Coord<<endl;
 cout<<"Y Coordinate is:"<<y_Coord<<endl;
 }

 int X_COORD()
 {
 return x_Coord;
 }

 int Y_COORD()
 {
 return y_Coord;
 }

 virtual ~Point()
 {
 }

private:

 int x_Coord;
 int y_Coord;
};
#endif /* POINT_H_ */
