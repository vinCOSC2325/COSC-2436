    // Programmer:      Vincent Howg
    // Project number:  2
    // Project Desc:    Program 2 - Rectangle Class with Interface
    // Course:          COSC 2436 PF III Data Structures
    // Date:            1-29-2018
    
    
#ifndef RECTANGLE_INTERFACE_
#define RECTANGLE_INTERFACE_

/** @file RectangleInterface.h */

class RectangleInterface
{
public:
	/** Updates the radius of this Rectangle
	 @param  newRadius the new radius for this Circle
	 @pre    newRadius must be larger than zero
	 @post   If newRadius is valid, the radius
	         of this object is set to newRadius
			 Otherwise, the Circle is not updated 
	 @return  True if this object is updated,
	          and false otherwise. */ 
	virtual bool set(double newLength, double newWidth) = 0;
	
	/** Gets the radius  of this Circle
	 @return The radius of this Circle. */
	virtual double getLength() const = 0;
	
	virtual double getWidth() const = 0;
	
	/** Gets the area  of this Circle
	 @return The area of this Circle. */
	virtual double getArea() const = 0;

	/** Destroys this Circle and frees its assigned memory. */
	virtual ~RectangleInterface()  {}
};
#endif