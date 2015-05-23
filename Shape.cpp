/*
 * Shape.cpp
 *
 *  Created on: 18-Apr-2015
 *      Author: som
 */
#include <iostream>
#include "Shape.h"
#include "global.h"

Shape::Shape() {
 // TODO Auto-generated constructor stub
}

Shape::~Shape() {
 // TODO Auto-generated destructor stub
}

Shape* Shape::FindItem(unsigned int id)
{
 theIterator = Resource_Map.begin();
 while (theIterator != Resource_Map.end())
  {
  theIterator = Resource_Map.find(id);
  Shape* s = (*theIterator).second;
  theIterator++;
  return s;
  }

 return NULL;
}
