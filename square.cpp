#include <cmath>
#include "square.h"

Square::Square(double x, double y, double side, double angle) {
    this->x = x;
    this->y = y;
    this->side = side;
    this->angle = angle;
}
double Square::GetArea() const {
    double area = pow(GetSide(), 2);
    return area;
}
bool Square::operator==(Square const &obj) {
    return GetArea() == obj.GetArea();
}
bool Square::operator!=(const Square &obj) {
    return GetArea() != obj.GetArea();
}
bool Square::operator<(const Square &obj) {
    return GetArea() < obj.GetArea();
}
bool Square::operator>(const Square &obj) {
    return GetArea() > obj.GetArea();
}
double Square::operator*=(double num) {
    this->side *= num;
}
Square Square::operator+=(Vector v) {
    this->x += v.B.x - v.A.x;
    this->y += v.B.y - v.A.y;
}

double Square::GetAngle() const {
    return angle;
}
double Square::GetSide() const {
    return side;
}
double Square::GetY() const {
    return y;
}
double Square::GetX() const {
    return x;
}
double Square::Mult(double obj) {
    return obj * GetSide();
}

std::ostream &operator<<(std::ostream &out, const Square &obj) {
    std::cout << "Parameters of square:" << std::endl;
    std::cout << "Side = " << obj.side << std::endl;
    std::cout << "Position:" << std::endl << "X = " << obj.x << std::endl;
    std::cout << "Y = " << obj.y << std::endl;
    return out;
}
