//ItemDB.h & ItemDB.cpp - This is where you will put your database class - it is where you would put RabbitDB from WS 4.
#include "CerealDataBase.h"
#include <fstream>
#include "ReadUtils.h"
using namespace std;
// 
CerealDataBase::CerealDataBase() {
    numCereals = 0;
    
  };
// prints array to file
void CerealDataBase::printArrayToFile(const char fileName[]) {   
    ofstream outFile(fileName);
    for (int index = 0; index < MAX_CEREALS; index++) {
      cereal[index].printCereal(outFile);  
    }   
   }
// removing cereal entrys 
void CerealDataBase::removeCereal() {
  int number = 0;
  number = readInt("what index of cereal do u want to remove: ");
  for (int count = number; count < numCereals; count++) {
    cereal[number] = cereal[number+1];
    } 
  
}
// adding cereal entries to the end of the list 
void CerealDataBase::addCereal() {
  if(numCereals < MAX_CEREALS) {
    cereal[numCereals].addCereal();
    numCereals++;
  }
  else {
    cout << "Array is full" << endl;
  }
}
// print all cereals with < 100 caloriess
void CerealDataBase::printCerealByCalories() {
  for (int num = 0; num < 100; num++) {
    if(cereal[numCereals].getCalories() < 100 && cereal[numCereals].getCalories() > 0) {
      cereal[numCereals].printCereal(cout);
      cout << endl;
    }
  }
} 
// printing all cereals no matter what 
void CerealDataBase::printAllCereal() {
  for (int num = 0; num < numCereals; num++) {
    cout << "Index " << num << ": ";
    cereal[numCereals].printCereal(cout);
    cout << endl;
    }
  }
// 2nd print cereal list to file
void CerealDataBase::cerealListToFile(const char fileName[]) {
  ofstream outFile(fileName);
  for(int num = 0; num < numCereals; num++) {
    cereal[numCereals].printCereal(cout);
  }
}
// new insert function
void CerealDataBase::insertFunction() {
  if(numCereals < MAX_CEREALS) {
    int number = 0;
    number = readInt("what index of cereal do u want to insert: ");
  for (int count = numCereals; count >= number; count--) {
    cereal[count] = cereal[count-1];
    } 
    cereal[number].addCereal();
}
  }