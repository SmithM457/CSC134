// CSC 134
// Matthew
// M5HW1
// 11/4/24

#include <iostream>
#include <iomanip>
using namespace std;

void mainMenu();
void questionOne();
void questionTwo();
void questionThree();
void questionFour();
void questionFive();


int main() {
  cout << "Welcome to M5HW1!" << endl;
  // load up the main menu
  mainMenu();
  // when we return here, we're done
  cout << "Good-bye!" << endl;
  return 0; // finished with no errors
}


void mainMenu() {
  cout << "Please select a question to run: " << endl;
  cout << "Q1 - Rainfall" << endl;
  cout << "Q2 - Cube Volume" << endl;
  cout << "Q3 - Roman Numerals" << endl;
  cout << "Q4 - Geometry Calculator" << endl;
  cout << "Q5 - Distance Traveled" << endl;
  cout << "[Quit]" << endl;
  cout << "Choose: ";
  int choice;
  cin >> choice;
  cout << "" << endl;
  if (1 == choice) {
    questionOne();
  } else if (2 == choice) {
    questionTwo();
  } else if (3 == choice) {
    questionThree();
  } else if (4 == choice) {
    questionFour();
  } else if (5 == choice) {
    questionFive();
  } else if (6 == choice) {
    cout << "Exiting..." << endl;
    return; // go back to main()
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    main();  // try again
    }
}


// Question One
void questionOne() {
    
    cout << "Rainfall selected" << endl;
    cout << "" << endl;
    
    string monthOne;
    string monthTwo;
    string monthThree;

    double rainOne;
    double rainTwo;
    double rainThree;

    double avgRain;

    cout << "Enter month: " ;
    cin >> monthOne;

    cout << "Enter rainfall for " << monthOne << ": " ;
    cin >> rainOne;
    
    cout << "Enter month: " ;
    cin >> monthTwo;

    cout << "Enter rainfall for " << monthTwo << ": " ;
    cin >> rainTwo;

    cout << "Enter month: " ;
    cin >> monthThree;

    cout << "Enter rainfall for " << monthThree << ": " ;
    cin >> rainThree;

    avgRain = (rainOne + rainTwo + rainThree) / 3;

    cout << fixed << setprecision(2);

    cout << "The average raifall for " << monthOne << ", " << monthTwo << ", and " << monthThree << " is: " << avgRain << " inches." << endl;
    cout << "" << endl;

  mainMenu();
}

// Question Two
void questionTwo() {

}

// Question Three
void questionThree() {

}

// Question Four
void questionFour() {

}

// Question Five
void questionFive() {

}