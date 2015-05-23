/*
 * Rectangle.h
 *
 *  Created on: 18-Apr-2015
 *      Author: som
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include <iostream>
#include "Shape.h"
#include "global.h"
using namespace std;

class Rectangle : public Shape
{
private:
//private constructor
 Rectangle(unsigned int id, Point& p, int width, int height)
 {
 top_left = p;
 top_right = Point(p.X_COORD() + width, p.Y_COORD());
 bottom_left = Point(p.X_COORD() , p.Y_COORD() + height);
 bottom_right = Point(p.X_COORD() + width, p.Y_COORD() + height);
 resource_id = id;
 Resource_Map.insert(theMap::value_type(resource_id,(Shape*)this));
 }
 //private copy constructor
 Rectangle(const Rectangle& in)
 {

 }
 //private assignment operator
 Rectangle operator=(const Rectangle& in)
 {
  return *this;
 }
public:
 static Rectangle* CreateRectange(unsigned int id, Point& p, int width, int height)
 {
 return new Rectangle(id, p, width, height);
 }
 virtual ~Rectangle(){}
 virtual void Display()
 {
 cout<<"The four vertices are:"<<endl;
 cout<<"Top Left :" ;
 top_left.Display();
 cout<<"Top Right :";
 top_right.Display();
 cout<<"Bottom Left :";
 bottom_left.Display();
 cout<<"Bottom Right :";
 bottom_right.Display();
 }
private:

 //Attributes
 Point top_left;
 Point top_right;
 Point bottom_left;
 Point bottom_right;
};

#endif /* RECTANGLE_H_ */
