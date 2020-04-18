#pragma once
#include <iostream>

struct Point {
    Point() {
        x = 0;
        y = 0;
    }
    double x,y;
};
class Vector{
public:
    Point A, B;
};
class Square {
    double x;
    double y;
    double side;
    double angle;
    double GetAngle() const;
    double GetSide() const;
    double GetX() const;
    double GetY() const;
public:
    Square(double x, double y, double side, double angle);
    double GetArea() const;
    bool operator==(Square const &obj);
    double Mult(double obj);
    bool operator!=(Square const &obj);
    bool operator>(Square const &obj);
    bool operator<(Square const &obj);
    double operator*=(double num);
    Square operator+=(Vector v);
    friend std::ostream& operator<<(std::ostream& out, const Square& obj);
};
