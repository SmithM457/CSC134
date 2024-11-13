// Question Four

#include <iostream>
#include <iomanip>
using namespace std;

void choiceCircle();
void choiceRectangle();
void choiceTriangle();



int main() {
  cout << "Geometry Calculator" << endl;
  cout << "" << endl;
  cout << "1. Calculate the Area of a Circle" << endl;
  cout << "2. Calculate the Area of a Rectangle" << endl;
  cout << "3. Calculate the Area of a Triangle" << endl;
  cout << "4. [Quit]" << endl;
  cout << "Enter your choice (1-4): ";
  int choice;
  cin >> choice;
  if (1 == choice) {
    choiceCircle();
  } else if (2 == choice) {
    choiceRectangle();
  } else if (3 == choice) {
    choiceTriangle();
  } //else if (4 == choice) {
    //cout << "Returning to main menu..." << endl;
    //return; // go back to main()}
    else {
    cout << "That's not a valid choice, please try again." << endl;
    cout << "" << endl;
    cin.ignore(); 
    main(); 
  }
}

void choiceCircle() {
    double cRadius;
    double cArea;

    cout << "Enter the circle's radius: " ;
    cin >> cRadius;
    if (cRadius < 0){
      cout << "Please enter a radius greater than 0." << endl;
    cout << "" << endl;
    cin.ignore();
    choiceCircle();
    }

    cArea = 3.14159 * (cRadius * cRadius);

        cout << fixed << setprecision(3);

    cout << "The area of the circle is " << cArea << endl;
    cout << "" << endl;

    main();
}

void choiceRectangle() {
    double rLength;
    double rWidth;
    double rArea;

    cout << "Enter the length of the rectangle: " ;
    cin >> rLength;
    if (rLength < 0){
      cout << "Please enter a length greater than 0." << endl;
    cout << "" << endl;
    cin.ignore();
    choiceRectangle();
    }
    cout << "Enter the width of the rectangle: " ;
    cin >> rWidth;
    if (rWidth < 0){
      cout << "Please enter a width greater than 0." << endl;
    cout << "" << endl;
    cin.ignore();
    choiceRectangle();
    }

    rArea = rLength * rWidth;

        cout << fixed << setprecision(2);

    cout << "The area of the rectangle is " << rArea << endl;
    cout << "" << endl;

    main();
}

void choiceTriangle() {
    double tBase;
    double tHeight;
    double tArea;

    cout << "Enter the base of the triangle: " ;
    cin >> tBase;
    if (tBase < 0){
      cout << "Please enter a base length greater than 0." << endl;
    cout << "" << endl;
    cin.ignore();
    choiceTriangle();
    }
    cout << "Enter the height of the triangle: " ;
    cin >> tHeight;
    if (tHeight < 0){
      cout << "Please enter a height length greater than 0." << endl;
    cout << "" << endl;
    cin.ignore();
    choiceTriangle();
    }

    tArea = tBase * tHeight * .5;

        cout << fixed << setprecision(2);

    cout << "The area of the triangle is " << tArea << endl;
    cout << "" << endl;

    main();
}