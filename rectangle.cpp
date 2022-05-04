#include "rectangle.h"

#include <iostream>

Rectangle::Rectangle(int width, int height){
	setWidth(width);
	setHeight(height);
}

 
 void Rectangle::setWidth(int w){
 	width = w;
 }
 
 void Rectangle::setHeight(int h){
 	height = h;
 }

void Rectangle::drawRect()  {
	for(int i=0; i<height; i++) {
		for(int j=0; j<width; j++) {
			if(i==0 || i==height-1 || j==0 || j==width-1) std::cout << "*";
			else std::cout << " ";
		}
		std::cout<<std::endl;
	}
}
