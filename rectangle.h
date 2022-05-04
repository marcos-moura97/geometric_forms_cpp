#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    int width;
    int height;    

public:
    Rectangle(int width, int height);
    
    void setWidth(int w);
    void setHeight(int h);
    
    int getWidth()  { return width; }
    int getHeight()  { return height; }
    
    
    void drawRect();
    
};

#endif // RECTANGLE_H
