#include "triangle.h"

#include <iostream>
#include <math.h>

Triangle::Triangle(int size) {
	setSize(size);
}
 
void Triangle::setSize(int r){
 	size = r;
 }

void Triangle::drawTriangle() {

	for(int i=0 ; i<=size ; i++) {
		for(int j=0 ; j<=i ; j++) {
			if(i!=size) {
				if(j==0 || j==i) std::cout<< "* ";
				else std::cout<<"  ";
   			}
   			else if (i==size ) std::cout<< "* ";
		}
		for(int spaces=i ; spaces<size ; spaces++)
			std::cout<<"  ";
		std::cout<<std::endl;
 	}

}
