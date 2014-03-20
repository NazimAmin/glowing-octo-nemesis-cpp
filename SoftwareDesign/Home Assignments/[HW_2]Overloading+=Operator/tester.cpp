#include <iostream>
#include "Array.h"
using namespace std;

int main(){

	int* arr = new int[5];		//dynamic array created
	int* arr2 = new int[6];		//dynamic array created
	
	/*
		fillinf up arrays with values
	*/
	arr[0] = 1;				
	arr[1] = 5;
	arr[2] = 7;
	arr[3] = 10;
	arr[4] = 20;

	arr2[0] = 1; 
	arr2[1] = 4;
	arr2[2] = 6;
	arr2[3] = 8; 
	arr2[4] = 9;
	arr2[5] = 15;
	
	Array test(arr, 5);		//first object created //paramarized constructor gets called
	cout << "First array: ";
	test.print();
	cout << "\n";
	Array test1(arr2, 6);	//second object created //paramarized constructor gets called
	cout << "Second array: ";
	test1.print();
	cout << "\n";
	cout << "Merged array: ";
	test += test1;		//adding both objects += operator function gets called
	test.print();		//calling the pint function to print the values

	return 0;
}