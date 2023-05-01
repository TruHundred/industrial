#include "cone.h"
#include <iostream>
#include <cmath>

const double pi = 3.14159265358979323846;

Cone::Cone() : x_(0), y_(0), z_(0), r_(0), h_(0) {}

Cone::Cone(double x, double y, double z, double r, double h)
    : x_(x), y_(y), z_(z), r_(r), h_(h) {}

Cone::Cone(double r, double h)
    : x_(0), y_(0), z_(0), r_(r), h_(h) {}

void Cone::input() {
    std::cout << "Enter the coordinates of the center of the base: ";
    std::cin >> x_ >> y_ >> z_;
    std::cout << "Enter the radius of the base: ";
    std::cin >> r_;
    std::cout << "Enter the height: ";
    std::cin >> h_;
}

void Cone::output() {
    std::cout << "Center of the base: (" << x_ << ", " << y_ << ", " << z_ << ")" << std::endl;
    std::cout << "Radius of the base: " << r_ << std::endl;
    std::cout << "Height: " << h_ << std::endl;
}

double Cone::surfaceArea() {
    return pi * r_ * (r_ + sqrt(r_ * r_ + h_ * h_));
}

double Cone::volume() {
    return pi * r_ * r_ * h_ / 3.0;
}