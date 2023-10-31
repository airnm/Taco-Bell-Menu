#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

// Define a struct to hold the nutritional facts of sides & sweets
struct NutritionalFacts2 {
  int calories = 0;
  int totalFat = 0;
  int cholesterol = 0;
  int sodium = 0;
  int totalCarbohydrates = 0;
  int protein = 0;
  string name = "";
  float price = 0;
};

// Define a function to display the nutritional facts of sides & sweets
void displaysidesandsweetsFacts(NutritionalFacts2 sidesandsweetsFacts) {
  cout << "Calories: " << sidesandsweetsFacts.calories << endl;
  cout << "Total Fat: " << sidesandsweetsFacts.totalFat << "g" << endl;
  cout << "Cholesterol: " << sidesandsweetsFacts.cholesterol << "mg" << endl;
  cout << "Sodium: " << sidesandsweetsFacts.sodium << "mg" << endl;
  cout << "Total Carbohydrates: " << sidesandsweetsFacts.totalCarbohydrates
       << "g" << endl;
  cout << "Protein: " << sidesandsweetsFacts.protein << "g" << endl;
  cout << "Price: $" << fixed << setprecision(2) << sidesandsweetsFacts.price
       << endl;
}

vector<NutritionalFacts2> Sidessweets() {
  vector<NutritionalFacts2> sidessweetsVector(0);
  // Define the nutritional facts of sides & sweets
  NutritionalFacts2 cinnamonTwists = {170, 7, 2, 26, 0, 170, "Cinnamon Twists",
                                      1.29};
  NutritionalFacts2 chipsandGuac = {530, 29, 6, 64, 5, 510, "Chips and Guac",
                                    2.49};
  NutritionalFacts2 chipsandQueso = {
      620, 39, 13, 49, 15, 950, "Chips and Queso", 2.69};
  NutritionalFacts2 caramelappleEmpanada = {
      310, 16, 3, 40, 5, 180, "Caramel Apple Empanada", 1.19};

  bool continueOrdering = true;
  while (continueOrdering) {
    // Display a menu of sides & sweets
    cout << "SIDES & SWEETS MENU" << endl;
    cout << "------------------------------------" << endl;
    cout << "1. Cinnamon Twists - $1.29" << endl;
    cout << "2. Chips and Guac - $2.49" << endl;
    cout << "3. Chips and Queso - $2.69" << endl;
    cout << "4. Caramel Apple Empanada - $1.19" << endl;

    // Prompt the user to choose a sides & sweets
    int choice;
    bool valid_choice = false;

    do {
      cout << "Choose a Sides & Sweets to Add (1-4): ";
      cin >> choice;
      if (cin.fail()) {
        cout << "Please enter an integer." << endl;
        cin.clear();
        cin.ignore(1000, '\n');
      } else if (choice < 1 || choice > 4) {
        cout << "Invalid, please enter 1-4" << endl;
      } else {
        valid_choice = true;
      }
    } while (!valid_choice);

    // Display the nutritional facts of the chosen sides & sweets
    cout << endl << "Nutritional Facts:\n" << endl;
    switch (choice) {
    case 1:
      cout << "Cinnamon Twists" << endl;
      displaysidesandsweetsFacts(cinnamonTwists);
      sidessweetsVector.push_back(cinnamonTwists);
      break;
    case 2:
      cout << "Chips and Guac" << endl;
      displaysidesandsweetsFacts(chipsandGuac);
      sidessweetsVector.push_back(chipsandGuac);
      break;
    case 3:
      cout << "Chips and Queso" << endl;
      displaysidesandsweetsFacts(chipsandQueso);
      sidessweetsVector.push_back(chipsandQueso);
      break;
    case 4:
      cout << "Caramel Apple Empanada" << endl;
      displaysidesandsweetsFacts(caramelappleEmpanada);
      sidessweetsVector.push_back(caramelappleEmpanada);
      break;
    default:
      cout << "Invalid choice. Please choose a sides & sweets from the menu."
           << endl;
    }
    // Ask if the user wants to continue ordering
    char answer;
    bool continueOrdering = true;
    do {
      cout << "Do you want to add sides and sweets? "
              "(Y/N): ";
      cin >> answer;
      if (toupper(answer) == 'N') {
        continueOrdering = false;
      }
    } while (toupper(answer) != 'Y' && toupper(answer) != 'N');
    if (!continueOrdering) {
      break;
    }
  }
  return sidessweetsVector;
}