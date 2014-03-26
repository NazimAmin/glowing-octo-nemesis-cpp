#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>
#include <functional>
using namespace std;
// This function reverses a string in place. For example,
// if the original value of the string was "cat", the
// value after reversing it is "tac".
void reverse(string& s){
	int i = 0, j = s.length() - 1;
	while (i < j){
		swap(s[i++], s[j--]);
	}
}
int main(){
	// Create a vector of strings and allocate 100 elements worth of space
	// to start with.
	vector<string> theWords;
	theWords.reserve(100);
	// Create an iterator that will iterate over the strings in the input
	// stream cin. Also create an iterator that matches the end of the input.
	istream_iterator<string> stringReader(cin);
	istream_iterator<string> stringReaderEOF;
	// Read strings in one at a time and push them onto the vector.
	while (stringReader != stringReaderEOF){
		theWords.push_back(*stringReader++);
	}
	// Show the words.
	cout << "The words read in are:\n";
	// 1: Fill in the function argument so that
	// the output from this statement will be the words,
	// one to a line. Do the same with each copy()
	// call in the code below. See the sample output.
	copy(theWords.begin(), theWords.end(), ostream_iterator<string>(cout, " \n"));
	//copy();

	//Make of copy of the input.
	vector<string> aCopy(theWords);
	// Now reverse all the strings in the copy and show the result.
	// 2: Complete the for_each call so that
	// it will reverse every string in the copy.
	for_each(aCopy.begin(), aCopy.end(), reverse);
	cout << "\nAfter reversing all the strings in the copy:\n";
	
	copy(aCopy.begin(), aCopy.end(), ostream_iterator<string>(cout, " \n"));
	// 3. Sort the original strings in descending order.
	// Complete the sort call so that this call will
	// sort the words in theWords in descending order.
	sort(theWords.begin(), theWords.end(), std::greater<string>());
	cout << "\nAfter sorting the strings in descending order:\n";
	copy(theWords.begin(), theWords.end(), ostream_iterator<string>(cout, " \n"));
	cout << endl;
}

/*Sample output :
	the rain in spain falls
	mainly in the plain
	^Z
	^Z
	The words read in are :
	the
	rain
	in
	spain
	falls
	mainly
	in
	the
	plain
	After reversing all the strings in the copy :
	eht
	niar
	ni
	niaps
	sllaf
	ylniam
	ni
	eht
	nialp
	After sorting the strings in descending order :
	the
	the
	spain
	rain
	plain
	mainly
	in
	in
	falls
	Press any key to continue */

