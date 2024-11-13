// CSC 134
// M6T1 - Basic Arrays
// Matthew Howe
// 11/11/24

#include <iostream>
using namespace std;

// Global Constant
const int numDays = 5;

void partOne();
void partTwo();

int main() {
    partOne();
    partTwo();
}

void partOne(){
    // set variables
    // for each day monday-friday
    // ask how many cars
    // add to total
    // report total and average

    double total = 0;
    int todaysCount = 0;
    double average = 0;

    for (int day = 1; day <= numDays; day++) {
        cout << "Please enter the count for day " << day << " of " << numDays << endl;
        cin >> todaysCount;
        total += todaysCount;
    }

    average = total / numDays;
    cout << "For all " << numDays << " days:" << endl;
    cout << "Total cars: " << total << endl;
    cout << "Average: " << average << endl;
}

void partTwo() {
    // set variables
    // for each day monday-friday
    // ask how many cars
    // add to total
    // report total and average

    int cars[numDays];
    double total = 0;
    int todaysCount = 0;
    double average = 0;

    for (int day = 1; day <= numDays; day++) {
        cout << "Please enter the count for day " << day << " of " << numDays << endl;
        cin >> todaysCount;
        cars[day] = todaysCount;
        total += todaysCount;
    }

    average = total / numDays;
    cout << "For all " << numDays << " days:" << endl;
    for (int day = 1; day <= numDays; day++) {
        cout << cars[day] << ", ";
    }
    cout << endl;
    cout << "Total cars: " << total << endl;
    cout << "Average: " << average << endl;
}