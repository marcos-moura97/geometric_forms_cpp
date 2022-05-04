#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle
{
private:
    int size;    

public:
    Triangle(int size);
    
    void setSize(int l);
    
    int getSize()  { return size; }
    
    
    void drawTriangle();
    
};

#endif // TRIANGLE_H
