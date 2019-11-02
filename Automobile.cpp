#include <iostream>
#include <string>
#include "Automobile.h"

using namespace std;

Automobile::Automobile() {
	year = 0;
	price = 0;
	make = "";
	engine = "";
	model = "";
}
Automobile::Automobile(int y, double p, string n, string e, string m) {
	year = y;
	price = p;
	make = m;
	engine = e;
	model = n;
}
int Automobile::getYear() {
	return year;
}
double Automobile::getPrice() {
	return price;
}
string Automobile::getModel() {
	return model;
}
string Automobile::getEngine() {
	return engine;
}
string Automobile::getMake() {
	return make;
}
void Automobile::setYear(int i) {
	year = i;
}
void Automobile::setPrice(double p) {
	price = p;
}
void Automobile::setModel(string n) {
	model = n;
}
void Automobile::setEngine(string e) {
	engine = e;
}
void Automobile::setMake(string m) {
	make = m;
}
//getting input from user method
void Automobile::getAutomobileInput() {
	cout << "Enter Automobile year " << endl;
	cin >> year;
	cin.ignore();
	cout << "Enter Make " << endl;
	getline(cin, make, '\n');
	cout << "Enter Model " << endl;
	getline(cin, model, '\n');
	cout << "Enter engine configuration " << endl;
	getline(cin, engine, '\n');
	cout << "Enter price " << endl;
	cin >> price;
}
//getting 
ostream& operator<<(ostream &output, Automobile &i) {
	output << "Automobile: " << i.year << "|" << i.engine << "|" << i.make << "|" << i.model <<"|"<<i.price<< endl;
	return output;
}