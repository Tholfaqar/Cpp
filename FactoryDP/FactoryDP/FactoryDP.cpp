// this program creates a Coffee machine using design pattern (Factory method)
// Dolf Al Emara
#include "pch.h"
#include <iostream>

using namespace std;

// Product from which the concrete products will inherit from 
class Coffee
{
protected:
	char _type[15];
public:
	Coffee()
	{
	}
	char *getType()
	{
		return _type;
	}
};

// One concrete class
class Espresso : public Coffee
{
public:
	Espresso() : Coffee()
	{
		strcpy_s(_type, "Espresso");
		cout << endl << "Making a cup of espresso" << endl;
		cout << "Grind and brew one scoop of espresso beans." << endl;
	}
};

// Another concrete class
class Cappuccino : public Coffee
{
public:
	Cappuccino() : Coffee()
	{
		strcpy_s(_type, "Cappuccino");
		cout << endl << "Making a cup of cappuccino" << endl;
		cout << "Grind and brew one scoop of espresso beans." << endl;
		cout << "Heat and foam milk." << endl;
	}
};

class CoffeeMakerFactory
{
private:
	Coffee * _coffee;
public:
	Coffee * GetCoffee()
	{
		int choice;

		cout << "Select type of coffee to make: " << endl;
		cout << "1: Espresso" << endl;
		cout << "2: Cappuccino" << endl;
		cout << "Selection: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			return new Espresso;
		case 2:
			return new Cappuccino;
		default:
			cout << "Invalid Selection" << endl;
			return NULL;
		}
	}
};

int main()
{
	CoffeeMakerFactory coffeeMachine;
	Coffee *cup;
	cup = coffeeMachine.GetCoffee();

	cout << endl << "You had asked for a cup of " << cup->getType() << endl;

	return 0;

}