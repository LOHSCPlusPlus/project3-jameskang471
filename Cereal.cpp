// ItemClass.h & ItemClass.cpp - This is where you will put you class that holds information about something like Cereal, VideoGame etc - It is where you would put the Rabbit class from WS 4.

#include "Cereal.h"
#include <iostream>
#include <fstream>
#include "ReadUtils.h"

using namespace std;
// default constructer making all variables to 0
Cereal::Cereal() {
  for (int index = 0; index < MAX_CHAR_LEN; index++) {
    Name[index] = 0;
  }
  Calories = 0.0;
  Protein = 0.0;
  Fat = 0.0;
  Sodium = 0.0;
  Fiber = 0.0;
  Carbohydrates = 0.0;
  Sugar = 0.0;
  Serving = 0.0;
}

// reading all of the cereals till each ;
void Cereal::readCerealData(ifstream &inFile) {
    
    inFile.get(Name, Cereal::MAX_CHAR_LEN, ';');
    inFile.ignore(100,';');
    inFile >> Calories;
    inFile.ignore(100,';');
    inFile >> Protein;
    inFile.ignore(100,';');
    inFile >> Fat;
    inFile.ignore(100,';');
    inFile >> Sodium;
    inFile.ignore(100,';');
    inFile >> Fiber;
    inFile.ignore(100,';');
    inFile >> Carbohydrates;
    inFile.ignore(100,';');
    inFile >> Sugar;
    inFile.ignore(100,';');
    inFile >> Serving;
    inFile.ignore(100, '\n');
}

// bool Cereal::compare(const char otherName[]) {
//   if(strcmp(Name, otherName) == 0) {
//     return true;
//   }
//   return false;
// }
// printing function to print everything 
void Cereal::printCereal(ostream &out) {
// might need while idk for valid 
  out << Name << ";";
  out << Calories << ";";
  out << Protein << ";";
  out << Fat << ";";
  out << Sodium << ";";
  out << Fiber << ";";
  out << Carbohydrates << ";";
  out << Sugar << ";";
  out << Serving << ";";
  out << endl;
  }
// a few problems with this one but its okay 

  // reading the ints. to keep bugs from happenign. same as project1 but i changed it so it wont be the same.  hopefully it doesnt ping it
int Cereal::intFromUser(const char userInput[]) {
    int variableReturned = 0;
    cout << userInput;
    cin >> variableReturned;
    while (!cin) {
        cin.clear();
        cin.ignore(100,'\n');
        cout << "Try again" << endl;
        cout << userInput;
        cin >> variableReturned;
    }
    return variableReturned;
}
// to read all of the variables as doubles. same as project1 but i changed it so it wont be the same. hopefully it doesnt ping it
double Cereal::doubleFromUser(const char userInput[]) {
      int variableReturned = 0.0;
    cout << userInput;
    cin >> variableReturned;
    while (!cin) {
        cin.clear();
        cin.ignore(100,'\n');
        cout << "Try again" << endl;
        cout << userInput;
        cin >> variableReturned;
    }
    return variableReturned;
}
// adds a ceereal function
void Cereal::addCereal() {
      cout << "Name: ";
      cin.ignore(100, '\n');
      cin.getline(Name,MAX_CHAR_LEN);
      double userInputDouble = doubleFromUser("\nCalories: ");
      Calories = userInputDouble;
      userInputDouble = doubleFromUser("\nProtein: ");
      Protein = userInputDouble;
      userInputDouble = doubleFromUser("\nFat: ");
      Fat = userInputDouble;
      userInputDouble = doubleFromUser("\nSodium: ");
      Sodium = userInputDouble;
      userInputDouble = doubleFromUser("\nFiber: ");
      Fiber = userInputDouble;
      userInputDouble = doubleFromUser("\nCarbohydrates: ");
      Carbohydrates = userInputDouble;
      userInputDouble = doubleFromUser("\nSugar: ");
      Sugar = userInputDouble;
      userInputDouble = doubleFromUser("\nServing: ");
      Serving = userInputDouble;
    }
//accessor to get calories
double Cereal::getCalories() {
  return Calories;
}

