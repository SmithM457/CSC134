// CSC-134
// M7T2
// Matthew Howe
// 12/9/24

#include <iostream>
using namespace std;

class Cube {
    private:
        double width;
        double length;
        double height;

    public:
        void setWidth(double);
        void setLength(double);
        void setHeight(double);
        double getWidth() const;
        double getLength() const;
        double getHeight() const;
        double getVolume() const;
};

void Cube::setWidth(double w) {
    width = w;
}

void Cube::setLength(double len) {
    length = len;
}

void Cube::setHeight(double h) {
    height = h;
}

double Cube::getWidth() const {
    return width;
}

double Cube::getLength() const {
    return length;
}

double Cube::getHeight() const {
    return height;
}

double Cube::getVolume() const {
    return width * length * height;
}

int main() {
    Cube box;
    double cuWidth;
    double cuLength;
    double cuHeight;

    cout << "This program will calculate the volume of a\n";
    cout << "cube. What is the width? ";
    cin >> cuWidth;
    cout << "What is the length? ";
    cin >> cuLength;
    cout << "What is the height? ";
    cin >> cuHeight;

    box.setWidth(cuWidth);
    box.setLength(cuLength);
    box.setHeight(cuHeight);

    cout << "Here is the cube's data:\n";
    cout << "Width: " << box.getWidth() << endl;
    cout << "Length: " << box.getLength() << endl;
    cout << "Height: " << box.getHeight() << endl;
    cout << "Volume: " << box.getVolume() << endl;

    return 0;
}