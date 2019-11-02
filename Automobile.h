#pragma once
#include <iostream>
#include <string>
using namespace std;
class Automobile {
private:
	int year;
	string model;
	string engine;
	string make;
	double price;
public:
	Automobile();
	Automobile(int y, double p, string n, string e, string m);
	int getYear();
	double getPrice();
	string getModel();
	string getEngine();
	string getMake();
	void setYear(int i);
	void setPrice(double p);
	void setModel(string n);
	void setEngine(string e);
	void setMake(string m);
	void getAutomobileInput();
	friend ostream& operator<<(ostream& output, Automobile& i);
};