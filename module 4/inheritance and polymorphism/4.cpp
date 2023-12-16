/*
4. Write a C++ Program display Student Mark sheet using Multiple inheritance
*/
#include<iostream>
using namespace std;
class result{
	public:
	int m1,m2,m3;
	void get_marks(){
		cout<<"\n enter 3 subject marks";
		cin>>m1;
		cin>>m2;
		cin>>m3;
	}
	
};
class sport{
	public:
	int spmk;
	void get_sportmk(){
		cout<<"\n enter sport marks";
		cin>>spmk;
	}
};
class student:public result,public sport{
	public:
	char name[50];
	int total;
	
	void get_info(){
		cout<<"\n name :";
		cin>>name;
		get_marks();
		get_sportmk();
	}
	
	void display_result(){
		total=m1+m2+m3+spmk;
		cout<<"\n name :"<<name;
		cout<<"\n Total :"<<total;
		
	}
};
int main(){
	
	student s1;
	s1.get_info();
	s1.display_result();
	
}



