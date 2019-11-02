#include <iostream>
#include <string>
#include "Automobile.h"
#include "AutomobileList.h"
using namespace std;

int main() {
	cout << "Welcome!!! This is a program that will store your favorite cars.\nYou will input a year, make, model, price and engine configuration." << endl;
	//creating the object
	AutomobileList myCars;
	//creating each object of car 
	string choice = "yes";
	int count = 0;
	do {
		myCars.addItem();
		cout << "Would you like to continue?" << endl;
		cin >> choice;
		count++;
	} while (choice =="yes");
	//comparing the objects to see if they are duplicates in every field
	while (myCars.compareItems()) {
		cout << "Please re-enter favorite car details but do not create duplicates..." << endl;
		//getting user input again to start over
		count = 0;
		do {
			myCars.addItem();
			cout << "Would you like to continue?" << endl;
			cin >> choice;
			count++;
		} while (choice == "yes");
	}
	//showing the total price of all cars added and values in each object
	myCars.showList();
	system("pause");
	return 0;
}