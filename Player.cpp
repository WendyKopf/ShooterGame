#include<string>
#include <iostream> 
using namespace std;

class Player
{
    public:

        //Member variables

    	int xPos;
    	int yPos;

    	int numBullets;

        //Member functions

    	void setPos( int x, int y)
    	{
             xPos = x;
             yPos = y;
    	}

    	void setNumBullets( string value)
    	{

    		if(numBullets < 5 && value == "increase")
    	    {
             	numBullets ++;
            }
            else if(value == "decrease") 
            {
                numBullets--;
            }
    	}

};

int main () {

	Player newPlayer;

	newPlayer.setPos(3,4);
	newPlayer.numBullets =5;

	cout << newPlayer.xPos << " , " << newPlayer.yPos << endl;
	



}