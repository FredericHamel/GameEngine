#include <iostream>
#include <Common.h>
#include <Point2D.h>
#include <Rectangle.h>
#include <cstdarg>

void log(int argc, const char *type, ...) {
	va_list va;
	va_start(va, type);
	for(int i = 0; i < argc; ++i) {
		switch(type[i]) {
			case 'P':
				std::cout << "Point: " << va_arg(va, ugen::Point2D) << std::endl;
				break;
			case 'R':
				std::cout << va_arg(va, ugen::Rectangle) << std::endl;
		}
	}
	va_end(va);
}
int main(int argc, char **argv) {
	ugen::Point2D dot(45, 60);
	ugen::Rectangle rect(dot, 640, 480);
	
	log(2, "PR", dot, rect);
	
	dot.Move(-10, 5);
	
	log(2, "PR", dot, rect);
	
	rect.Move(10, -5);

	log(2, "PR", dot, rect);
	return 0;
}
