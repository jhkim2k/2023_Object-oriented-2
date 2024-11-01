#include <iostream>
#include <memory>
using namespace std;

class Shape {
    int x, y;
public:
    Shape(int a, int b) : x(a), y(b) {}
    virtual double getArea() = 0;
};

class Rect : public Shape {
private:
    int width, height;
public:
    Rect(int x, int y, int w, int h) : Shape(x, y), width(w), height(h) {}
    double getArea() {
        return (width * height);
    }
};

class Circle : public Shape {
private:
    int radius;
public:
    Circle(int x, int y, int r) : Shape(x, y), radius(r) {}
    double getArea() {
        return (radius * radius * 3.14);
    }
};

class Triangle : public Shape {
private:
    int width, height;
public:
    Triangle(int x, int y, int w, int h) : Shape(x, y), width(w), height(h) {}
    double getArea() {
        return ((width * height) / 2);
    }
};

int main() {
    const int size = 3;
    unique_ptr<Shape> shape[size];

    shape[0] = make_unique<Rect>(0, 0, 12, 12);
    shape[1] = make_unique<Circle>(0, 0, 12);
    shape[2] = make_unique<Triangle>(0, 0, 12, 12);

    for (int i = 0; i < size; i++) {
        cout << "도형 #" << i << "의 면적: " << shape[i]->getArea() << std::endl;
    }

    return 0;
}
