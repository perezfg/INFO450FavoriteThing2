#include <iostream>
#include <string>
#include <fstream>
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
			if (car[i].getYear()==car[j].getYear()) {
				if (car[i].getPrice() == car[j].getPrice()) {
					if (car[i].getModel()==car[j].getModel()) {
						if (car[i].getMake() == car[j].getMake()) {
							if (car[i].getEngine() == car[j].getEngine()) {
								numAuto -= car[i].getPrice();
								totalAutomobile -=car[i].getPrice();
								return true;
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
int AutomobileList::writeToFile(string filename) {
	int i;
	ofstream outputFile;
	outputFile.open(filename, ios::trunc);
	if (!outputFile) {
		outputFile.open(filename, ios::out);
	}
	for (i = 0; i < numAuto; i++) {
		outputFile <<car[i].getYear() << "|";
		outputFile << car[i].getMake() << "|";
		outputFile << car[i].getModel() << "|";
		outputFile << car[i].getEngine() << "|";
		outputFile << car[i].getPrice() << "|"<<endl;
	}
	outputFile.close();
	return 0;
}
int AutomobileList::readFromFile(string filename) {
	ifstream inputFile;
	inputFile.open(filename, ios::in);
	if (!inputFile) {
		cout << "Error: could not open file" << endl;
		return -2;
	}

	int year;
	string make;
	string model;
	string engine;
	double price;
	string inputString;
	while (!inputFile.eof()) {
		getline(inputFile, inputString, '|');
		if (inputString.length() >= 1) {
			year = stoi(inputString);
			getline(inputFile, make, '|');
			getline(inputFile, model, '|');
			getline(inputFile, engine, '|');
			getline(inputFile, inputString, '|');
			price = stod(inputString);
			getline(inputFile, inputString, '\n');

			car[numAuto].setYear(year);
			car[numAuto].setMake(make);
			car[numAuto].setModel(model);
			car[numAuto].setEngine(engine);
			car[numAuto].setPrice(price);
			numAuto++;
			totalAutomobile += price;
		}
	}
	inputFile.close();
	return 0;
}