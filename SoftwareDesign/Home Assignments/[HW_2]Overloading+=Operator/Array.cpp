
#include "Array.h"
#include <iostream>
using namespace std;

/*
	default constructor 
	sets the private members to 0
*/
Array::Array()
{
	ptr = 0;
	size = 0;
}
/*
	paramarazied constructor
	@param array, size1
	sets the param members to privated members
*/
Array::Array(int* array, int size1){

	size = size1;
	ptr = array;
}
/*
	compund operator overloading
	@param right //object of Array
	this function overloads the += operator and sorts the two array as they are merging.
*/
Array& Array::operator+=(Array& right){   
	int tempSize = size + right.size;
	int* temp = new int[tempSize]; //creating dynamic temp arrays to hold the merged array values

	int i = 0;
	int j = 0;
	int k = 0;

	while (i < size && j < right.size) {	//checking if array size doesn't go out of bounds
		if(ptr[i] == right.ptr[j])			//checking for duplicate
		{
			temp[k++] = ptr[i++];
			j++;
			tempSize--;						//decreasing the size so that we don't have junk
		}
		 if (ptr[i] < right.ptr[j]) {		//checking for the values whether first array[i] is smaller or 
			temp[k++] = ptr[i++];			//equal to second array[i]
			//if so addding the first array values to temp and increamenting k, i
		}
		else {
			temp[k++] = right.ptr[j++];		//else adding the second array values to temp
		}
	}
	/*
		below two while loops checks if anyof the items are left 
		only one for loop will be run
	*/

	while (i < size ){
		temp[k++] = ptr[i++];
	}
	while (j < right.size){
		temp[k++] = right.ptr[j++];
	}

	ptr = temp;		//setitng the ptr to temp
	size = tempSize;	//changing the size
	return *this;
}

void Array::print(){
	for (int i = 0; i < size; i++){
		cout << ptr[i] << " ";
	}
	cout <<"\n";
}

Array::~Array()
{
	delete[] ptr;
}