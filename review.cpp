#include<iostream>

int main() {
	 
	//weight on mars is 1/3 of earth
	int weightE, weightM = 0;

	

	std::cout << "Please enter your weight: \n";
	std::cin >> weightE;

	weightM = weightE / 3;

	std::cout << "Your weight on Mars would be: " << weightM << ".\n";

	return 0;
}