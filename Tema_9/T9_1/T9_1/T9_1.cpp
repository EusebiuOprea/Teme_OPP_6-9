#include <iostream> 
using namespace std;

class Shape
{
public:
    virtual void draw() = 0; // we define the general behavior 
};

class Circle : public Shape {
public:
    void draw() { cout << "circle\n"; } // we specify the behavior for this shape 
};

class Triangle : public Shape {
public:
    void draw() { cout << "triangle\n"; } // we specify the behavior for this shape 
};

class Drawing {
public:
    Shape* shape;
    Drawing(Shape* pShape = nullptr) : shape(pShape) {}
    void drawShape() { shape->draw(); }
};

int main()
{
    Drawing* d = new Drawing(new Triangle());
    d->drawShape();
    d->shape = new Circle();
    d->drawShape();
    Drawing e(new Triangle());
    e.drawShape();
    e.shape = new Circle();
    e.drawShape();
    Drawing f;
    Triangle t1;
    Circle c1;
    f.shape = &t1;
    f.drawShape();
    f.shape = &c1;
    f.drawShape();
}
