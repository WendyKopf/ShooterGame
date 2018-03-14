class Player
{
    public:

        //Constructor:

        Player();

        //Member functions

    	void setPos( int x, int y);

    	void setNumBullets( std::string value);

        void getNumBullets();

    private:

        int xPos;
        int yPos;

        int numBullets;

};
