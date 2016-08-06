#include <iostream>
#include "SpriteFontTest.h"

void usage(char *progname) {
	std::cout << "Usage: " << progname << " font_name " << " message\n";
}

int main(int argc, char **argv) {

	if (argc != 3) {
		usage(argv[0]);
	} else {
		try {
			SpriteFontTest game;
			game.run();
		} catch(std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
}
