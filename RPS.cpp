//Robert Colburn
#include <iostream>
#include <ctime>
using namespace std;
enum {ROCK, PAPER, SCISSORS, EXIT};
void playGame(int);

int main()
{
	int choice;
	//Seeds the random number generator.
	srand(time(0));
	//Displays the menu.
	do
	{
		cout << "Enter an option:\n";
		cout << "1.\tRock\n";
		cout << "2.\tPaper\n";
		cout << "3.\tScissors\n";
		cout << "4.\tExit\n";
		cin >> choice;
		choice;
		if (choice != 4)
			//Calls the playGame function.
			playGame(choice);
	} while (choice != 4);
	cin.get();
	return 0;
}
void playGame(int userChoice)
{
	int computerChoice;
	//The computer picks a random number.
	computerChoice = rand() % 3;
	//Displays what choice the computer made.
	if (computerChoice == ROCK)
		cout << "The computer chose rock.\n";
	else if (computerChoice == PAPER)
		cout << "The computer chose paper.\n";
	else if (computerChoice == SCISSORS)
		cout << "The computer chose scissors.\n";
	else
		//Used for testing purposes.
		cout << "There was an error with the random number generator.\n";
	if ((userChoice - 1) == computerChoice)
	{
		cout << "Tie!\n";
		return;
	}
	//The switch statement determines whether the user won or lost based on what the computer chose.
	switch (userChoice - 1)
	{
	case ROCK:
		if (computerChoice == PAPER)
			cout << "You lost.\n";
		if (computerChoice == SCISSORS)
			cout << "You won!\n";
		break;
	case PAPER:
		if (computerChoice == SCISSORS)
			cout << "You lost.\n";
		if (computerChoice == ROCK)
			cout << "You won!\n";
		break;
	case SCISSORS:
		if (computerChoice == ROCK)
			cout << "You lost.\n";
		if (computerChoice == PAPER)
			cout << "You won!\n";
		break;
	}
}