#include <iostream>

using namespace std;

class Rectangle {
public:
    double length;
    double width;

    void setDimensions(double l, double w) {
        length = l;
        width = w;
    }

    double calculateArea() {
        return length * width;
    }

    void displayArea() {
        cout << "Area of a rectangle: " << calculateArea() << endl;
    }
};

int main() {
    Rectangle rect;
    rect.setDimensions(5.0, 3.0);
    rect.displayArea();

    return 0;
}