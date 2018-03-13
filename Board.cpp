#include<iostream>
using namespace std;
#include "Board.h"


    

	void Board::setBoard (int x, int y)
	{
		sizex=x;
		sizey=y;
	}

	void Board::printXY ()
	{
    
       cout << "X is : " << sizex << endl;
       cout << "Y is : " << sizey << endl;

	}

