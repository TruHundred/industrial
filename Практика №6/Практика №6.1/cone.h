#ifndef CONE_H
#define CONE_H

class Cone {
public:
    Cone(); 
    Cone(double x, double y, double z, double r, double h); 
    Cone(double r, double h); 

    void input();
    void output();
    double surfaceArea();
    double volume();

private:
    double x_, y_, z_; 
    double r_; 
    double h_; 
};

#endif // CONE_H