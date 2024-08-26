// CSC 134
// M1LAB1 - Apple Orchard
// Matthew Howe
// 8/21/24

#include <iostream>
using namespace std;

int main() {
  // Variables
  string name;
  int num_apples;
  double price_per_apple;
  double total_cost;

  cout << "What is your name? " ;
  cin >> name;
  cout << "How many apples in stock? " ;
  cin >> num_apples;
  cout << "How much is one apple? " ;
  cin >> price_per_apple;
  
  // Greeting
  cout << "------------------" << endl;
  cout << "Welcome to the ";
  cout << name << " orchard!" << endl;
  

  // Ask Questions
  // TO DO

  // Calculate the total cost
  total_cost = num_apples * price_per_apple;

  // Give Answers
  cout << "You have " << num_apples << " apples" << endl;
  cout << "Each apple costs $" << price_per_apple << endl;
  cout << "The total is: $" << total_cost << endl;
           
           
}