// Singlton.cpp : This file contains the 'main' function. Program execution begins and ends there.
// this code implement a singleton design pattern
// Dolf 02/18/2019

#include "pch.h"
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

class Leader
{
private:
	static Leader * _instance;
	Leader()
	{
		cout << "New leader elected" << endl;
	}
public:
	static Leader * getInstance()
	{
		if (_instance == NULL)
		{
			_instance = new Leader;
		}
		return _instance;
	}
	void giveSpeech()
	{
		cout << "Address the public" << endl;

	}
};

Leader* Leader::_instance = NULL;

int main()
{
	Leader::getInstance()->giveSpeech();
	Leader *elected = elected->getInstance();
	elected->giveSpeech();
}
