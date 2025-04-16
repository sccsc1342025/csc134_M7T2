// CSC 134
// M7T2-Bronze
// Sebastian Camacho
// 04/16/2025

#include <iostream>
using namespace std;

class Rectangle {
    private:
        double width;
        double length;
    public:
        void setWidth(double);
        void setLength(double);
        double getWidth() const;
        double getLength() const;
        double getArea() const;
};

void Rectangle::setWidth(double w) {
    width = w;
}

void Rectangle::setLength(double len) {
    length = len;
}

double Rectangle::getWidth() const {
    return width;
}

double Rectangle::getLength() const {
    return length;
}

double Rectangle::getArea() const {
    return width * length;
}

int main() {
    Rectangle box;
    double rectWidth;
    double rectLength;

    cout << "This program will calculate the the area of a rectangle. What is the width? ";
    cin >> rectWidth;
    cout << "what is the length? ";
    cin >> rectLength;

    box.setWidth(rectWidth);
    box.setLength(rectLength);

    cout << "Here is the rectangles data:\n";
    cout << "width: " << box.getWidth() << endl;
    cout << "length: " << box.getLength() << endl;;
    cout << "area: " << box.getArea() << endl;

    return 0;
}