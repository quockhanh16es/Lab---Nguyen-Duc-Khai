#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>

using namespace std ;

class Rectangle
{
	public:
	
	Rectangle();
	Rectangle(double, double) ;
	
	~Rectangle();
	
	void setLength(double);
	void setWidth(double) ;
	
	double getLength() ;
	double getWidth() ;
	double getArea() ;
		
		
	private:
		double length, width;
		
}

Rectangle::Rectangle()
{
	width = 1 ;
	length = 1 ;
}

Rectangle::Rectangle(double l, double w)
{
	width = w ;
	length = l ;
}
Rectangle::setLength(double l)
{
	length = l ;
}
Rectangle::getLength()
{
	return length ;
}
Rectangle::setWidth(double w)
{
	width = w;
}
Rectangle::getWidth()
{
	return width;
}
Rectangle::getArea()
{
	return length * width ;
}

