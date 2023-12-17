/*
5. Assume that the test results of a batch of students are stored in three different
classes. Class Students are storing the roll number. Class Test stores the
marks obtained in two subjects and class result contains the total marks
obtained in the test. The class result can inherit the details of the marks
obtained in the test and roll number of students. (Multilevel Inheritance)
*/
#include<iostream>

using namespace std;
class student{
	public:
		int rollno;
		
		void get_rollno(){
			cout<<"\n enter rollno :";
			cin>>rollno;
		}	
};
class Test:public student{
	public:
		int sub1,sub2;
		
		void get_subject(){
			cout<<"\n enter subject1 mark :";
			cin>>sub1;
			
			cout<<"\n enter subject2 mark :";
			cin>>sub2;
		}
};
class result:public Test{
	public:
		int total=0;
		
		void calculate_total(){
			total = sub1+sub2;
		}
		
		
		void display_result(){
			
			cout<<"\n Roll no :"<<rollno;
			cout<<"\n Total :"<<total;
		}
};

int main(){
	result r1;
	r1.get_rollno();
	r1.get_subject();
	r1.calculate_total();
	r1.display_result();
		}
