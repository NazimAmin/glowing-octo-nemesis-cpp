#pragma once
class Array
{
public:
	Array();		//default constructor
	Array(int*, int); //paramarized constructor
	~Array();		//destructor
	Array& operator+=( Array& right);	//compund operator overload	
	void print();		//print function to display the concatinating array values
private:
	int size;		//number of elements in the array
	int* ptr;		//address of dynamicly allocated memory
};



