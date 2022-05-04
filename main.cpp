#include "diamond.h"
#include "circle.h"
#include "rectangle.h"
#include "triangle.h"
#include <iostream>

int main ( )  {
    Diamond diamond = Diamond(10, 5);
    Rectangle rect = Rectangle(25, 5);
    Circle circle = Circle(5);
    Triangle triangle = Triangle(5);
    
    diamond.drawDiamond();
	std::cout<<std::endl;
    rect.drawRect();
	std::cout<<std::endl;
	triangle.drawTriangle();
	std::cout<<std::endl;
	circle.drawCircle();    

return 0;
 }
