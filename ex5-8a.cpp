#include<iostream>
using namespace std;

class rectangle58a {
public:
    double l, b, area, peri;
    rectangle58a() : l(1), b(1) {}

    void setlength(double x) 
    { l = x; }
    void setwidth(double y) 
    { b = y; }
    double getlength() 
    { return l; }
    double getwidth() 
    { return b; }

    void calcarea() 
    { area = l * b; }
    void calcperimeter() 
    { peri = 2 * (l + b); }
    double getarea() 
    { return area; }
    double getperimeter() 
    { return peri; }
};

class cube58a : public rectangle58a {
public:
    double depth;
    cube58a() : rectangle58a(), depth(1) 
    {}

    void setlength(double x) 
    { l = x; }
    void setwidth(double y) 
    { b = y; }
    void setdepth(double d) 
    { depth = d; }
    double getlength() 
    { return l; }
    double getwidth() 
    { return b; }
    double getdepth() 
    { return depth; }

    void calcarea() 
    { area = 2 * (l * b + b * depth + depth * l); }
    void calcperimeter() 
    { peri = 4 * (l * b * depth); }
    double getarea() 
    { return area; }
    double getperimeter() 
    { return peri; }
};

int main() {
    rectangle58a r;
    cube58a c;

    r.setlength(20);
    r.setwidth(10);
    r.calcarea();
    r.calcperimeter();

    c.setlength(10);
    c.setwidth(5);
    c.setdepth(3);
    c.calcarea();
    c.calcperimeter();

    cout << "\nRectangle's length = " << r.getlength() << endl;
    cout << "Rectangle's width = " << r.getwidth() << endl;
    cout << "Rectangle's area = " << r.getarea() << endl;
    cout << "Rectangle's perimeter = " << r.getperimeter() << endl;

    cout << "\nCube's length = " << c.getlength() << endl;
    cout << "Cube's width = " << c.getwidth() << endl;
    cout << "Cube's depth = " << c.getdepth() << endl;
    cout << "Cube's area = " << c.getarea() << endl;
    cout << "Cube's perimeter = " << c.getperimeter() << endl;

    return 0;
}
