/*
 * global.h
 *
 *  Created on: 18-Apr-2015
 *      Author: som
 */

#ifndef GLOBAL_H_
#define GLOBAL_H_

#include <map>
#include "Shape.h"
using namespace std;

typedef map<unsigned int, Shape*, less<unsigned int> >theMap;
extern theMap Resource_Map;

extern theMap::iterator theIterator;

#endif /* GLOBAL_H_ */
