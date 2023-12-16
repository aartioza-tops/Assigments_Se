/*
11.Write a program to calculate the area of circle, rectangle and triangle
using Function Overloading
Rectangle: Area * breadth 	// area = w · h
Triangle: ½ *Area* breadth // (1/2) · b · h
Circle: Pi * Area *Area   //	p · r2
*/
#include <iostream>
#define PI 3.14
using namespace std;

class calculate{
	
	public: 
	
	float width,height,base;
	
	// rectangle
	int area(int w,int h)
	{
    	return(w*h);
	}
	
	//circle
	float area(float r)
	{
    	return(3.14*r*r);
	}
	
	//triangle
	float area(float b,float h)
	{
   		return((1/2)*b*h);
	}
	
};
int main(){
	 calculate c1;
	cout<<"\n"<<c1.area(3,6);
	 cout<<"\n"<<c1.area(3);
	 cout<<"\n"<<c1.area(4,4);
	return 0;
}
