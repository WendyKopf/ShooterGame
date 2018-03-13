#include<string>
#include <iostream> 
using namespace std;
#include "Player.h"



        //Member variables


        //Member functions

    	void Player::setPos( int x, int y)
    	{
             xPos = x;
             yPos = y;
    	}

    	 void Player::setNumBullets( string value)
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



