/**
 * Project III: Start testing here.
 */
#include "Burritos.cpp"
#include "library.h"
#include "sidesandsweets.cpp"
#include <assert.h>
#include <string>
using namespace std;
void test() {
  // Test displayBurritoFacts
  NutritionalFacts burrito = {500, 20, 50, 1000, 60, 30, "Test Burrito", 2.50};
  displayBurritoFacts(burrito);

  // Test Burritos function
  vector<NutritionalFacts> burritos = Burritos();
  if (burritos.size() != 9) {
    cout << "Error: Burritos vector has incorrect size." << endl;
  }

  // Test user input for choosing burritos
  istringstream iss("3\n");
  cin.rdbuf(iss.rdbuf());
  int choice;
  cin >> choice;
  if (choice != 3) {
    cout << "Error: Incorrect user input." << endl;
  }
}


void testSidessweets() {
  // Test if the function can be called without error
  vector<NutritionalFacts2> results = Sidessweets();
  // Test if the returned vector contains at least one item
  assert(!results.empty());
  // Test if each item in the vector has a non-zero price
  for (auto& item : results) {
    assert(item.price > 0);
  }
}


// Testing Speacialties
#include "assert.h"
#include "specialties.cpp"
void testDisplaySpecialties() {
  NutritionalFacts1 test_burrito = {500, 28, 41, 840, 41, 20, "Gordita Crunch", 4.59};
  std::stringstream expected_output;
  expected_output << "\nCalories: " << test_burrito.calories << "\n";
  expected_output << "Total Fat: " << test_burrito.totalFat << "g" << "\n";
  expected_output << "Cholesterol: " << test_burrito.cholesterol << "mg" << "\n";
  expected_output << "Sodium: " << test_burrito.sodium << "mg" << "\n";
  expected_output << "Total Carbohydrates: " << test_burrito.totalCarbohydrates << "g" << "\n";
  expected_output << "Protein: " << test_burrito.protein << "g" << "\n";
  expected_output << "Price: $" << std::fixed << std::setprecision(2) << test_burrito.price << "\n";

  std::stringstream test_output;
  displaySpecialties(test_burrito);
  std::cout << "Expected output: \n" << expected_output.str() << std::endl;
  std::cout << "Actual output: \n" << test_output.str() << std::endl;
}

// void testGetItemNutrition() {
//   Taco myTaco;
//   cout << "Testing getItemNutrition function:" << endl;
//   int itemNumber = 1;
//   myTaco.get_item(itemNumber);
//   // TODO: Add assert statements to check if the nutritional values are correct
//   int calories = myTaco.Calories;
//   int fat = myTaco.Fat;
//   int carbs = myTaco.Carbs;
//   int protein = myTaco.Protein;
//   int sodium = myTaco.Sodium;
//   int cholesterol = myTaco.Cholesterol;
//   double price = myTaco.Price;
//   string taco_type = myTaco.taco_type;
//   cout << "Testing the first item in the menu Soft Taco" << endl;
//   if (taco_type == "Soft Taco") {
//     cout << "Correct Item: True" << endl;
//   }
//   if (calories == 180) {
//     cout << "Correct Calories: True" << endl;
//   }
//   if (fat == 9) {
//     cout << "Correct Fat: True" << endl;
//   }
//   if (cholesterol == 25) {
//     cout << "Correct Cholesterol: True" << endl;
//   }
//   if (sodium == 500) {   
//     cout << "Correct Sodium: True" << endl;
//   }
//   if (carbs == 18) {
//     cout << "Correct Carbs: True" << endl;
//   }
//   if (protein == 9) {
//     cout << "Correct Protein: True" << endl;
//   }
//   if (price == 1.89) {
//     cout << "Correct Price: True" << endl;
//   }
// }