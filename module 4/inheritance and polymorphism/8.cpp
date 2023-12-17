/*
 8.Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading
*/
#include<iostream>

using namespace std;
class A{
	public:
	int a,b;
	void myFun(int a, int b,int c)
	{
  		cout << "\n sum = " << (a + b + c);
	}
 
	void myFun(int a, int b)
	{
    	cout << "\n sub = " << (a - b);
	}
	
	void myFun(float p,float q){
		cout << "mul = " << (p*q);
	}
	
	void myFun(long int x,long int y){
		cout << "div = " << (x/y);
	}	
};
int main(){
	A a1;
	a1.myFun(10,20,30);
	a1.myFun(50,20);
	a1.myFun(50,2);
	a1.myFun(50,2);
	
}
