#include <iostream>
#include <fstream>
using namespace std;
class Cereal{
// adding all of the private variables and such
private: 
    enum {MAX_CHAR_LEN=100};
    char Name[MAX_CHAR_LEN];
    double Calories;
    double Protein;
    double Fat;
    double Sodium;
    double Fiber;
    double Carbohydrates;
    double Sugar;
    double Serving;

public: // declaring all of the variables in the class (fields)
    Cereal();
    void printCereal(ostream &out);
    int readInt();
    double readDouble();
    bool readBool();
    void addCereal();
    double getCalories();
    void readCerealData(ifstream &inFile);
    int intFromUser(const char userInput[]);
    double doubleFromUser(const char userInput[]);

};