/*
6. Write a C++ Program to show access to Private Public and Protected using 
Inheritance
*/
#include<iostream>

using namespace std;
class A{
	private:
		int private_var=10;
	protected:
		int protected_var=20;
	public:
		int public_var=30;
	
		int print_private(){
			return private_var;
		}		
};
class B:public A{
	public:
		int print_protected(){
			return protected_var;
		}
};
int main(){
		B b1;
	 cout<<"\n private variable :"<<b1.print_private();
	 cout<<"\n protected varibale :"<<b1.print_protected();
	 cout<<"\n public variable :"<<b1.public_var;
}
