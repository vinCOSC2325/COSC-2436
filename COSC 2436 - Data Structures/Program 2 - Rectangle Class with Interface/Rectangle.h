    // Programmer:      Vincent Howg
    // Project number:  2
    // Project Desc:    Program 2 - Rectangle Class with Interface
    // Course:          COSC 2436 PF III Data Structures
    // Date:            1-29-2018
    
	//	what does #ifndef RECTANGLE_ mean
	//	what does #define '         ' mean
	#ifndef RECTANGLE_
	#define RECTANGLE_
	
	// include the RectangleInterface header
	#include "RectangleInterface.h"
	// class followed by the name of the Class 
	// follow class with the interface Class
	class Rectangle : public RectangleInterface
	// : public RectangleInterface
	// open brackets to start
	{
		// being with private member = member variables or data member
		// all members of the class will be able to access these variables
		// anything outside of the class will not have access to them
	private:		
		// it should be type double
		// it will have two members -- length and width
		double length;
		double width;
		
		// being public members
	public:
		// defualt constructor has () follwed by ;
		Rectangle();
		
		// bool set method with two type double variables
		bool set( double newLength, double newWidth );
		
		// double getlength method const
		// const doesn't change the variables
		double getLength() const;
		
		// double getWidth method const
		double getWidth() const;
		
		double getArea() const;
		
		// a ; follows the bracket close in the class
	};
	// why is #endif here
	#endif
