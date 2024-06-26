#include <iostream>
using namespace std;


#ifndef Vec2_H
#define Vec2_H

class Vec2 {
    public:
        double x;
        double y;

        Vec2();
        Vec2(double x, double y);

        Vec2 operator+(Vec2 const& other);
        void operator+=(Vec2 const& other);
        Vec2 operator-(Vec2 const& other);
        Vec2 operator*(double const other);
        void operator*=(double const other);
        double operator*(Vec2 const& other);
        bool operator==(Vec2 const& other);

        double length();
        Vec2 rotate(double angle, Vec2 ref);

        friend ostream& operator<<(ostream& os, const Vec2& v) {
            return os << "(" << v.x << "," << v.y << ")";
        }
};

double cross(Vec2 v, Vec2 w);

#endif