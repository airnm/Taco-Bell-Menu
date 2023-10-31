/**
 * Project III: Start here.
 */
#include "Burritos.cpp"
#include "Taco_bell_tester.cpp"
#include "library.h"
#include "sidesandsweets.cpp"
#include "specialties.cpp"
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <list>
using namespace std;

int main() {
  string choice;
  int input;
  double Price;
  vector<NutritionalFacts> burritos(0);
  vector<NutritionalFacts1> specialties(0);
  vector<NutritionalFacts2> sidesandsweets(0);

  int total_calories = 0;
  int total_fat = 0;
  int total_cholesterol = 0;
  int total_sodium = 0;
  int total_carbs = 0;
  int total_protein = 0;
  double total_price = 0;
  int break_option = 0;
  list<string> total_order;
  Taco myTaco;
  NutritionalInformation info;

  do {
    cout << "\nWhat do you want" << endl;
    cout << "1. For tacos" << endl;
    cout << "2. For Burritos" << endl;
    cout << "3. Specialties" << endl;
    cout << "4. Sides and Sweets" << endl;
    cout << "5. Quit " << endl;
    cout << "______________________" << endl;

    bool valid_choice = false;

    do {
      cout << " Option: ";
      cin >> input;
      if (cin.fail()) {
        cout << "Please enter an integer." << endl;
        cin.clear();
        cin.ignore(1000, '\n');
      } else if (input < 1 || input > 5) {
        cout << "Invalid, please enter 1-5" << endl;
      } else {
        valid_choice = true;
      }
    } while (!valid_choice);

    switch (input) {
    case 1:
      info = Taco_runner();
      for (string order : info.total_order) {
        total_order.push_back(order);
      }
      cout << endl;
      total_calories += info.total_calories;
      total_fat = info.total_fat;
      total_cholesterol = info.total_cholesterol;
      total_sodium = info.total_sodium;
      total_carbs = info.total_carbs;
      total_protein = info.total_protein;
      total_price = info.total_price;
      do {
        cout << "Would you like to go back to Main Menu? yes/no ";
        cin >> choice;
      } while (choice != "yes" && choice != "no");
      break;
    case 2:
      if (burritos.size() == 0) {
        burritos = Burritos();
      } else {
        vector<NutritionalFacts> TempBurritos = Burritos();
        for (auto element : TempBurritos) {
          burritos.push_back(element);
        }
      }
      do {
        cout << "Would you like to go back to Main Menu? yes/no ";
        cin >> choice;
      } while (choice != "yes" && choice != "no");
      break;

    case 3:
      if (specialties.size() == 0) {
        specialties = Specialties();
      } else {
        vector<NutritionalFacts1> TempSpecialties = Specialties();
        for (auto element : TempSpecialties) {
          specialties.push_back(element);
        }
      }
      do {
        cout << "Would you like to go back to Main Menu? yes/no ";
        cin >> choice;
      } while (choice != "yes" && choice != "no");
      break;
    case 4:
      if (sidesandsweets.size() == 0) {
        sidesandsweets = Sidessweets();
      } else {
        vector<NutritionalFacts2> TempSidesandSweets = Sidessweets();
        for (auto element : TempSidesandSweets) {
          sidesandsweets.push_back(element);
        }
      }
      do {
        cout << "Would you like to go back to Main Menu? yes/no ";
        cin >> choice;
      } while (choice != "yes" && choice != "no");
      break;
    case 5:
      break_option = 0;
      cout << "\n\nYour total order is: " << endl;
      for (string order : total_order) {
        cout << order << ", ";
      }

      for (auto element : burritos) {
        total_calories += element.calories;
        total_fat += element.totalFat;
        total_cholesterol += element.cholesterol;
        total_sodium += element.sodium;
        total_carbs += element.totalCarbohydrates;
        total_protein += element.protein;
        total_price += element.price;
        cout << element.name << ", ";
      }

      for (auto element : specialties) {
        total_calories += element.calories;
        total_fat += element.totalFat;
        total_cholesterol += element.cholesterol;
        total_sodium += element.sodium;
        total_carbs += element.totalCarbohydrates;
        total_protein += element.protein;
        total_price += element.price;
        cout << element.name << ", ";
      }

      for (auto element : sidesandsweets) {
        total_calories += element.calories;
        total_fat += element.totalFat;
        total_cholesterol += element.cholesterol;
        total_sodium += element.sodium;
        total_carbs += element.totalCarbohydrates;
        total_protein += element.protein;
        total_price += element.price;
        cout << element.name << ", ";
      }
      cout << endl;
      cout << "Total Calories: " << total_calories << " " << endl;
      cout << "Total Fat: " << total_fat << " g" << endl;
      cout << "Total Cholesterol: " << total_cholesterol << " mg" << endl;
      cout << "Total Sodium: " << total_sodium << " mg" << endl;
      cout << "Total Carbs: " << total_carbs << " g" << endl;
      cout << "Total Protein: " << total_protein << " g" << endl << endl;
      cout << "Total Price: $" << total_price << endl;
      cout << "\nHave a nice day!" << endl;

      exit(0);
    default:
      cout << "INVALID CHOICE CHOOSE OPTION 1-5" << endl;
      break;
    }
    // cout << "Would you like to go back to Main Menu? yes/no ";
    // cin >> choice;
  } while (choice == "yes" || choice == "Yes" || break_option == 1);

  cout << "\n\nYour total order is: " << endl;
  for (string order : total_order) {
    cout << order << ", ";
  }

  for (auto element : burritos) {
    total_calories += element.calories;
    total_fat += element.totalFat;
    total_cholesterol += element.cholesterol;
    total_sodium += element.sodium;
    total_carbs += element.totalCarbohydrates;
    total_protein += element.protein;
    total_price += element.price;
    cout << element.name << ", ";
  }

  for (auto element : specialties) {
    total_calories += element.calories;
    total_fat += element.totalFat;
    total_cholesterol += element.cholesterol;
    total_sodium += element.sodium;
    total_carbs += element.totalCarbohydrates;
    total_protein += element.protein;
    total_price += element.price;
    cout << element.name << ", ";
  }

  for (auto element : sidesandsweets) {
    total_calories += element.calories;
    total_fat += element.totalFat;
    total_cholesterol += element.cholesterol;
    total_sodium += element.sodium;
    total_carbs += element.totalCarbohydrates;
    total_protein += element.protein;
    total_price += element.price;
    cout << element.name << ", ";
  }
  cout << endl;
  cout << "Total Calories: " << total_calories << " " << endl;
  cout << "Total Fat: " << total_fat << " g" << endl;
  cout << "Total Cholesterol: " << total_cholesterol << " mg" << endl;
  cout << "Total Sodium: " << total_sodium << " mg" << endl;
  cout << "Total Carbs: " << total_carbs << " g" << endl;
  cout << "Total Protein: " << total_protein << " g" << endl << endl;
  cout << "Total Price: $" << total_price << endl;
  return 0;
}
