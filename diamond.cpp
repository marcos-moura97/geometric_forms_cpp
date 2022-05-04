#include "diamond.h"

#include <iostream>

Diamond::Diamond(int hor_diagonal, int ver_diagonal){
	setHorizontalDiagonal(hor_diagonal);
	setVerticalDiagonal(ver_diagonal);
}

 
 void Diamond::setHorizontalDiagonal(int hd){
 	hor_diagonal = hd;
 }
 
 void Diamond::setVerticalDiagonal(int vd){
 	ver_diagonal = vd;
 }

void Diamond::drawDiamond()  {
	for(int i=0, k=ver_diagonal, l=ver_diagonal; i<ver_diagonal; i++, k++, l--) {
		for(int j=0; j<hor_diagonal; j++) {
			if(j==k || j==l) std::cout << "*";
   			else std::cout << " ";
  		}
  		std::cout<<std::endl;
 	}
 
 	for(int i=0, k=0, l=hor_diagonal; i<=ver_diagonal; i++, k++, l--) {
  		for(int j=0; j<=hor_diagonal; j++) {
   			if(j==k || j==l) std::cout << "*";
   			else std::cout << " ";
  		}
  		std::cout<<std::endl;
 	}
}
