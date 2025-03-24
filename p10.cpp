#include <iostream>
#include <cmath>
using namespace std;
class Triangle {
private:
    double a, b, c; 
public:
    
    Triangle() : a(0), b(0), c(0) {}

    
    Triangle(double x, double y, double z) : a(x), b(y), c(z) {}

    
    double area(double base, double height) {
        return 0.5 * base * height;
    }

    double area() {
        double s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }


    Triangle& operator=(const Triangle& other) {
        if (this != &other) { 
            a = other.a;
            b = other.b;
            c = other.c;
        }
        return *this;
    }

    bool operator==(const Triangle& other) const {
        return (a == other.a && b == other.b && c == other.c);
    }

    void display() const {
        cout << "Triangle sides: " << a << ", " << b << ", " << c << endl;
    }
};

int main() {
    Triangle t1(3, 4, 5);
    Triangle t2(6, 8, 10);

    cout << "Area of t1: " << t1.area() << endl;
    cout << "Area of t2: " << t2.area() << endl;


    Triangle t3;
    t3 = t1;
    cout << "After assignment, t3: ";
    t3.display();

    if (t1 == t3) {
        cout << "t1 and t3 are equal." << endl;
    } else {
        cout << "t1 and t3 are not equal." << endl;
    }

    return 0;
}
