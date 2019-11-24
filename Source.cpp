#include <iostream>
#include <string>
#include "Automobile.h"
#include "AutomobileList.h"
using namespace std;

int main() {
	//Welcome
	cout << "Welcome!!! This is a program that will store your favorite cars.\nYou will input a year, make, model, price and engine configuration." << endl;
	//creating the object
	AutomobileList myCars;
	int choice = 0;
	do {
		//User menu loop to only exit when value is 5 and continue if value is 1-4
		cout << "Please choose from the following menu;\nEnter 1 to Read from a file\nEnter 2 to Add a new favorite thing to current list\nEnter 3 to Show current list\nEnter 4 to Save current list to the file\nEnter 5 to exit..." << endl;
		cin >> choice;
		//Choice one being able to read from a file with | as the split
		if (choice == 1) {
			string filepath;
			cout << "Please enter an input file path and be exact" << endl;
			cin.ignore();
			getline(cin,filepath);
			myCars.readFromFile(filepath);
			/*while (myCars.compareItems()) {
				cout << "Duplicate found" << endl;
				//getting user input again to start over
			}*/
		}
		//creating object of car that you want to create
		if (choice == 2) {
			myCars.addItem();
		}
		//showing the list of objects that have been read in.
		if (choice == 3) {
			myCars.showList();
		}
		//Entering an output file path to write/save to
		if (choice == 4) {
			string filepath;
			cout << "Please enter an output file path and be exact" << endl;
			cin.ignore();
			getline(cin, filepath);
			myCars.writeToFile(filepath);
		}

	} while (choice != 5&&choice<5&&choice>1);
	cout << "You entered to quit, have a good day!" << endl;
	system("pause");
	return 0;
}