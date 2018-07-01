// stackWithArray.cpp : Defines the entry point for the console application.
////by Carol Mcdaid

// assessentStack.cpp : Defines the entry point for the console application.


#include "stdafx.h"
#include <iostream>
const int sizeArray = 20;
using namespace std;

struct myStack {
	//struct that holds the array and variable pop
	int stack[sizeArray];
	int top =0;

};
//list of functions

void init(struct myStack );
void push(struct myStack *, int);
int pop(struct myStack *);
bool isEmpty(struct myStack);
bool isFull(struct myStack);
void showstack(struct myStack);

int main()
{
	int i;
	//calling the struct
	struct myStack thestack;
	init(thestack);
	cout << "Testing Stack \n";
	// Calling the showstack function before I push the values into the stack
	showstack(thestack);
	// the for loop that pushes the values to the stack
	for (i = 0; i < sizeArray;i++)
	{
		push(&thestack, i);


	}

	cout << "\n";
	// Calling the showstack function to show all the values in the stack
	showstack(thestack);
	
	//boolean will display message if the stack is full
	isFull(thestack);
	cout << "\n";
	cout << "pop all the numbers\n";

	//popping all the values out the stack
	for (i = 0; i < sizeArray - 1;i++)
	{
		//displays all the numbers getting popped out the stack
		cout << (pop(&thestack));
		cout << "\n";


	}
	//displays a message only if the stack is empty
	isEmpty(thestack);
	
	cin.get();

	return 0;
}


void init(struct myStack * thestack) {
	top = -1;
}
void push(struct myStack * thestack, int item)
{
	//pushing the value into the stack
	thestack->top++;
	thestack->stack[thestack->top] = item;
	return;
}

int pop(struct myStack * thestack)
{
	//deleting the value in the stack
	thestack->top--;

	return thestack->stack[thestack->top];
}
bool isEmpty(struct myStack  thestack)
{
	//if the stack is empty return true
	if (thestack.top <= 0)
	{
		cout << "stack is empty";
		return true;

	}
	else
	{
		// if stack isnt empty return false
		return false;
	}

}
bool isFull(struct myStack  thestack)
{
	if (thestack.top < sizeArray)
	{
		//if the stack is full return true
		cout << "stack is full";
		return true;
	}
	else
	{
		// if stack isnt full return false
		return false;
	}

}


void showstack(struct myStack  thestack)
{
	int i;
	//displays the stack values one by one.
	printf("value of top %d\n", thestack.top);
	for (i = 0;i< thestack.top + 1;i++)
	{
		printf("position %3d value %5d \n", i, thestack.stack[i]);
	}


}

