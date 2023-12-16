/*
3. Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance)
*/
#include<iostream>
using namespace std;
class Person{
	public:
	char name[50];
	int age;
	
	public:
	void set_value(){
		cout<<"\n name :";
		cin>>name;
		
		cout<<"\n age :";
		cin>>age;
	}
};

class Student:public Person{
	protected:
	float per;
	
	public:
	void get_persentage(){
		cout<<"\n persentage :";
		cin>>per;
	}
	
	void display(){
		cout<<"\n student name :"<<name;
		cout<<"\n student age :"<<age;
		cout<<"\n student persentage :"<<per;
	}
};
class Teacher:public Person{
	protected:
	int salary;
	
	public:
	void get_salary(){
		cout<<"\n salary :";
		cin>>salary;
	}
	
	void display(){
		cout<<"\n teacher name :"<<name;
		cout<<"\n teacher age :"<<age;
		cout<<"\n teacher salary :"<<salary;
	}
};
int main(){
	Student s1;
	s1.set_value();
	s1.get_persentage();
	s1.display();
	
	Teacher t1;
	t1.set_value();
	t1.get_salary();
	t1.display();
}



