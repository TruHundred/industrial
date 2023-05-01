#include "cone.h"
#include <iostream>
using namespace std;
int main() {
    Cone cone(5, 10);
    std::cout << "Cone surface area: " << cone.surfaceArea() << std::endl;
    std::cout << "Cone volume: " << cone.volume() << std::endl;

    TruncatedCone tCone(5, 10, 3);
    std::cout << "Truncated cone surface area: " << tCone.surfaceArea() << std::endl;
    std::cout << "Truncated cone volume: " << tCone.volume() << std::endl;

    TruncatedCone tCone2(5, 10, 3);
    std::cout << "Truncated cone == Truncated cone 2: " << (tCone == tCone2) << std::endl;

    TruncatedCone tCone3(3, 6, 2);
    std::cout << "Truncated cone == Truncated cone 3: " << (tCone == tCone3) << std::endl;

    std::cin >> tCone;
    std::cout << tCone << std::endl;

    return 0;
}