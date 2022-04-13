//ItemMain.cpp - This is where you will put your main and your menu code.
#include "CerealDataBase.h"
#include <iostream>
#include "ReadUtils.h"
using namespace std;
// the main function to take in everything and has a switch statement for each input from the user depending on the menu choice 
// menu funciton to print the menu
int Menu() {
  int menuChoice = 0;
  cout << "Welcome to the cereal selector" << endl;
  cout << "Choose one option by entering a number below" << endl;
  cout << "1. Reload database from the file" << endl;
  cout << "2. Print database " << endl;
  cout << "3. Add new entry " << endl;
  cout << "4. Remove entry " << endl;
  cout << "5. Print all cereal with < 100 calories in it" << endl;
  cout << "6. Save database to the file" << endl;
  cout << "7. Insert a function" << endl;
  cout << "8. Quit " << endl;
  cout << "Input: ";
  cin >> menuChoice;
  cout << endl;
  return menuChoice;
}

// main function to do everything 
int main() {
  CerealDataBase dataBase;
   ifstream cerealFile("cereal.txt");
  int menuChoice = 0;
  int num = 0;
  
  menuChoice = Menu();

  while(menuChoice != 8) {
    switch (menuChoice) {
      case 1:
      dataBase.printArrayToFile("cereal.txt");
      break;
    
      case 2:
      dataBase.printAllCereal();
        break;
    
      case 3:
      dataBase.addCereal();
      num++;
      break;
      
      case 4: 
      dataBase.removeCereal();
      num--;
      break;

      case 5:
      dataBase.printCerealByCalories();
      break;

      case 6:
      dataBase.cerealListToFile("cereal.txt");
      break;

      case 7:
      dataBase.insertFunction();
      break;

      case 8:
      break;

      default :
      cout << "Invalid. Try again" << endl;
      break;
    }
menuChoice = Menu();
  }
}