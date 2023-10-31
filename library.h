/**
 * Project III: Start here.
 */
#pragma once
#ifndef TACO_H
#define TACO_H
#include <iostream>
#include <string>
using namespace std;
class Taco {
public:
  int choice;
  int Calories, Fat, Carbs, Sodium, Protein, Cholesterol;
  double Price;
  string taco_type;
  void displayMenu();
  int getUserChoice();
  void get_item(int choice);
private:
};
#endif