//Includes the Utility header in Utility.cpp file to link them
#include "UtilityClass.h"

//Allows us to get user input/output
#include <iostream>

#include <ostream>
//includes the scenario header in utility.cpp file to link them
#include "ScenarioClass.h"


//Displays the users health
void UtilityClass::DisplayUserHealth(std::string playersName)
{
	std::cout << "\n\n\t *** Running Health Check ***\n";
	std::cout << "\n" << playersName << ", your current health is at " << Health << " of 100" << std::endl;
	UtilityClass::CheckIfPlayerIsAlive();
}
//Checks if the player is still alive
void UtilityClass::CheckIfPlayerIsAlive()
{
	//Check the health points, if the player is at or below zero, they are dead
	if (Health <= 0)
	{
		//The player is dead
		isAlive = false;
		std::cout << "\nYou have died...";
	}
	else
	{
		//The player is alive
		isAlive = true;
	}
}
void UtilityClass::PlayerAge()
{
	int age = 18;

	int& refAge = age;

	refAge ++;

	std::cout << "\n\nYou are " << refAge << " years old.\n";
}