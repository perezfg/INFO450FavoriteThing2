#pragma once
#include <iostream>
#include <string>
#include "Automobile.h"

using namespace std;
class AutomobileList {
private:
	Automobile car[100];
	int numAuto;
	double totalAutomobile;
public:
	AutomobileList();
	int readFromFile(string filename);
	int writeToFile(string filename);
	void addItem();
	void showList();
	bool compareItems();
};