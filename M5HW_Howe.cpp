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
string name;
    int length;
    int width;
    int height;
    int volume; 

cout << "What's the length? ";
cin >> length;
cout << "What's the width? ";
cin >> width;
cout << "What's the height? ";
cin >> height;

volume = length * width * height;
 cout << "The Length is: " << length << endl;
    cout << "The Width is: " << width << endl;
    cout << "The Height is: " << height << endl;
    cout << "The Volume is: " << volume << endl;
mainMenu();
}

// Question Three
void questionThree() {
int choice;

cout << "Enter a number (1-10):" << endl; 
  cin >> choice;

  if (1 == choice) {
  	cout << "The Roman numeral version of 1 is I" << endl;
  }
  else if (2 == choice) {
  	cout << "The Roman numeral version of 2 is II" << endl;
  }
   else if (3 == choice) {
  	cout << "The Roman numeral version of 3 is III" << endl;
   }
    else if (4 == choice) {
  	cout << "The Roman numeral version of 4 is IV" << endl;
    }
   else if (5 == choice) {
  	cout << "The Roman numeral version of 5 is V" << endl;
   }
   else if (6 == choice) {
  	cout << "The Roman numeral version of 6 is VI" << endl;
   }
    else if (7 == choice) {
  	cout << "The Roman numeral version of 7 is VII" << endl;
    }
     else if (8 == choice) {
  	cout << "The Roman numeral version of 8 is VIII" << endl;
     }
      else if (9 == choice) {
  	cout << "The Roman numeral version of 9 is IX" << endl;
      }
 else if (10 == choice) {
  	cout << "The Roman numeral version of 10 is X" << endl;
 }
  
  else {
  	cout << "That number is not a valid choice." << endl;
  }
mainMenu();
}


// Question Four

void choiceCircle();
void choiceRectangle();
void choiceTriangle();

void questionFour() {
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
  } else if (4 == choice) {
    cout << "Returning to main menu..." << endl;
    return; 
  }
    else {
    cout << "That's not a valid choice, please try again." << endl;
    cout << "" << endl;
    cin.ignore(); 
    questionFour(); 
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

    questionFour();
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

    questionFour();
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

    questionFour();
}


// Question Five
void questionFive() {
double speed,    
          time,    
          distance,
          counter=1;

     cout << "What is the speed of the vehicle in mph? " << endl;
    cin >> speed;  
    while (time <= 0) {
    cout << "Cannot be zero or less." << endl;
    cout << "What is the speed of the vehicle in mph? ";
    cin >> time;
    }

       cout << "How many hours has it traveled?" << endl;
    cin >> time;
    while (time <= 1) {
    cout << "Cannot be one hour or less." << endl;
    cout << "How many hours has it traveled? ";
    cin >> time;
    }

 cout << "Hour Distance Traveled" << endl;
    cout << "-------------------------------- " << endl;
    while(counter <= time)
    {
        distance = speed * counter;
        cout << counter << "\t\t" << distance << endl;
        counter++;

    }
    mainMenu();
}