#include<iostream>

int main() {

	int score = 0;
	char grade;

	std::cout << "Please enter your score: ";
	std::cin >> score;

	switch (score) {
		//when code is run, when input values not covered by case. does not output anything. Is this a drawback of switch cases?
		case 40:
			grade = 'D';
			std::cout << "Your score is: " << score << " and your grade is: " << grade << "\n";
		break;

		case 50:
			grade = 'C';
			std::cout << "Your score is: " << score << " and your grade is: " << grade << "\n";
			break;

		case 60:
			grade = 'B';
			std::cout << "Your score is: " << score << " and your grade is: " << grade << "\n";
			break;

		case 70:
			grade = 'A';
			std::cout << "Your score is: " << score << " and your grade is: " << grade << "\n";
			break;

		default:
			grade = 'F';
			std::cout << "Your score is: " << score << " and your grade is: " << grade << "\n";
			break;

	}


}