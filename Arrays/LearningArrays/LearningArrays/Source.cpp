#include<iostream>

using namespace std;

void main() {
	// Before understand about array knowledge, we should know array knowledge is very relating to memory knowledgwe!

	// For declaring an array, we add a square brackets at postfix of variable name with specific size of array
	int simpleIntArr[5];		// Creating an array with type is integer and has sizes are 5, and set it's name is simpleIntArr

	// Simple operations in array

	// Assign value to array element
	simpleIntArr[0] = 5;	// Access index 0 of simpleIntArr array and assign 5 to it
	/*
	* It looks like, ok now we have an array with type int with size is 5, we want to set the first cell is 5.
	* Now, we must know that the array always begin at index 0, that means if we want to access to the first element of array,
	* we call arrayName[0].
	*
	* If we want to know access operation as the memory knowledge, we just know that is accessing to memory of index 0 and
	* set 5 to that.
	*
	* 0x0000	0x0004		0x0008		0x0012		0x0016 (5 elements of array) - simpleIntArr
	* index 0	index 1		index 2		index 3		index 4
	*	^
	*	|
	*	|
	* assign 5 to this
	*/
	printf("%d\n", simpleIntArr[0]);


	// What will happen when we access bigger or smaller index of array?
	printf("Bigger index: %d\n", simpleIntArr[5]);		// it returns a negative number
	printf("Smaller index: %d\n", simpleIntArr[-1]);		// also returns a negative number
	// these are accessing a memory location containing garbage value

	/* However, when a location is not used, it contains a garbage value.
	* Example: in above array, we only insert value for first index, and four locations are not, if we travesal, we will
	* see garbage value.
	*/


	// For-loop action
	// Traversal location of array
	for (int i = 0; i < 5; i++)
	{
		cout << "value of index " << i << ":" << simpleIntArr[i] << endl;
	}

	// With for-loop, we can insert value for each location of array
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter your value:";
		cin >> simpleIntArr[i];
	}
	
	for (int i = 0; i < 5; i++)
	{
		cout << "value of index " << i << ":" << simpleIntArr[i] << endl;
	}
}