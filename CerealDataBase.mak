CerealDataBase : CerealDataBase.o Cereal.o ReadUtils.o CerealMain.o 
	g++ CerealDataBase.o Cereal.o ReadUtils.o CerealMain.o -o CerealDataBase

CerealDataBase.o : CerealDataBase.cpp CerealDataBase.h ReadUtils.h Cereal.h 
	g++ -Wall -c CerealDataBase.cpp  -o CerealDataBase.o


Cereal.o : Cereal.cpp ReadUtils.h Cereal.h 
	g++ -Wall -c Cereal.cpp  -o Cereal.o

ReadUtils.o : ReadUtils.cpp ReadUtils.h 
	g++ -Wall -c ReadUtils.cpp  -o ReadUtils.o

CerealMain.o : CerealMain.cpp ReadUtils.h Cereal.h CerealDataBase.h 
	g++ -Wall -c CerealMain.cpp  -o CerealMain.o

