#include <iostream>
#include <string>
#include "Automobile.h"
#include "AutomobileList.h"
using namespace std;

int main() {
	// input to get how many vehicles that are wanted to be input
	int count;
	cout << "How many favorate cars would you like to input?" << endl;
	cin >> count;
	//creating the object
	AutomobileList myCars;
	//creating each object of car 
	for (int i = 0; i < count; i++) {
		myCars.addItem();
	}
	//comparing the objects to see if they are duplicates in every field
	while (myCars.compareItems()) {
		cout << "Please re-enter favorite car details but do not create duplicates..." << endl;
		//creating each object of car starting back at 0
		for (int i = 0; i < count; i++) {
			myCars.addItem();
		}
	}
	//showing the total price of all cars added and values in each object
	myCars.showList();

	system("pause");
	return 0;
}