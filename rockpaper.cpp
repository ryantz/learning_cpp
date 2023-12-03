#include <iostream>
#include <cstdlib>

int main() {

	int rock, paper, scissors, lizard, spock, your_choice;
	rock = paper = scissors = lizard = spock = your_choice = 0;
	std::string your_choice_name, comp_choice_name;

	srand(time(NULL));
	int comp_choice = 1 + (std::rand() % 5);

	std::cout << "Please choose an option: \n";
	std::cout << " 1) Rock.\n 2) Paper.\n 3) Scissors.\n 4) Lizard.\n 5) Spock.\n";
	std::cin >> your_choice;

	//std::cout << comp_choice;

	switch (comp_choice) {

	case 1:
		comp_choice_name = "rock";
		break;
	case 2:
		comp_choice_name = "paper";
		break;
	case 3:
		comp_choice_name = "scissors";
		break;
	case 4:
		comp_choice_name = "lizard";
		break;
	default:
		comp_choice_name = "spock";
		break;
	}

	//std::cout << comp_choice_name;

	switch (your_choice) {

	case 1:
		your_choice_name = "rock";
		break;
	case 2:
		your_choice_name = "paper";
		break;
	case 3:
		your_choice_name = "scissors";
		break;
	case 4:
		your_choice_name = "lizard";
		break;
	default:
		your_choice_name = "spock";
		break;
	}

	//std::cout << your_choice_name;

	//rules for the game
	
	if (your_choice == comp_choice) {


		std::cout << "The match ended in a draw.\n";
	}

	else if ((your_choice == 1) && (comp_choice == 3 || comp_choice == 4)) {
		
		std::cout << "You chose: " << your_choice_name << ". And the computer chooses : " << comp_choice_name << ".\nYOU WIN!!!\n";

	}

	else if ((your_choice == 2) && (comp_choice == 1 || comp_choice == 5)) {

		std::cout << "You chose: " << your_choice_name << ". And the computer chooses : " << comp_choice_name << ".\nYOU WIN!!!\n";

	}

	else if ((your_choice == 3) && (comp_choice == 2 || comp_choice == 4)) {

		std::cout << "You chose: " << your_choice_name << ". And the computer chooses : " << comp_choice_name << ".\nYOU WIN!!!\n";

	}

	else if ((your_choice == 4) && (comp_choice == 2 || comp_choice == 5)) {

		std::cout << "You chose: " << your_choice_name << ". And the computer chooses : " << comp_choice_name << ".\nYOU WIN!!!\n";

	}

	else if ((your_choice == 5) && (comp_choice == 3 || comp_choice == 1)) {

		std::cout << "You chose: " << your_choice_name << ". And the computer chooses : " << comp_choice_name << ".\nYOU WIN!!!\n";

	}

	else {

		std::cout << "You chose: " << your_choice_name << ". And the computer chooses : " << comp_choice_name << ".\nCOMPUTER WINS!!!\n";
	}
	


	






}