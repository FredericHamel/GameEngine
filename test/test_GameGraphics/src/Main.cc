#include <iostream>
#include <GraphicManager.h>

#define updateEvent() \
	if(read() == EOF) break

char read() {
	std::cin.ignore(std::cin.rdbuf()->in_avail());
	return std::cin.get();
}

int main(int argc, char **argv)
{
	bool hide = 0;
	ugen::GraphicManager gm;
	gm.init();
	while(1) {
		gm.clear(0.0f,0.0f,1.0f,1.0f);
		gm.updateDraw();
		updateEvent();
	
		gm.clear(0.0f,1.0f,0.0f,1.0f);
		gm.updateDraw();
		updateEvent();
	
		gm.clear(1.0f,1.0f,0.0f,1.0f);
		gm.updateDraw();
		updateEvent();

		do {
			std::cout << "Want to hide the windows (y/n)\n";
			char c = read();
			switch(c) {
			 	case 'y':
					if(hide == 0)
						gm.hide();
				 	hide = 1;
					break;
				case 'n':
					if(hide == 1)
						gm.show();
					hide = 0;
					break;
				default:
					std::cout << "Wrong choice...\n";
			}
				
		} while(hide);
	}
	return 0;
}
