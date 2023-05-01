#include "cone.h"
#include <cmath>

const double PI = 3.14159;

Cone::Cone() : radius(0), height(0) {}

Cone::Cone(double r, double h) : radius(r), height(h) {}

double Cone::surfaceArea() {
    return PI * radius * (radius + sqrt(pow(height, 2) + pow(radius, 2)));
}

double Cone::volume() {
    return PI * pow(radius, 2) * height / 3;
}

std::ostream& operator<<(std::ostream& os, const Cone& cone) {
    os << "Cone (radius = " << cone.radius << ", height = " << cone.height << ")";
    return os;
}

std::istream& operator>>(std::istream& is, Cone& cone) {
    std::cout << "Enter the radius and height of the cone: ";
    is >> cone.radius >> cone.height;
    return is;
}

TruncatedCone::TruncatedCone() : topRadius(0) {}

TruncatedCone::TruncatedCone(double r, double h, double tr) : Cone(r, h), topRadius(tr) {}

double TruncatedCone::surfaceArea() {
    double slantHeight = sqrt(pow(height, 2) + pow(radius - topRadius, 2));
    return PI * (radius + topRadius) * slantHeight + Cone::surfaceArea();
}

double TruncatedCone::volume() {
    double bigVolume = PI * pow(radius, 2) * height / 3;
    double smallVolume = PI * pow(topRadius, 2) * height / 3;
    return bigVolume - smallVolume;
}

std::ostream& operator<<(std::ostream& os, const TruncatedCone& tCone) {
    os << "Truncated Cone (radius = " << tCone.radius << ", top radius = " << tCone.topRadius << ", height = " << tCone.height << ")";
    return os;
}

std::istream& operator>>(std::istream& is, TruncatedCone& tCone) {
    std::cout << "Enter the radius, top radius, and height of the truncated cone: ";
    is >> tCone.radius >> tCone.topRadius >> tCone.height;
    return is;
}

bool TruncatedCone::operator==(const TruncatedCone& tCone) const {
    return radius == tCone.radius && height == tCone.height && topRadius == tCone.topRadius;
}

bool TruncatedCone::operator!=(const TruncatedCone& tCone) const {
    return !(*this == tCone);
}