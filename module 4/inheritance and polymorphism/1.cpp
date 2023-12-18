/*
1. Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance)
*/
#include<iostream>
using namespace std;
class Cricketer{
		public:
			char name[20];
			
};
class Batsman : public Cricketer{
	public:
		int runs,avg,best,mathes;
	
	void input_data(){
		
		cout<<"\n enter name :";
		cin>>name;
		
		cout<<"\n enter runs :";
		cin>>runs;
		
		cout<<"\n enter total mathes";
		cin>>mathes;
	}
	
	int average_runs(){
		return runs/mathes;
	}
	
	void display_data(){
		cout<<"\n*****************************\n";
		cout<<"\nName :"<<name;
		cout<<"\nRuns :"<<runs;
		cout<<"\nAverage :"<<average_runs();
		cout<<"\n*****************************\n";
	}	
};
int main(){
	Batsman b1;
	b1.input_data();
	b1.display_data();
	return 0;
}
