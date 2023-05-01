#include <iostream>
#include "swap.h" 

struct Point {
    int x, y;
};

void printPoint(Point p) {
    std::cout << "(" << p.x << ", " << p.y << ")" << std::endl;
}

int main() {
    Point a = { 1, 2 };
    Point b = { 3, 4 };

    std::cout << "Do obmena:" << std::endl;
    printPoint(a);
    printPoint(b);

    swap(a, b); 

    std::cout << "Posle obmena:" << std::endl;
    printPoint(a);
    printPoint(b);

    return 0;
}
