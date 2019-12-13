
#include <iostream>
#include "Stack.h"
#include "stack"

using namespace std;

int main() {

	Object *pObj = new Stack<int>();
	
	pObj->main();

	delete pObj;

	return 0;
}