/*
 * Picture.h
 *
 *  Created on: 18-Apr-2015
 *      Author: som
 */

#ifndef PICTURE_H_
#define PICTURE_H_


#include <vector>

#include "Shape.h"
#include "global.h"
using namespace std;

class Picture : public Shape
{
public:
 Picture(unsigned int id)
 {
  resource_id = id;
  Resource_Map.insert(theMap::value_type(resource_id,(Shape*)this));
 }
 virtual void Display()
 {
  vector<Shape*>::iterator p = Components.begin();
  while (p != Components.end())
  {
  (*p)->Display();
  p++;
  }
 }
//Adds the component with the resource id equal to the passed parameter
 virtual void Add (unsigned int id)
 {
  Shape* s = FindItem(id);
  Components.push_back(s);
  s->SetParentOfComponent(this);
 }

//removes the component from the list with the resource_id equal
//to the parameter passed
 virtual void Remove(unsigned int id)
 {
  Shape* s = FindItem(id);
  vector<Shape*>::iterator p = Components.begin();
  int pos = 0;
  while (p != Components.end())
  {
   if(Components.at(pos) == s)
    break;
   pos++;
   p++;
  }
  Components.erase(p);
  s->SetParentOfComponent(NULL);
 }


 //will return the chile having the id equal to the passed value.
 virtual Shape* GetChild (unsigned int id)
 {
  return FindItem(id);
 }
 virtual ~Picture()
 {
  vector<Shape*>::iterator p = Components.begin();
  int pos = 0;
  while (p != Components.end())
  {
   delete(Components.at(pos));
   p++;
   pos++;

  }//while
  Components.clear();
 }


private:
 vector<Shape*> Components;

};

#endif /* PICTURE_H_ */
