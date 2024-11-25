#include <iostream>
using namespace std;

// M6LAB1
// Matthew Howe
// 11/13/24

// constant
const int RED = 1; // live
const int BLACK = 0; // blank

int main() {
    // load the chamber
    int chamber[] = {RED, BLACK, RED};
    // cout << chamber << endl; // this doesn't work
    // use a range based loop to print all rounds
    for (int round: chamber) {
        if (round == RED) {
            cout << "RED ";
        }
        if (round == BLACK) {
            cout << "BLACK ";
        }
    }
    cout << endl;

}