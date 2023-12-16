/*
2. Write a program of Addition, Subtraction, Division, Multiplication using
constructor.
*/
#include <iostream>
using namespace std;
class myClass{
	public:
		int a,b,c;
		
		myClass(int x,int y){
			a=x;
			b=y;
		}
		int add(){
			return a+b;	
		}
		int sub(){
			return a-b;
		}
		int div(){
			return a/b;
		}
		int mul(){
			return a*b;
		}
};
int main(){
	 myClass m1(20,2);
	 
	 cout<<"\n Addition :"<<m1.add();
	 cout<<"\n Substraction :"<<m1.sub();
	 cout<<"\n Multiplication :"<<m1.mul();
	 cout<<"\n Division :"<<m1.div();
	 
	return 0;
}
