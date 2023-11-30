#include <iostream>

int main() {

	int wEarth, wConverted, planetnum = 0;
	std::string planet;

	std::cout << "Please enter your Earth weight here: ";
	std::cin >> wEarth;
	std::cout << "Please choose your planet of choice: ";
	std::cin >> planetnum;

	// 1: Mercury, 2: Venus, 3: Mars, 4: Jupiter, 5: Saturn, 6: Uranus, 7: Neptune

	/*
	
	if (planetnum == 1) {
		
		planet = "Mercury";
		wConverted = wEarth * 0.38;
		std::cout << "You have chosen the planet " << planet << ". Your weight will be: " << wConverted << ".\n";
	}

	else if (planetnum == 2) {

		planet = "Venus";
		wConverted = wEarth * 0.91;
		std::cout << "You have chosen the planet " << planet << ". Your weight will be: " << wConverted << ".\n";

	}

	else if (planetnum == 3) {

		planet = "Mars";
		wConverted = wEarth * 0.38;
		std::cout << "You have chosen the planet " << planet << ". Your weight will be: " << wConverted << ".\n";

	}

	else if (planetnum == 4) {

		planet = "Jupiter";
		wConverted = wEarth * 2.34;
		std::cout << "You have chosen the planet " << planet << ". Your weight will be: " << wConverted << ".\n";

	}

	else if (planetnum == 5) {

		planet = "Saturn";
		wConverted = wEarth * 1.06;
		std::cout << "You have chosen the planet " << planet << ". Your weight will be: " << wConverted << ".\n";

	}

	else if (planetnum == 6) {

		planet = "Uranus";
		wConverted = wEarth * 0.92;
		std::cout << "You have chosen the planet " << planet << ". Your weight will be: " << wConverted << ".\n";

	}

	else {

		planet = "Neptune";
		wConverted = wEarth * 1.19;
		std::cout << "You have chosen the planet " << planet << ". Your weight will be: " << wConverted << ".\n";

	}
	// one issue is if user enters numbers not within 1 to 7, it will still display neptune
	*/

	// 1: Mercury, 2: Venus, 3: Mars, 4: Jupiter, 5: Saturn, 6: Uranus, 7: Neptune

	switch (planetnum) {
		
		case 1:
			planet = "Mercury";
			wConverted = wEarth * 0.38;
			std::cout << "You have chosen the planet " << planet << ". Your weight will be: " << wConverted << ".\n";
			break;

		case 2:
			planet = "Venus";
			wConverted = wEarth * 0.91;
			std::cout << "You have chosen the planet " << planet << ". Your weight will be: " << wConverted << ".\n";
			break;

		case 3:
			planet = "Mars";
			wConverted = wEarth * 0.38;
			std::cout << "You have chosen the planet " << planet << ". Your weight will be: " << wConverted << ".\n";
			break;

		case 4:
			planet = "Jupiter";
			wConverted = wEarth * 2.34;
			std::cout << "You have chosen the planet " << planet << ". Your weight will be: " << wConverted << ".\n";
			break;

		case 5:
			planet = "Saturn";
			wConverted = wEarth * 1.06;
			std::cout << "You have chosen the planet " << planet << ". Your weight will be: " << wConverted << ".\n";
			break;

		case 6:
			planet = "Uranus";
			wConverted = wEarth * 0.92;
			std::cout << "You have chosen the planet " << planet << ". Your weight will be: " << wConverted << ".\n";
			break;

		case 7:
			planet = "Neptune";
			wConverted = wEarth * 1.19;
			std::cout << "You have chosen the planet " << planet << ". Your weight will be: " << wConverted << ".\n";
			break;

		default:
			std::cout << "You have entered an invalid planet.\n";
			break;

	}

}