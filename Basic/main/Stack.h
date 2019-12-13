#pragma once
#include <stdio.h>
#include "Object.h"

#define DEFAULT_SIZE 5

template <typename data>
class Stack : public Object
{
public:
	Stack() {

		pStack = new data[DEFAULT_SIZE];

		printf("Create Stack\n");
	}

	Stack(int iSize) : size(iSize) {

		pStack = new data[size];

		printf("Create Stack\n");
	}

	virtual ~Stack() {

		delete pStack;

		printf("Delete Stack\n");
	}

	// main
	virtual void main() {

		printf("run!\n");
	}

private:
	//======================
	// Values
	//======================
	
	// stack
	data *pStack;

	// Stack size
	int size;

	//======================
	// Functions
	//======================

	// push
	bool push(int iData) {
		

	}

	// pop
	bool pop(int *pGetData) {

	}
	
	// empty
	bool empty() {

	}

	// top
	int top() {

	}

	// size
	int getSize() {

	}
};
