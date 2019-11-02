#include <iostream>
#include <string>
#include "AutomobileList.h"
#include "Automobile.h"
using namespace std;

AutomobileList::AutomobileList() {
	numAuto = 0;
	totalAutomobile = 0;
}
//adding each object
void AutomobileList::addItem() {
	car[numAuto].getAutomobileInput();
	totalAutomobile += car[numAuto].getPrice();
	numAuto++;
}
//true or false for when the values two objects match or don't match
bool AutomobileList::compareItems() {
	for (int i = 1; sizeof(car) >i; i++) {
		for (int j = 0; sizeof(car) > i; j++) {
			if (car[i].getYear() == car[j].getYear()) {
				if (car[i].getPrice() == car[j].getPrice()) {
					if (car[i].getModel() == car[j].getModel()) {
						if (car[i].getMake() == car[j].getMake()) {
							if (car[i].getEngine() == car[j].getEngine()) {
								return true;
								numAuto = 0;
								totalAutomobile = 0;
							}
							else {
								return false;
							}
						}
						else {
							return false;
						}
					}
					else {
						return false;
					}
				}
				else {
					return false;
				}
			}
			else {
				return false;
			}
		}
	}
}
//method to show price of each object
void AutomobileList::showList() {
	for (int i = 0; i < numAuto; i++) {
		cout << car[i];
	}
	cout << "Total price of all vehicles is " << totalAutomobile << endl;
}