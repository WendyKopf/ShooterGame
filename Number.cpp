#include<iostream>
using std::cout;
using std::endl;

class Number 
{
    public:
      //class member
      int Num;
      int count;

      //Member Function

      void printNumber()
      {
      	cout << Num << endl;
      }

      //another member function
      int countPasses (){
       
           count ++;
           return count;
      }




};



int main ()
{

	Number n;
	n.count = 0;
	n.Num = 12;

    cout << n.countPasses() << endl;
	n.printNumber();

}