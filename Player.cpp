#include<string>
#include <iostream> 
using namespace std;
#include "Player.h"



        //Member functions

        Player::Player()
        {
            numBullets =5;
        }

        void Player::getNumBullets()
        {
            cout << numBullets <<endl;
        }

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



