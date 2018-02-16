    // Programmer:      Vincent Howg
    // Project number:  2
    // Project Desc:    Program 2 - Rectangle Class with Interface
    // Course:          COSC 2436 PF III Data Structures
    // Date:            1-29-2018
    
	#include <iostream>
	#include "Rectangle.h"
	using namespace std;
	
	int main()
	{
		//class and object
		Rectangle theRectangle;
		
		double x = 0;
		double y = 0;
		
		// this should test the rectangle implementation and class and interface 
		// it will contain all the inputs and outputs of this program
		// i want to test if the length will return --> "what is the length?" << object.getLenght();
		cout << "The length is " << theRectangle.getLength()  << " by default.\n" << endl;
		cout << "I will set the length to 17 and the width to 3\n";
		theRectangle.set(0,0);
		cout << "Now output the updated length\n";
		// test if the width will return --> "what is the width?" << object.getwidth();
		cout << theRectangle.getLength() << endl;
		cout << "Now output the updated width\n";
		cout << theRectangle.getWidth() << endl;
		
		// test if the area will return --> "what is the area?" << object.getArea();
		// test what can I enter into the set method --> "Will set() take this character?" << object.set(xzy, 0)
		// test if set method will return a true or false
		
		
	

		return 0;
	}
