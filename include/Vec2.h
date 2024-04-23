#include <iostream>
using namespace std;

class Vec2 {
    public:
        double x;
        double y;

        Vec2(double x, double y);

        Vec2 operator+(Vec2 const& other);
        Vec2 operator-(Vec2 const& other);
        Vec2 operator*(double const other);
        double operator*(Vec2 const& other);

        double length();

        friend ostream& operator<<(ostream& os, const Vec2& v) {
            return os << "(" << v.x << "," << v.y << ")";
        }
};
