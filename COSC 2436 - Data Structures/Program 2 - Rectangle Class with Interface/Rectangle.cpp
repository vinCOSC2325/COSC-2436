    // Programmer:      Vincent Howg
    // Project number:  2
    // Project Desc:    Program 2 - Rectangle Class with Interface
    // Course:          COSC 2436 PF III Data Structures
    // Date:            1-29-2018
	
/** @file Rectangle.cpp */

#include "Rectangle.h"

Rectangle::Rectangle()
{
	length = 1.0;
	 width = 1.0;
}

bool Rectangle::set(double newLength, double newWidth)
{
	// assign a variable to bool TRUE 
//	bool RectangleGood = True;
	// always the member variable will = to the function variable
	// the new value will be stored / updated in the original variable
	// if both new values are larger than 0.0 then it will updated
	// two && symbols mean &&
	if (newLength > 5.0 && newWidth > 5.0)
	{
		length = newLength;
		width = newWidth;
		return true;
	}
	else
	{
		return false;
	}
}

double Rectangle::getLength() const
{
	return length;
}

double Rectangle::getWidth() const
{
	return width;
}

double Rectangle::getArea() const
{
	return length * width;
}

