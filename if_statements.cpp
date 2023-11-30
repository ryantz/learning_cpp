#include <iostream>

int main() {

	int speed = 0, speedlimit = 70;


	std::cout << "Please input your speed:\n";
	std::cin >> speed;

	if (speed > speedlimit) {

		std::cout << "Speeding.\n";
	}

	else if (speed < (speedlimit - 20)) {
		std::cout << "Road Hogging";
	}

	else {
		std::cout << "Within with speed limit.";
	}

}