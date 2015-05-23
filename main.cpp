/*
 * main.cpp
 *
 *  Created on: 18-Apr-2015
 *      Author: som
 */

#include <iostream>
#include "LeafClassTypeException.h"
#include "Point.h"
#include "Line.h"
#include "Rectangle.h"
#include "Picture.h"

using namespace std;

const int  ID_LINE1 = 1;
const int ID_LINE2 = 2;
const int ID_LINE3 = 3;
const int ID_RECTANGLE1 = 4;
const int ID_PICTURE = 5;

int main()
{
 Point p1(10,20);
 Point p2(30,40);
 Point p3(50,60);
 Point p4(70,80);
 Point p5(100,110);
 Point p6(150,200);
 Line* l1 = Line::CreateLine(ID_LINE1,p1,p2);
 try
 {
 l1->Add(0);
 }
 catch(LeafClassTypeException& e)
 {
 e.printerrormsg();
 }
 Line* l2 = Line::CreateLine(ID_LINE2,p3,p4);
 Line* l3 = Line::CreateLine(ID_LINE3,p5,p6);
 Rectangle* r1 = Rectangle::CreateRectange(ID_RECTANGLE1, p1, 50,25);
 Shape* p = new Picture(ID_PICTURE);
 p->Add(ID_LINE1);
 p->Add(ID_LINE2);
 p->Add(ID_LINE3);
 p->Add(ID_RECTANGLE1);
 (p->GetChild(ID_RECTANGLE1))->Display();
 p->Remove(ID_RECTANGLE1);
 p->Display();
 cout<<p<<endl;
 cout<<l1->GetParentOfComponent()<<endl;

 delete p;

 return 0;
}
