#include <iostream>

int main() {

	//&& operator: left and right side of operators has to be the same
	int mary, jane, peter = 0;
	

	std::cout << "Please enter Mary's age:\n";
	std::cin >> mary;
	std::cout << "Please enter Jane's age:\n";
	std::cin >> jane;
	std::cout << "Please enter Peter's age:\n";
	std::cin >> peter;

	if (mary == jane && jane == peter) {

		std::cout << "Everyone is the same age!\n";

	}

	else if (mary == jane || mary == peter) {
		
		std::cout << "mary is the same age as one of you.\n";
	}

	else if (mary != peter) {

		std::cout << "mary is not the same age as peter. \n";
	}

}