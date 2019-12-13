
#include <conio.h>
#include <iostream>
#include "App.h"
#include "Quest.h"

using namespace std;

int main() {

	App *app = new Q_10799();
	app->run();
	
	delete app;

	_getch();

	return 0;
}
