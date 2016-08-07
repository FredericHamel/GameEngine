#include <iostream>
#include <GraphicManager.h>

#define updateEvent() \
	if(read() == EOF) break

char read() {
	long in_avail = std::cin.rdbuf()->in_avail();
	std::cin.ignore(in_avail);
	return std::cin.get();
}

void update(bool &hide, bool &done)
{
	int choice;
	std::cout << "1. Toggle window visibility\n"
		<< "2. Close application\n"
		<< "3. Do nothing...\n";
	do {
		std::cin.clear();
		std::cout << "Choose Option: ";
		std::cin >> choice;
		std::cout << "Choice _> " << choice << std::endl;
	} while(std::cin.fail() || (choice < 1 && choice > 3));
	if(std::cin.get() == '\n')
		std::cout << "Newline\n";

	switch(choice) {
		case 1:
			hide = !hide;
			break;
		case 2:
			done = !done;
	}
}

int main(int argc, char **argv)
{
	bool hide = false;
	bool done = false;
	ugen::GraphicManager gm;
	gm.init();
	while(!done) {
		if(!hide)
			gm.show();
		else
			gm.hide();
		update(hide, done);
		gm.clear(0.0f,0.0f,1.0f,1.0f);
		gm.updateDraw();
		updateEvent();

		gm.clear(0.0f,1.0f,0.0f,1.0f);
		gm.updateDraw();
		updateEvent();
	
		gm.clear(1.0f,1.0f,0.0f,1.0f);
		gm.updateDraw();
		updateEvent();
	}
	return 0;
}
