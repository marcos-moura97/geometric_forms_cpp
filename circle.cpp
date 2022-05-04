#include "circle.h"

#include <iostream>
#include <math.h>

Circle::Circle(int radius) {
	setRadius(radius);
}

int Circle::pth(int x,int y) {
    return sqrt (pow(x,2)+pow(y,2));
 }
 
 void Circle::setRadius(int r){
 	radius = r;
 }

void Circle::drawCircle() {

    const int width=radius;
    const int length=radius*1.5;

    for (int y=width;y >= -width;y-=2)  {
        for (int x=-length;x <= length;x++)  {

            if ((int) pth(x,y)==radius) std::cout << "*";
            else std::cout << " ";

         }
         std::cout << "\n";
     }
     std::cin.get();

 }
