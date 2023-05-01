#include "Type4.h"
#include <iostream>
#include <cmath>

Type4::Type4(double a1, double c1) {
    A = a1;
    C = c1;
}

void Type4::Get_answer() {
    double D = A * A - 4 * C;
    if (D < 0) {
        std::cout << "Uravnenie 0 koren" << std::endl;
    }
    else if (D == 0) {
        double x = -A / (2 * C);
        std::cout << "Uravnenie 1 koren: x = " << x << std::endl;
    }
    else {
        double x1 = (-A + sqrt(D)) / (2 * C);
        double x2 = (-A - sqrt(D)) / (2 * C);
        std::cout << "Uravnenie 2 koren: x1 = " << x1 << ", x2 = " << x2 << std::endl;
    }
}

void Type4::show() {
    std::cout << "Uravnenie: " << A << "*x^2 + " << C << " = 0" << std::endl;
}
