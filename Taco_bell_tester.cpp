#include "TacoBell.cpp"
#include "library.h"
#include <iomanip>
#include <iostream>
#include <list>
using namespace std;
struct NutritionalInformation {
  int total_calories = 0;
  int total_fat = 0;
  int total_cholesterol = 0;
  int total_sodium = 0;
  int total_carbs = 0;
  int total_protein = 0;
  double total_price = 0;
  list<string> total_order;
};
NutritionalInformation Taco_runner() {
  NutritionalInformation info;
  string go_again;
  int total_calories = 0, total_fat = 0, total_cholesterol = 0,
      total_sodium = 0, total_carbs = 0, total_protein = 0;
  double price = 0;
  do {
    Taco myTaco;
    myTaco.displayMenu();
    myTaco.getUserChoice();
    myTaco.get_item(myTaco.choice);
    info.total_calories += myTaco.Calories;
    info.total_fat += myTaco.Fat;
    info.total_cholesterol += myTaco.Cholesterol;
    info.total_sodium += myTaco.Sodium;
    info.total_carbs += myTaco.Carbs;
    info.total_protein += myTaco.Protein;
    info.total_price += myTaco.Price;
    info.total_order.push_back(myTaco.taco_type);
    if (myTaco.choice != 8) {
      cout << endl
           << "Nutritional Information for your selection: " << myTaco.taco_type
           << ": " << endl;
      cout << "Calories: " << myTaco.Calories << endl;
      cout << "Fat: " << myTaco.Fat << " g" << endl;
      cout << "Cholesterol: " << myTaco.Cholesterol << " mg" << endl;
      cout << "Sodium: " << myTaco.Sodium << " mg" << endl;
      cout << "Carbs: " << myTaco.Carbs << " g" << endl;
      cout << "Protein: " << myTaco.Protein << " g" << endl;
      cout << "Price: $" << myTaco.Price << endl;
      bool valid_choice = false;
      do {
        cout << "Anything else? yes/no ";
        cin >> go_again;
        if (cin.fail()) {
          cout << "Please yes or no." << endl;
          cin.clear();
          cin.ignore(1000, '\n');
        } else if (go_again != "yes" && go_again != "no") {
          cout << "Invalid, please enter 'yes' or 'no' " << endl;
        } else {
          valid_choice = true;
        }
      } while (!valid_choice);
    } else {
      go_again = "no";
    }
  } while (go_again == "yes");
  cout << endl;
  return info;
}