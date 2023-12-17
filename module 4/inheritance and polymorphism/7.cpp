/*
7.7. Write a C++ Program to illustrates the use of Constructors in multilevel 
inheritance
*/
#include<iostream>

using namespace std;
class A{
	public:
		A(){
			cout<<"\n class A constructor";
		}
};
class B:public A{
	public:
		B(){
			cout<<"\n class B constructor";
		}
};
int main(){
	B b1;
	
}
