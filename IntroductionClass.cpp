//Allows user input/output
#include <iostream>
#include "IntroductionClass.h"
#include <string>

void IntroductionClass::DisplayTitle()
{
	//Displays the title for the user
	std::cout << "\n\n\t*** Welcome to the world of Erengale ***\n\n";
	std::cout << "\n\nThis is a land of complete fiction and is up to you to make choices for the character\n";
	//Displays press any key to continue
	system("pause");
}

std::string IntroductionClass::GetUserName()
{
	//make a local variable to hold the user name
	std::string userName;
	//tell the user to type in their name
	std::cout << "\nWhat is your name brave adventurer?";
	//This get the users input
	getline(std::cin, userName);
	//returns the user name as a string from the function
	return userName;
}

void IntroductionClass::WelcomeUser(std::string userName)
{
	//Welcomes the user
	std::cout << "\n\nWelcome " << userName << ", you have just woke up on a strange world called Erengale\n";
}