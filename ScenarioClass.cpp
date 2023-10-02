//Allows input/output
#include <iostream>
//Allows us to use the strings in the code
#include <string>
//Includes the Scenario header file into Scenario.cpp to link them
#include "ScenarioClass.h"

using namespace std;

void ScenarioClass::LookForWater()
{
	//Displaying out to the user
	cout << "\nYou look around and see nothing but fields around you.\n";
	cout << "\nYou are starting to get thirsty and need to begin looking for water.";
	cout << "\nTo the south you see a burning village.";
	cout << "\nTo the north you see a large body of water.";
	cout << "Which way would you like to go (n/s)?";
	//Create a variable to hold the user choice
	string userChoice;
	//Lets us get the input from the user of their choice
	getline(cin, userChoice);
	//Evaluate the user choice
	if (userChoice == "n")
	{
		cout << "\n\nYou head north twords the burniong village.\n";
		cout << "\nYou find nothing but your burn yourself searching for scraps.";
		cout << "\nThis decreases your health points by 25.";
		Health = Health - 25;
	}
	if (userChoice == "s")
	{
		cout << "\n\nYou head south twords the body of water.\n";
		cout << "\nYou find a large lake which is fresh water.";
		cout << "\nYou take a drink, this increases your health points by 50.";
		Health = Health + 50;
	}
}

void ScenarioClass::LookForFood()
{
	//Display the scenario for the user
	cout << "\n\nYou are now starting to become hungry and need to search for food.\n";
	cout << "\nTo the east you hear a howling noise.";
	cout << "\nTo the west you hear people talking.";
	cout << "\nWhich way would you like to explore (e/w)?";
	//Create a variable to hold the users choice
	string userChoice;
	//Gets the input from the user of their choice
	getline(cin, userChoice);
	//Evavluate the users choice
	if (userChoice == "e")
	{
		cout << "\n\nYou head east twords the howling noise and get bit by a wolf.\n";
		cout << "\nThis decreases your health points by 50.";
		Health = Health - 50;
	}
	if (userChoice == "w")
	{
		cout << "\n\nYou head west twords the people talking.\n";
		cout << "\nYou find a village full of farmers who offer you some bread to eat.";
		cout << "\nYou eat the bread, this increases your health points by 25.";
		Health = Health + 25;
	}
}