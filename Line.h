/*
 * Line.h
 *
 *  Created on: 18-Apr-2015
 *      Author: som
 */

#ifndef LINE_H_
#define LINE_H_

#include <iostream>
#include "Shape.h"
#include "global.h"
using namespace std;


//class Line is working as a leaf class.. Lets implement it as a final class
class Line : public Shape
{
 private:
 //private constructor
  Line(unsigned int id):begin(0,0),end(0,0)
  {
  resource_id = id;
  Resource_Map.insert(theMap::value_type(resource_id,(Shape*)this));
  }
  //private constructor
  Line(unsigned int id, Point a, Point b):begin(a),end(b)
  {
  resource_id = id;
  Resource_Map.insert(theMap::value_type(resource_id,(Shape*)this));
  }
  //private copy constructor
  Line(const Line& in)
  {

  }

 //private assignment operator
  Line& operator= (const Line& in)
  {
   return *this;
  }

 public:

  virtual void Display()
  {
  cout<<"Begining point is:";
  begin.Display();
  cout<<"End Point is:";
  end.Display();
  }
  static Line* CreateLine(unsigned int id, Point a, Point b)
  {
  return new Line(id,a,b);
  }


 virtual ~Line(){}

 private:
 Point begin;
 Point end;
};

#endif /* LINE_H_ */
