#include "library.h"
#include <tuple>
using namespace std;
void Taco::displayMenu() {
  cout << "TACO MENU" << endl;
  cout << "------------------------------------" << endl;
  cout << "1. Soft Taco - $1.89" << endl;
  cout << "2. Soft Taco Supreme - $2.59" << endl;
  cout << "3. Crunchy Taco - $1.89" << endl;
  cout << "4. Crunchy Taco Supreme - $2.59" << endl;
  cout << "5. Nacho Cheese Doritos Locos Tacos $2.69" << endl;
  cout << "6. Nacho Cheese Doritos Locos Tacos Supreme - $3.19" << endl;
  cout << "7. Spicy Potato Soft Taco $1.59" << endl;
  cout << "8. Main menu" << endl;
}
int Taco::getUserChoice() {
  bool valid_choice = false;
  do {
    cout << "Enter your choice (1-8): ";
    cin >> choice;
    if (cin.fail()) {
      cout << "Please enter an integer." << endl;
      cin.clear();
      cin.ignore(1000, '\n');
    } else if (choice < 1 || choice > 8) {
      cout << "Invalid, please enter 1-8" << endl;
    } else {
      valid_choice = true;
    }
  } while (!valid_choice);
  return choice;
}
void Taco::get_item(int choice) {
  int total_calories;
  switch (choice) {
  case 1:
    taco_type = "Soft Taco";
    Calories = 180;
    Fat = 9;
    Cholesterol = 25;
    Sodium = 500;
    Carbs = 18;
    Protein = 9;
    Price = 1.89;
    break;
  case 2:
    taco_type = "Soft Taco Supreme";
    Calories = 210;
    Fat = 10;
    Cholesterol = 25;
    Sodium = 510;
    Carbs = 20;
    Protein = 9;
    Price = 2.59;
    break;
  case 3:
    taco_type = "Crunchy Taco";
    Calories = 170;
    Fat = 10;
    Cholesterol = 25;
    Sodium = 300;
    Carbs = 13;
    Protein = 8;
    Price = 1.89;
    break;
  case 4:
    taco_type = "Crunchy Taco Supreme";
    Calories = 190;
    Fat = 11;
    Cholesterol = 25;
    Sodium = 320;
    Carbs = 15;
    Protein = 8;
    Price = 2.59;
    break;
  case 5:
    taco_type = "Nacho Cheese Doritos Locos Tacos";
    Calories = 170;
    Fat = 9;
    Cholesterol = 25;
    Sodium = 350;
    Carbs = 13;
    Protein = 8;
    Price = 2.69;
    break;
  case 6:
    taco_type = "Nacho Cheese Doritos Locos Tacos Supreme";
    Calories = 190;
    Fat = 11;
    Cholesterol = 25;
    Sodium = 360;
    Carbs = 15;
    Protein = 8;
    Price = 3.19;
    break;
  case 7:
    taco_type = "Spicy Potato Soft Taco";
    Calories = 240;
    Fat = 12;
    Cholesterol = 10;
    Sodium = 480;
    Carbs = 28;
    Protein = 5;
    Price = 1.59;
    break;
  case 8:
    cout << "Main menu";
    Calories = 0;
    Fat = 0;
    Cholesterol = 0;
    Sodium = 0;
    Carbs = 0;
    Protein = 0;
    Price = 0;
    cout << endl; 
    break;
  default:
    cout << "INVALID CHOICE.....try again" << endl;
    get_item(getUserChoice());
    break;
  }
}