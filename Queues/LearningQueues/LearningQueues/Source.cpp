#include "queue.h"
#include<iostream>

using namespace std;

void main()
{
	// Before learn about the Queue knowledge, we should know Pointer knowledge

	// declaring a simple queue variable
	Queue simpleQueue;
	/*
	* 0x0000	0x0004 (unnamed memory, these're used for start and end node)
	* 
	* 0x0032 (simpleQueue)
	* start (0000000...)	because this is assign to null
	* end (000000...)
	* 
	* when we call .initial() function =>
	* start (0x0000)
	* end (0x0004)
	*/

	// when we not assign start and end variables to NULL first, the compiler will tell an error that the variable is not
	// initialized before.

	// For checking start node and end node of Queue
	cout << simpleQueue.start << endl;			// returning 000000000...
	cout << simpleQueue.end << endl;			// returning 000000000...
	// That means everything is ok, because the start and end now are NULL value

	//simpleQueue.initial();
	//cout << simpleQueue.start << endl;			// returning the address of start in memory
	//cout << simpleQueue.end << endl;			// returning the address of end in memory


	//simpleQueue.enQueue(30);
	//simpleQueue.enQueue(45);

	//cout << simpleQueue.deQueue() << endl;
	//cout << simpleQueue.deQueue() << endl;
	//cout << simpleQueue.deQueue() << endl;


	int values[] = { 1,2,3,4,5,6 };
	simpleQueue.enMultipleToQueue(values);
	cout << simpleQueue.deQueue() << endl;
	cout << simpleQueue.deQueue() << endl;
	cout << simpleQueue.deQueue() << endl;
	cout << simpleQueue.deQueue() << endl;
	cout << simpleQueue.deQueue() << endl;

}