#include <iostream>
// CSC 134
// MLAB1
// Matthew Howe
// 10/21/24
using namespace std;


void main_menu();
void choice_front_door();
void choice_backyard();
void choice_go_home();
// TODO: add more choices here

// **BACKYARD SECTION**
// BACK PORCH SECTION
void choice_back_porch();
void choice_bdoor();
void choice_window();
void choice_climb();

// SHED SECTION
void choice_shed();


// SWINGS SECTION
void choice_swings();


void choice_order_food();


int main() {
  cout << "M5LAB1 - Choose Your Own Adventure" << endl;
  // load up the main menu
  main_menu();
  // when we return here, we're done
  cout << "Thanks for playing!" << endl;
  return 0; // finished with no errors
}

void main_menu() {
  // Write a simple menu that lets the user choose 1,2, or 3, or 4 to quit.
  cout << "Main Menu" << endl;
  cout << "You're in front of a spooky old house..." << endl;
  cout << "Do you:" << endl;
  cout << "1. Try the front door" << endl;
  cout << "2. Sneak around back" << endl;
  cout << "3. Forget it, and go home" << endl;
  cout << "4. [Quit]" << endl;
  cout << "Choose: ";
  int choice;
  cin >> choice;
  if (1 == choice) {
    choice_front_door();
  } else if (2 == choice) {
    choice_backyard();
  } else if (3 == choice) {
    choice_go_home();
  } else if (4 == choice) {
    cout << "Ok, quitting game" << endl;
    return; // go back to main()
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    main_menu();  // try again
  }
}

// FUNCTION DEFINITIONS
// OK, we have the prototypes at the top, but
// now we have to actually write the functions.
// They go here, after main().
void choice_front_door() {
  cout << "Try the front door." << endl;
  cout << "It's locked. " << endl;
  cout << "Do you:" << endl;
  cout << "1. Check around back" << endl;
  cout << "2. Give up and go home" << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    choice_backyard();
  } else if (2 == choice) {
    choice_go_home();
  }
}

void choice_backyard() {
    cout << "You circle around back, stepping carefully in the moonlight." << endl;
    cout << "The backyard is sparse, with an old porch and crumbling shed." << endl;
    cout << "A little ways away, a small swing set sits idle." << endl;
    cout << "Do you: " << endl;
    cout << "1. Walk up the porch" << endl;
    cout << "2. Check the shed" << endl;
    cout << "3. Approach the swing set" << endl;
    cout << "Choose: " << endl;
    int choice;
    cin >> choice;
    if (1 == choice) {
    choice_back_porch();
  } else if (2 == choice) {
    choice_shed();
  } else if (3 == choice) {
    choice_swings();
  }
}

void choice_go_home() {
    cout << "You decided to head home." << endl;
    cout << "Safe at home, do you:" << endl;
    cout << "1. Order some food" << endl;
    cout << "2. Go to bed" << endl;
    int choice;
    cout << "Choose: " << endl;
    cin >> choice;
    if (1 == choice) {
        choice_order_food();
  } else if (2 == choice) {
        cout << "You head to bed, forgetting about the old house." << endl;
        cout << "*** Game Over ***" << endl;
  }
}

// any new choices go here

// **BACKYARD SECTION**
// BACK PORCH SECTION
void choice_back_porch() {
    cout << "You step onto the porch, the rotting wood creaking and shifting." << endl;
    cout << "Dead plants sit in old pots around a door, and an old bench sits below a window." << endl;
    cout << "Do you:" << endl;
    cout << "1. Try the door" << endl;
    cout << "2. Look at the window" << endl;
    cout << "Choose: " << endl;
    int choice;
    cin >> choice;
    if (1 == choice) {
    choice_bdoor();
  } else if (2 == choice) {
    choice_window();
    }
}

void choice_bdoor() {
    cout << "As you get closer to the door, a board clicks under your foot." << endl;
    cout << "You hear a sound above you, and as your vision moves up, you see a large block falling towards you." << endl;
    cout << "Then, everything goes dark." << endl;
    cout << "*** GAME OVER ***" << endl;
}
void choice_window() {
    cout << "Getting closer to the window, you can see the curtains swaying inside, and the glass appears missing." << endl;
    cout << "The bench looks sturdy enough to hold your weight, as long as you're careful." << endl;
    cout << "Do you:" << endl;
    cout << "1. Climb through the window" << endl;
    cout << "2. Step away" << endl;
    cout << "Choose: " << endl;
    int choice;
    cin >> choice;
    if (1 == choice) {
    choice_climb();
  } else if (2 == choice) {
    choice_back_porch();
    }
}
void choice_climb() {
    cout << "You climb through the window, the bench protesting as you do so." << endl;
    cout << "As you step into the house, you find yourself in an old kitchen, the faint smell of mold and dust" << endl;
    cout << "attacking your nose." << endl;
    cout << "Your adventure will continue soon!" << endl; // Continue here with a new section for inside
}

// SHED SECTION
void choice_shed() {
    cout << "As you approach the shed, you head a low, warped melody playing." << endl;
    cout << "The roof is caved in, yet the walls and door appear mostly intact." << endl;
    cout << "There's a faint light coming from inside, much like a candle." << endl;
    cout << "Do you:" << endl;
    cout << "1. Open the door" << endl;
    cout << "2. Walk away from the shed" << endl;
    cout << "Choose: " << endl;
}

// SWINGS SECTION
void choice_swings() {
    cout << "As you approach the swing set, you see a small doll on one of the two seats." << endl;
    cout << "It has two black braids, a red dress, a stitched-on smile, and two button eyes." << endl;
    cout << "Do you:" << endl;
    cout << "1. Get closer to the doll" << endl;
    cout << "2. Back away slowly" << endl;
    cout << "Choose: " << endl;
}

void choice_order_food() {
    cout << "You order some food." << endl;
}

// cout << "" << endl;
