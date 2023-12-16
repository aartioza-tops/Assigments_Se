/*
2. Write a C++ Program to find Area of Rectangle using inheritance
*/
#include<iostream>
using namespace std;
class Rectangle{
	public:
		float w,h;
		
		void input_data(){
			cout<<"\n enter width of rectangle";
			cin>>w;
			
			cout<<"\n enter height of rectangle";
			cin>>h;
		}
};
class Area:public Rectangle{
	
	public:
		float Area_of_Rectangle(){
			return w*h;
		}
	
};

int main(){

	
	Area a1;
	a1.input_data();
	cout<<"\n Area of ractangle is :"<<a1.Area_of_Rectangle();
	
}

