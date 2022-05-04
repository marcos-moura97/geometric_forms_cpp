#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
private:
    int radius;
    
    int pth(int x,int y);

public:
    Circle(int radius);
    
    void setRadius(int r);
    
    int getRadius()  { return radius; }
    
    
    void drawCircle();
    
};

#endif // CIRCLE_H
