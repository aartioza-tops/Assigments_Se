/*
1. Write a program to find the multiplication values and the cubic values using
inline function
*/
#include <iostream>
using namespace std;
inline int cube(int s) { return s * s * s; }
int main(){
	 cout << "The cube of 3 is: " << cube(3) << "\n";
	return 0;
}
