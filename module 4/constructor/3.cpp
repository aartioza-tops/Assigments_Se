
/*
3. Write a C++ program to create a class called Car that has private 
member variables for company, model, and year. Implement member 
functions to get and set these variables.
*/
#include <iostream>
using namespace std;
class Car{
	public:
		char company[],model[50];
		int year;
		
	// Set
    void setCompany(char* c) {
    	company=c;
    }
    void setModel(char *){
    		model=m;
	}
	
	void setYear(int y){
			year=y;
	}
	
	//get
	  void getCompany() {
    	return company;
    }
    void getModel(){
    		return model;
	}
	
	void getYear(){
			return year;
	}
    
		
};
int main(){
	 Car c1;
	 
	 c1.setCompany("TATA");
	 c1.setModel("mahendra");
	 c1.setYear(2023);
	 
	 cout<<c1.getCompany();
	 cout<<c1.getModel();
	 cout<<c1.getYear();
	return 0;
}
