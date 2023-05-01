#include "Type3.h"
#include <iostream>

Type3::Type3(double c1) {
	C = c1;
}

void Type3::Get_answer() {
	std::cout << "Uravnenie 0 resheniy" << std::endl;
}

void Type3::show() {
	std::cout << "Uravnenie 0*x + " << C << " = 0" << std::endl;
}
