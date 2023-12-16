/*
12.Write a program to swap the two numbers using friend function
without using third variable
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
    void swap(myClass& m1)
    {
    	m1.a=m1.a-m1.b;
    	m1.b=m1.a+m1.b;
    	m1.a=m1.b-m1.a;
    	
    	cout<<"\n A ="<<m1.a;
    	cout<<"\n B ="<<m1.b;
    }
};
int main()
{
    myClass g;
    FriendClass fri;
    fri.swap(g);
    
    
    return 0;
}
