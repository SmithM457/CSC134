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
    cin.ignore(); // clear the user input
    main();  // try again
  }
}

void choiceCircle() {
    double cRadius;
    double cArea;

    cout << "Enter the circle's radius: " ;
    cin >> cRadius;

    cArea = 3.14159 * (cRadius * cRadius);

        cout << fixed << setprecision(3);

    cout << "The area is " << cArea << endl;
    cout << "" << endl;

    main();
}

void choiceRectangle() {

}

void choiceTriangle() {

}