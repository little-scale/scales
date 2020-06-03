/*
  mtof.h
 
  Created by Sebastian Tomczak, 25 March 2017
 
*/

#ifndef scales_h
#define scales_h

#include "Arduino.h"

class scales_class
{
	public: 
		byte major(byte incoming_note);
		byte minor(byte incoming_note);
};

extern scales_class scales;

#endif
