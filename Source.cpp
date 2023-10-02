//include lib for input and output
#include <iostream>
//include the lib so we can use strings in the program
#include <string>
//We have made our own header files
//Includes all the header files into the main cpp file
#include "IntroductionClass.h"
#include "ScenarioClass.h"
#include "UtilityClass.h"

//Global variables 
//Declares your Health to 100 Heath points
int Health = 100;
//Says if your character falls below 0 hp he we die
bool isAlive = true;

//include a namespace so w dont have to type std
using namespace std;

//Create the main function which is the start of all C++ programs
int main()
{
	//Create our objects from our classes or else we cant use any of the methods
	//Class name---> object name
	IntroductionClass introductionObject;
	ScenarioClass scenarioObject;
	UtilityClass utilityObject;

	//Now that we have made our objects from classes, we are done with classes.
	//We only use objects in our code. Just like we only live in buildings not the blueprint.

	//Make a player age

	//Give the player a choice to play again after each game
	bool playAgain = true;

	do
	{
	//calling the display title function
		introductionObject.DisplayTitle();
	//make a local variable to hold the users name
	string playerName;
	//call get user name function
	playerName = introductionObject.GetUserName();
	//call the Welcome User function and pass in the player name data
	introductionObject.WelcomeUser(playerName);
	//Displays the users health before the player looks for water
	utilityObject.DisplayUserHealth(playerName);
	utilityObject.PlayerAge();

	//First scenario is to look for water
	scenarioObject.LookForWater();
	//Displays the users health after they look for water
	utilityObject.DisplayUserHealth(playerName);
	//Second scenario to find food on Erengale
	//Checks if the user is still alive and if thats true than it will display the second scenario
	if (isAlive = true)
	{
		scenarioObject.LookForFood();
		utilityObject.DisplayUserHealth(playerName);
	}
		//Ask to play again
		cout << "\n\nWould you like to give another try at life on Erengale (y/n)?";
		//Get the users answer 
		char userChoice;
		//Holds the users choice
		cin >> userChoice;

		//Evaluate the answer
		//if 'y' then you play again if 'n' then the game closes
		if (userChoice == 'y')
		{
			playAgain = true;
		}
		else
		{
			playAgain = false;
		}
	} while (playAgain == true);

	//Say goodbye to the user
	cout << "\nThanks for playing my interaction game!\n";

	//Ends the main function
	return 0;
}

