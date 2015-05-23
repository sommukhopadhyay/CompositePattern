/*
 * Shape.h
 *
 *  Created on: 18-Apr-2015
 *      Author: som
 */

#ifndef SHAPE_H_
#define SHAPE_H_


#include "LeafClassTypeException.h"
using namespace std;

class Shape
{
public:
 Shape();
 virtual ~Shape();

 virtual void Add(unsigned int id)
 {
 throw LeafClassTypeException();
 };
 virtual void Remove(unsigned int id){};
 //leaf classes will not override it..however, it will be overridden by the composite class.
 virtual Shape* GetChild(unsigned int id)
 {
 throw LeafClassTypeException();
 };
 //Using this reference the "Chain of Responsibility" can be implemented
 virtual Shape* GetParentOfComponent()
 {
 return ParentOfComponent;
 };
 virtual void SetParentOfComponent(Shape* s)
 {
 ParentOfComponent = s;
 }
 virtual void Display(){};
 virtual Shape* FindItem(unsigned int id); //implementation afterwards


protected:
 Shape* ParentOfComponent;
 unsigned int resource_id;
};

#endif /* SHAPE_H_ */
