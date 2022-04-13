//ItemDB.h & ItemDB.cpp - This is where you will put your database class - it is where you would put RabbitDB from WS 4.

#include "Cereal.h"
#include <iostream>
#include <fstream>
using namespace std;

class CerealDataBase {
// all the public functions
public:
CerealDataBase();
void printArrayToFile(const char fileName[]);
void removeCereal();
void addCereal();
void printCerealByCalories();
void printAllCereal();
void cerealListToFile(const char fileName[]);
void insertFunction();
// all the private variables and such
private: 
enum {MAX_CEREALS = 50};
Cereal cereal[MAX_CEREALS];
int numCereals;
};