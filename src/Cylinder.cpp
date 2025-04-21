# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include "Cylinder.h"
#include <iostream>
#include <iomanip>
using namespace std;
double PI = 3.14159265358979323846;

double Cylinder :: SurfaceArea(){
    
    return PI*2*radius*(radius+height);
}

double Cylinder :: Volume(){

    return PI*radius*radius*height;
}

double Cylinder :: Circumference(){

    return PI*2*radius;
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    in >> cldr.radius >> cldr.height;
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    out << fixed << setprecision(3) << "Circumference: " << cldr.Circumference() << endl;
    out << fixed << setprecision(3) << "SurfaceArea: " << cldr.SurfaceArea() << endl;
    out << fixed << setprecision(3) << "Volume: " << cldr.Volume() << endl;
    return out;
}

# endif
