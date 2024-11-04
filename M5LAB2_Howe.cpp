// CSC 134
// M5LAB2
// Matthew Nia
// 11/4/2024

#include <iostream>
using namespace std;

double getLength();
double getWidth();
double getArea(double length,double width);
void displayData(double length,double width,double area);

int main()
{
	// This program calculates the area of a rectangle.
	// TODO: fix any syntax errors
	
   double length,    // The rectangle's length
          width,     // The rectangle's width
          area;      // The rectangle's area
          
   // Get the rectangle's length.
   length = getLength();
   
   // Get the rectangle's width.
  width = getWidth();
   
   // Get the rectangle's area.
   area = getArea(length,width);
   
   // Display the rectangle's data.
   displayData(length, width, area);
          
   return 0;
}

//***************************************************
// TODO: write the getLength, getWidth, getArea,    *
// and displayData functions below.                 *
//***************************************************

double getLength() {
    double length;
    cout << "What's the Length? " << endl;
    cin >> length;
    
    return length;
}

double getWidth() {
    double width;
    cout << "What's the Width?" << endl;
    cin >> width;

    return width;
}

double getArea(double length,double width) {
    double area = length * width;

    return area;
}

void displayData(double length, double width, double area) {
    cout << "The Length is: " << length << endl;
    cout << "The Width is: " << width << endl;
    cout << "The Area is: " << area << endl;
}