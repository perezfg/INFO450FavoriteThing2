#pragma once
#include <iostream>
#include <string>
#include "Automobile.h"

using namespace std;
class AutomobileList {
private:
	Automobile car[20];
	int numAuto;
	double totalAutomobile;
public:
	AutomobileList();
	void addItem();
	void showList();
	bool compareItems();
};