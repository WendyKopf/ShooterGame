

#include <iostream> 
#include "Board.h"
#include "Player.h"

using namespace std;


//Shooter Game main file

int main(){

    Board newBoard;
    newBoard.sizex = 0;
    newBoard.sizey = 0;
    newBoard.setBoard(10,10);
    
    for (int i = 0; i < newBoard.sizex;i ++)
    {

    	for (int j =0; j < newBoard.sizey ; j++)
        {

        	cout << "-*-" ;
        }
        cout << endl;
    }

}


