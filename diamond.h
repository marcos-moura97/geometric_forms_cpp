#ifndef DIAMOND_H
#define DIAMOND_H

class Diamond
{
private:
    int hor_diagonal;
    int ver_diagonal;    

public:
    Diamond(int hor_diagonal, int ver_diagonal);
    
    void setHorizontalDiagonal(int hd);
    void setVerticalDiagonal(int vd);
    
    int getHorizontalDiagonal()  { return hor_diagonal; }
    int getVerticalDiagonal()  { return ver_diagonal; }
    
    
    void drawDiamond();
    
};

#endif // DIAMOND_H
