/*
Define a class to represent a bank account. Include the following members:
	3. Data Member:
		-Name of the depositor
		-Account Number
		-Type of Account
		-Balance amount in the account
	   Member Functions
		-To assign values
		-To deposited an amount
		-To withdraw an amount after checking balance
		-To display name and balance
*/

#include<iostream>
using namespace std;
class account{
	public:
		char name[50],type;
		int balance,account_no,amount;
		
		void assign_value(){
			
			cout<<"\n enter name :";
			cin>>name;
			
			cout<<"\n enter type (c/s):";
			cin>>type;
			
			cout<<"\n enter balance :";
			cin>>balance;
			
			cout<<"\n enter account number :";
			cin>>account_no;
		}
		
		void deposite(){
			cout<<"\n enter your amount";
			cin>>amount;
			balance = balance + amount;
			amount=0;
		}
		
		void withdraw(){
			cout<<"\n enter amount you want to withdraw :";
			cin>>amount;
			if(balance > amount){
				balance = balance - amount;
			}else{
				cout<<"\n insufficiant balance ";
			}
		}
		void display(){
			cout<<"\n Name :"<<name;
			cout<<"\n Balance :"<<balance;
		}
};
int main(){
	
	int choice=1;
	
	account a1;
	
	

	
	
	while(choice!=0){
		
	cout<<"\n 1.New account";
	cout<<"\n 2.deposite amount";
	cout<<"\n 3.withdraw amount";
	cout<<"\n 4.diposite amount";
	cout<<"\n 5.display";
	cout<<"\n 0.Exit";	
	
	cout<<"\n enter your choice:";
	cin>>choice;
	
	switch(choice){
		case 1:
			a1.assign_value();
			break;
			
		case 2:
			a1.deposite();
			break;
			
		case 3:
			a1.withdraw();
			break;
			
		case 4:
			a1.deposite();
			break;
			
		case 5:
			a1.display();
			break;
			
		default:
			cout<<"Wrong choice";
			break;		
	}
	}
	
	
	return 0;
}

