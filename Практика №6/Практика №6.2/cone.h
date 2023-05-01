#ifndef CONE_H
#define CONE_H

#include <iostream>

class Cone {
protected:
    double radius;
    double height;

public:
    Cone();
    Cone(double r, double h);

    virtual double surfaceArea();
    virtual double volume();

    friend std::ostream& operator<<(std::ostream& os, const Cone& cone);
    friend std::istream& operator>>(std::istream& is, Cone& cone);
};

class TruncatedCone : public Cone {
private:
    double topRadius;

public:
    TruncatedCone();
    TruncatedCone(double r, double h, double tr);

    double surfaceArea() override;
    double volume() override;

    friend std::ostream& operator<<(std::ostream& os, const TruncatedCone& tCone);
    friend std::istream& operator>>(std::istream& is, TruncatedCone& tCone);

    bool operator==(const TruncatedCone& tCone) const;
    bool operator!=(const TruncatedCone& tCone) const;
};

#endif // CONE_H