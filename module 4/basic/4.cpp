/*
4. Write a C++ program to implement a class called Circle that has private 
member variables for radius. Include member functions to calculate the 
circle's area and circumference.
*/
#include<iostream>
using namespace std;
#define PI 3.14
class circle{
	private:
		float r,a,c;
	public:
		void area(){
			cout<<"\nenter radius of circle :";
			cin>>r;
			a=PI*r*r;
			cout<<"\n area of circle :"<<a;
		}	
		
		void circumference(){
			cout<<"\nenter radius of circle :";
			cin>>r;
			c=2*PI*r;
			cout<<"\n circumference of circle :"<<c;
		}
};
int main(){
	circle c1;
	
	
	
	c1.area();
	c1.circumference();
}
