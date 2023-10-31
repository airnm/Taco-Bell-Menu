#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

// Define a struct to hold the nutritional facts of a burrito
struct NutritionalFacts {
  int calories = 0;
  int totalFat = 0;
  int cholesterol = 0;
  int sodium = 0;
  int totalCarbohydrates = 0;
  int protein = 0;
  string name = "";
  float price = 0;
};

// Define a function to display the nutritional facts of a burrito
void displayBurritoFacts(NutritionalFacts burritoFacts) {
  cout << "Calories: " << burritoFacts.calories << endl;
  cout << "Total Fat: " << burritoFacts.totalFat << "g" << endl;
  cout << "Cholesterol: " << burritoFacts.cholesterol << "mg" << endl;
  cout << "Sodium: " << burritoFacts.sodium << "mg" << endl;
  cout << "Total Carbohydrates: " << burritoFacts.totalCarbohydrates << "g"
       << endl;
  cout << "Protein: " << burritoFacts.protein << "g" << endl;
  cout << "Price: $" << fixed << setprecision(2) << burritoFacts.price << endl;
}

vector<NutritionalFacts> Burritos() {
  vector<NutritionalFacts> burritosVector(0);
  // Define the nutritional facts of some burritos
  NutritionalFacts beanBurrito = {370, 10, 20, 1040, 58, 12, "Bean Burrito",
                                  1.69};
  NutritionalFacts beefBurrito = {430, 16, 40, 1330, 51, 20, "Beef Burrito",
                                  1.00};
  NutritionalFacts burritoSupreme = {
      400, 14, 25, 1170, 52, 16, "Burrito Supreme", 4.39};
  NutritionalFacts quesarito = {450, 33, 50, 1420, 67, 21, "Quesarito", 4.49};
  NutritionalFacts beefy5Layer = {490, 18, 25, 1260, 65, 18, "Beefy 5 Layer",
                                  3.39};
  NutritionalFacts chipRanchBurr = {
      510, 29, 45, 950, 47, 17, "Chipotle Ranch Grilled Chicken", 2.00};
  NutritionalFacts chiliCheese = {
      380, 17, 35, 980, 41, 16, "Chilli Cheese Burrito", 2.79};
  NutritionalFacts fiestaVeggie = {
      570, 28, 25, 1030, 65, 14, "Fiesta Veggie Burrito", 2.00};
  NutritionalFacts cheesyBeanRice = {
      420, 16, 5, 920, 55, 9, "Cheesy Bean & Rice", 1.00};

  bool continueOrdering = true;
  while (continueOrdering) {
    // Display a menu of burritos
    cout << "BURRITO MENU" << endl;
    cout << "------------------------------------" << endl;
    cout << "1. Bean Burrito - $1.69" << endl;
    cout << "2. Beef Burrito - 1.00" << endl;
    cout << "3. Burrito Supreme - $4.39" << endl;
    cout << "4. Quesarito - $4.49" << endl;
    cout << "5. Beefy 5 Layer - $3.39" << endl;
    cout << "6. Chipotle Ranch Grilled Chicken - $2:00" << endl;
    cout << "7. Chilli Cheese Burrito - $2.79" << endl;
    cout << "8. Fiesta Veggie Burrito - $2.00" << endl;
    cout << "9. Cheesy Bean & Rice - $1.00" << endl;

    // Prompt the user to choose a burrito
    int choice;
    bool valid_choice = false;

    do {
      cout << "Choose a Burrito to Add (1-9): ";
      cin >> choice;
      if (cin.fail()) {
        cout << "Please enter an integer." << endl;
        cin.clear();
        cin.ignore(1000, '\n');
      } else if (choice < 1 || choice > 9) {
        cout << "Invalid, please enter 1-9" << endl;
      } else {
        valid_choice = true;
      }
    } while (!valid_choice);

    // Display the nutritional facts of the chosen burrito
    cout << endl << "Nutritional Facts:\n" << endl;
    switch (choice) {
    case 1:
      cout << "Bean Burrito" << endl;
      displayBurritoFacts(beanBurrito);
      burritosVector.push_back(beanBurrito);
      break;
    case 2:
      cout << "Beef Burrito" << endl;
      displayBurritoFacts(beefBurrito);
      burritosVector.push_back(beefBurrito);
      break;
    case 3:
      cout << "Burrito Supreme" << endl;
      displayBurritoFacts(burritoSupreme);
      burritosVector.push_back(burritoSupreme);
      break;
    case 4:
      cout << "Quesarito" << endl;
      displayBurritoFacts(quesarito);
      burritosVector.push_back(quesarito);
      break;
    case 5:
      cout << "Beefy 5 Layer" << endl;
      displayBurritoFacts(beefy5Layer);
      burritosVector.push_back(beefy5Layer);
      break;
    case 6:
      cout << "Chipotle Ranch Grilled Chicken" << endl;
      displayBurritoFacts(chipRanchBurr);
      burritosVector.push_back(chipRanchBurr);
      break;
    case 7:
      cout << "Chilli Cheese Burrito" << endl;
      displayBurritoFacts(chiliCheese);
      burritosVector.push_back(chiliCheese);
      break;
    case 8:
      cout << "Fiesta Veggie Burrito" << endl;
      displayBurritoFacts(fiestaVeggie);
      break;
    case 9:
      cout << "Cheesy Bean & Rice" << endl;
      displayBurritoFacts(cheesyBeanRice);
      burritosVector.push_back(cheesyBeanRice);
      break;
    default:
      cout << "Invalid choice. Please choose a burrito from the menu." << endl;
    }
    // Ask if the user wants to continue ordering
    char answer;
    bool continueOrdering = true;
    do {
      cout << "Do you want to add another Burrito (Y/N)? ";
      cin >> answer;
      if (toupper(answer) == 'N') {
        continueOrdering = false;
      }
    } while (toupper(answer) != 'Y' && toupper(answer) != 'N');
    if (!continueOrdering) {
      break;
    }
  }
  return burritosVector;
}