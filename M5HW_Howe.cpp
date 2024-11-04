// CSC 134
// Matthew
// M5HW1
// 11/4/24

#include <iostream>
using namespace std;

void questionOne();
void questionTwo();
void questionThree();
void questionFour();
void questionFive();

int main() {
    cout << "Welcome to M5HW1!" << endl;
  cout << "Please select a question to run: " << endl;
  cout << "Q1 - Rainfall" << endl;
  cout << "Q2 - Cube Volume" << endl;
  cout << "Q3 - Roman Numerals" << endl;
  cout << "Q4 - Geometry Calculator" << endl;
  cout << "Q5 - Distance Traveled" << endl;
  cout << "Choose: ";
  int choice;
  cin >> choice;
  if (1 == choice) {
    questionOne();
  } else if (2 == choice) {
    questionTwo();
  } else if (3 == choice) {
    questionThree();
  } else if (4 == choice) {
    questionFour();
    return; // go back to main()
  } else if (5 == choice) {
    questionFive();
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    main();  // try again
    }
}