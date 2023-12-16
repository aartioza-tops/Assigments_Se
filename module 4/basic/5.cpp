/*
5. Write a C++ program to create a class called Rectangle that has private 
member variables for length and width. Implement member functions to 
calculate the rectangle's area and perimeter
*/
#include<iostream>
using namespace std;
class rectangle{
	private:
		float length,width;
	public:
		void get_value(){
			cout<<"\n enter length :";
			cin>>length;
			
			cout<<"\n enter width :";
			cin>>width;
		}
		
		float area(){
			return length*width;
		}
		float perimeter(){
			
				return (length+width)*2;
		}
};
int main(){
	rectangle r1;
	r1.get_value();
	cout<<"\n area of rectangle is :"<<r1.area();
	cout<<"\n perimeter of rectancle is :"<<r1.perimeter();
}
