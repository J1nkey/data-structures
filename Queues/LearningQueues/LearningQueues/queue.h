#pragma once
#include<iostream>

struct Node {
	int value;
	Node* next;
	Node* previous;
};

struct Queue {
	Node* start = NULL;
	Node* end = NULL;

	void initial() {
		if (start == NULL && end == NULL) {
			// the new Node take a memory and return the address of that node, and we assign this address to start and end
			start = end = new Node();
		}
	}

	/// <summary>
	/// enQueue for insert value to the end of queue collection.
	/// </summary>
	/// <param name="value"></param>
	void enQueue(int value)
	{
		// First, we create a new node
		Node* newNode = new Node();
		newNode->value = value;


		// Now, we check the end node, and make this new node is the end node
		if (start == NULL)
		{
			start = end = newNode;
		}
		else 
		{
			end->next = newNode;
			newNode->previous = end;
			end = newNode;
		}
	}

	/// <summary>
	/// deQueue get the value of the start node, and make start now is next node of old start
	/// </summary>
	/// <returns>the value in head of queue</returns>
	int deQueue() {
		if (start == NULL)
		{
			return -1;
		}
		int value = start->value;

		start = start->next;
		return value;
	}

	/// <summary>
	/// Acquires the data element available at the head node of the queue without delete it
	/// </summary>
	/// <returns>the value in head of queue</returns>
	int peek()
	{
		if (start == NULL)
		{
			return -1;
		}

		return start->value;
	}

	/// <summary>
	/// Checks if the queue is empty
	/// </summary>
	/// <returns></returns>
	bool isNull()
	{
		if (start == NULL)
		{
			return true;
		}

		return false;
	}

	void enMultipleToQueue(int values[])
	{
		int length = *(&values + 1) - values;

		if (start == NULL)
		{
			start = end = new Node();
		}

		for (int i = 0; i < length; i++)
		{
			enQueue(values[i]);
		}
	}
};