// that prompts the user for the amount of each foreign currency
//our program should then convert the amount entered by the user and display the total amount of USD

#include <iostream>

int main() {

	double cp, br, ps, usd;
	cp = br = ps = usd = 0;

	std::cout << "Enter number of Colombian Pesos: ";
	std::cin >> cp;
	std::cout << "Enter number of Brazilian Reais: ";
	std::cin >> br;
	std::cout << "Enter number of Peruvian Soles: ";
	std::cin >> ps;

	usd = (cp * 0.00025) + (br * 0.2) + (ps * 0.27);

	std::cout << "US Dollars: " << usd ;

}