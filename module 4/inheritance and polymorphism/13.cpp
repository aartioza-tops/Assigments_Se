/*
13.Write a program to find the max number from given two numbers
using friend function
*/
#include <iostream>
using namespace std;

class myClass {
		public:
    	int a,b;
 
//	public:
    	myClass()
    	{
        	a=50;
        	b=20;
    	}
 
    // friend class declaration
    friend class FriendClass;
};
class FriendClass {
public:
    void max(myClass& m1)
    {
    	if(m1.a>m1.b){
    		cout<<"\n biggest value :"<<m1.a;
		}else{
			cout<<"\n biggest value :"<<m1.b;
		}
    	
    }
};
int main()
{
    myClass g;
    FriendClass fri;
    fri.max(g);
    return 0;
}
