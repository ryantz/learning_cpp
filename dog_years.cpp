// first 2 dog years = 21 years, next dog years = 4 years each

#include <iostream>

int main() {

	int dyears = 0; 
	int	years = 21;

	std::cout << "Please enter your dog's age in human years: \n";
	std::cin >> dyears;

	if (dyears <= 2) {
		
		std::cout << "Your dog is minimumly 21 years old in human years.\n";

	}

	else {

		years = years + (dyears * 4);
		std::cout << "Your dog is " << years << " years old in human years.";

	}

}