
#include <iostream>
#include "HashQ.h"
#include "SortQ.h"
#include "BruteForceQ.h"
#include "Greedy.h"

using namespace std;

int main() {

	//Object *obj = new HashQ();
	//Object* obj = new SortQ();
	//Object* obj = new BruteForceQ();
	Object* obj = new Greedy();

	obj->run();

	delete obj;

	return 0;
}