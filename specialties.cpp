#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

struct NutritionalFacts1 {
  int calories = 0;
  int totalFat = 0;
  int cholesterol = 0;
  int sodium = 0;
  int totalCarbohydrates = 0;
  int protein = 0;
  string name = "";
  float price = 0;
};

void displaySpecialties(NutritionalFacts1 Specialties) {
  cout << "\n";
  cout << "Calories: " << Specialties.calories << endl;
  cout << "Total Fat: " << Specialties.totalFat << "g" << endl;
  cout << "Cholesterol: " << Specialties.cholesterol << "mg" << endl;
  cout << "Sodium: " << Specialties.sodium << "mg" << endl;
  cout << "Total Carbohydrates: " << Specialties.totalCarbohydrates << "g"
       << endl;
  cout << "Protein: " << Specialties.protein << "g" << endl;
  cout << "Price: $" << fixed << setprecision(2) << Specialties.price << endl;
}

vector<NutritionalFacts1> Specialties() {
  vector<NutritionalFacts1> specialtyVector(0);
  NutritionalFacts1 Mexican_pizza = {540, 29, 40, 940, 49, 19, "Mexican Pizza",
                                     4.69};
  NutritionalFacts1 Veggie_Mexican_pizza = {
      470, 25, 20, 690, 46, 14, "Veggie Mexican Pizza", 4.69};
  NutritionalFacts1 Chalupa_Supreme = {
      360, 21, 25, 570, 31, 12, "Chalupa Supreme", 3.99};
  NutritionalFacts1 Bean_Chalupa_Supreme = {
      340, 18, 10, 460, 36, 10, "Bean Chalupa Supreme", 3.99};
  NutritionalFacts1 Crunch_Wrap = {540,           21,  20, 1210, 77, 15,
                                   "Crunch Wrap", 4.69};
  NutritionalFacts1 Bean_Crunch_Wrap = {
      520, 18, 5, 1100, 73, 13, "Bean Crunch Wrap", 4.69};
  NutritionalFacts1 Gordita_Crunch = {
      500, 28, 41, 840, 41, 20, "Gordita Crunch", 4.59};
  NutritionalFacts1 Chicken_Chipotle = {
      190, 9, 35, 530, 16, 12, "Chicken Chipotle Burrito", 1.69};
  NutritionalFacts1 Cheesy_Roll_up = {
      380, 17, 35, 980, 41, 16, "Cheesy Roll Up", 1.00};

  bool continueOrdering = true;
  while (continueOrdering) {
    // Show the Specialty manu
    cout << "SPECIALTY MENU" << endl;
    cout << "------------------------------------" << endl;
    cout << "1. Mexican Pizza - $1.69" << endl;
    cout << "2. Veggie Mexican Pizza - 1.00" << endl;
    cout << "3. Chalupa Supreme - $4.39" << endl;
    cout << "4. Bean Chalupa Supreme - $4.49" << endl;
    cout << "5. Crunch Wrap - $3.39" << endl;
    cout << "6. Bean Crunch Wrap - $2:00" << endl;
    cout << "7. Gordita Crunch - $2.79" << endl;
    cout << "8. Chicken Chipotle Burrito - $2.00" << endl;
    cout << "9. Cheesy Roll Up - $1.00" << endl;

    // Prompt the user to choose a burrito
    int choice;
    bool valid_choice = false;

    do {
      cout
          << "Hello! This is the specialty section, order with options (1-9): ";
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
      cout << "Mexican Pizza" << endl;
      displaySpecialties(Mexican_pizza);
      specialtyVector.push_back(Mexican_pizza);
      break;
    case 2:
      cout << "Veggie Mexican Pizza" << endl;
      displaySpecialties(Veggie_Mexican_pizza);
      specialtyVector.push_back(Veggie_Mexican_pizza);
      break;
    case 3:
      cout << "Chalupa Supreme" << endl;
      displaySpecialties(Chalupa_Supreme);
      specialtyVector.push_back(Chalupa_Supreme);
      break;
    case 4:
      cout << "Bean Chalupa Supreme" << endl;
      displaySpecialties(Bean_Chalupa_Supreme);
      specialtyVector.push_back(Bean_Chalupa_Supreme);
      break;
    case 5:
      cout << "Crunch Wrap" << endl;
      displaySpecialties(Crunch_Wrap);
      specialtyVector.push_back(Crunch_Wrap);
      break;
    case 6:
      cout << "Bean Crunch Wrap" << endl;
      displaySpecialties(Bean_Crunch_Wrap);
      specialtyVector.push_back(Bean_Crunch_Wrap);
      break;
    case 7:
      cout << "Gordita Crunch" << endl;
      displaySpecialties(Gordita_Crunch);
      specialtyVector.push_back(Gordita_Crunch);
      break;
    case 8:
      cout << "Chipotle Chicken Burrito" << endl;
      displaySpecialties(Chicken_Chipotle);
      specialtyVector.push_back(Chicken_Chipotle);
      break;
    case 9:
      cout << "Cheesy Roll Up" << endl;
      displaySpecialties(Cheesy_Roll_up);
      specialtyVector.push_back(Cheesy_Roll_up);
      break;
    default:
      cout << "Invalid choice. Please choose a burrito from the menu." << endl;
    }
    // Ask if the user wants to continue ordering
    char answer;
    bool continueOrdering = true;
    do {
      cout << "Do you want to add another item from the specialty section? "
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
  return specialtyVector;
}