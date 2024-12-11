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
void choice_sheddoor();
void choice_takekit();


// SWINGS SECTION
void choice_swings();
void choice_getcloser();
void choice_pickupdoll();
void choice_sewarm();

// **INDOORS SECTION**
// KITCHEN SECTION
void kitchen();
void choice_mail();
void choice_leavekitchen();

// LIVINGROOM SECTION
void livingroom();





// EXTRA
void choice_order_food();

// GLOBAL VARIABLES
bool HAS_KIT = false; // does player have sewing kit?
bool HAS_KEY = false;


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
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    choice_front_door();  // try again
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
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    choice_backyard();  // try again
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
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    choice_back_porch();  // try again
  }
}

void choice_bdoor() {
    cout << "As you get closer to the door, a board clicks under your foot." << endl;
    cout << "You hear a sound above you, and as your vision moves up, you see a large block falling towards you." << endl;
    cout << "Then, everything goes dark." << endl;
    cout << "*** GAME OVER ***" << endl;
    main();
}
void choice_window() {
    cout << "Getting closer to the window, you can see the curtains swaying inside, and the glass appears missing." << endl;
    cout << "The bench looks sturdy enough to hold your weight, as long as you're careful." << endl;
    cout << "Do you:" << endl;
    cout << "1. Climb through the window" << endl;
    cout << "2. Step back" << endl;
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
    kitchen();
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
    int choice;
    cin >> choice;
    if (1 == choice) {
    choice_sheddoor();
  } else if (2 == choice) {
    choice_backyard();
  }
}

void choice_sheddoor() {
  cout << "You open the door, the hinges creaking and cracking. Looking around," << endl;
  cout << "there is much debris from the caved roof, but in the corner, a record player is" << endl;
  cout << "turining slowly, likely the source of the strange melody you heard" << endl;
  cout << endl;
  cout << "A candle in the corner is burning low, casting shadows against the walls." << endl;
  cout << "They dance in a strange, hypnotic way, warping due to the flicker of the flame" << endl;
  cout << "and the obstructions in the room" << endl;
  cout << endl;
  cout << "Next to the record player is a sewing kit, with an odd stain on the pouch." << endl;
  cout << "Do you:" << endl;
  cout << "1. Take it" << endl;
  cout << "2. Leave the shed" << endl;
  cout << "Choose: " << endl;
    int choice;
    cin >> choice;
    if (1 == choice) {
    choice_takekit();
  } else if (2 == choice) {
    RE_SHED == false;
    choice_backyard();
  }
}
void choice_takekit() {
  cout << "You pick up the sewing kit. You can make out a name on it: Susie." << endl;
  HAS_KIT = true; // global variable
  cout << "Suddenly, you hear a small, quiet giggle from somewhere behind you, but as you" << endl;
  cout << "turn around, you don't see anything. However, the candle burns out, and you decide" << endl;
  cout << "it's time to leave the shed" << endl;
  choice_backyard();
}



// SWINGS SECTION
void choice_swings() {
    cout << "As you approach the swing set, you see a small doll on one of the two seats." << endl;
    cout << "It has two black braids, a red dress, a stitched-on smile, and two button eyes." << endl;
    cout << "Do you:" << endl;
    cout << "1. Get closer to the doll" << endl;
    cout << "2. Back away slowly" << endl;
    cout << "Choose: " << endl;
    int choice;
    cin >> choice;
    if (1 == choice) {
    choice_getcloser();
  } else if (2 == choice) {
    choice_backyard();
  }
}

void choice_getcloser() {
  cout << "As you get closer, you feel as though you are being watched, and a feelng of" << endl;
  cout << "dread creeps within you" << endl;
  cout << "The doll's dress looks old and worn, with odd stains you can't make out in the moonlight." << endl;
  cout << "Looking closer, you notice that a small tear has formed where her left arm meets her body." << endl;
  cout << "Do you:" << endl;
    cout << "1. Pick her up" << endl;
    cout << "2. Leave her alone" << endl;
    if (HAS_KIT == true) {
      cout << "3. Sew the tear in her arm" << endl;
    }
    cout << "Choose: " << endl;
    int choice;
    cin >> choice;
    if (1 == choice) {
    choice_pickupdoll();
  } else if (2 == choice) {
    choice_backyard();
  } else if (3 == choice) {
      if (HAS_KIT == true) {
        choice_sewarm();
      } else {
        cout << "You can't do that yet" << endl; // spoiler free
        cin.ignore(); // clear the user input
        choice_getcloser();
      }
  }
}

void choice_pickupdoll() {
  cout << "You reach out to grab the doll, and feel something press against your pocket." << endl;
  cout << "When you look down, you don't see anything, but feel as though you're missing something." << endl;
  cout << "Looking back at the doll, you notice a second doll sitting next to her, holding the sewing kit." << endl;
  cout << "Before you can process the second doll, the first jumps towards you, with the sewing needle in her hand." << endl;
  cout << "She slices into you, letting out a faint, ghostly giggle of a little girl." << endl;
  cout << "Soon, you succumb to your wounds, and the last thing you see is a small doll" << endl;
  cout << "standing over you, holding the sewing kit, and a pair of dark, old buttons." << endl;
  cout << "*** GAME OVER ***" << endl;
  main();
}

void choice_sewarm() {
  cout << "You pull out the sewing kit and carefully sew the doll's arm on," << endl;
  cout << "using the last little bit of thread in the kit." << endl;
  cout << "You hear something behind you, but when you turn, you see nothing" << endl;
  cout << "Turning your attention back to the doll, you see that in her place on the swing" << endl;
  cout << "is a rusted key. You pick it up and return back to the yard." << endl;
  HAS_KEY = true;
  choice_backyard();
}

// **INDOORS SECTION**
// KITCHEN SECTION
void kitchen() {
  cout << "Looking around the kitchen, there isn't much out of the ordinary." << endl;
  cout << "The island has a stack of mail on top of it, there counter is covered with pots," << endl;
  cout << "pans, and random cooking equipment. There's a doorway a few feet away," << endl;
  cout << "but given the state of the place, you doubt there's any power." << endl;
  cout << "Do you:" << endl;
  cout << "1. Check around back" << endl;
  cout << "2. Give up and go home" << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    choice_mail();
  } else if (2 == choice) {
    choice_leavekitchen();
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    kitchen();  // try again
  }
}

void choice_mail() {
  cout << "You approach the pile of mail, and begin searchng through it." << endl;
  cout << "There are bills, magazines, newspapers, political ads, and personal letters." << endl;
  cout << "Skimming through some of the newspapers, you see one that catches your eye. It's got a" << endl;
  cout << "comic article about some guy turning himself into a pickle. How crazy!" << endl;
  cout << "As you laugh to yourself, another article catches your attention, dated two years ago" << endl;
  cout << "It's about a murder happening in a local area, a few towns over, carried out by someone only known as 'The Butcher'." << endl;
  cout << "The details are gruesome, and you shiver as you set the paper down, stepping away from the" << endl;
  cout << "kitchen island, and leaving the kitchen." << endl;
  choice_leavekitchen();
}

void choice_leavekitchen() {
  livingroom();
}

void livingroom() {
  cout << "Stepping out of the kitchen, you find yourself in a large living room, which looks relatively new" << endl;
  cout << "compared to the kitchen. The couches are covered in a clear tarp, the wallpaper doesn't seem to be peeling" << endl;
  cout << "as bad, and the air feels less stagnant. The moonlight shines through the windows, the curtains" << endl;
  cout << "sitting open and still." << endl;
  cout << "You can see a set of stairs nearby, close to what appears to be a closet. Next to that" << endl;
  cout << "is the front door. Near the couches is an old fireplace, and a bookshelf against a nearby wall sits filled" << endl;
  cout << "with old books." << endl;
  cout << "Do you:" << endl;
  cout << "1. Check the bookshelf" << endl;
  cout << "2. Check the fireplace" << endl;
  cout << "3. Look in the closet" << endl;
  cout << "4. Go upstairs" << endl;
  cout << "5. Leave the house" << endl;
  cout << endl;
  cout << "However, unfortunately you have reached the end of the demo. I know it's cut short," << endl;
  cout << "but this will not be the end. Thank you for playing my final!" << endl;
  main();




void choice_order_food() {
    cout << "You order some food, and enjoy some nice pizza for the night." << endl;
    cout << "Ending 3" << endl;
    main();
}

// cout << "" << endl;
