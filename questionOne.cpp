//Question One

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
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

}