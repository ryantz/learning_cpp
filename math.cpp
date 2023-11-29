#include<iostream>

int main() {

	int add,mul,div,mod = 0; //initialize

	//addition
	add = 2 + 1;

	//multiplication
	mul = 3 * 3;

	//division
	div = 24 / 4;

	//modulo (remainder after devision)
	mod = 23 % 5;

	std::cout << add << "\n";
	std::cout << mul << "\n";
	std::cout << div << "\n";
	std::cout << mod << "\n";

	//chaining

	std::cout << add << mul << div << mod << "\n";	

	std::cout << "Today i had " << add << " apples, followed by " << mul << div << mod << " Calories\n";
	//take note: adding space in the quotes = spaces after compiling.
	return 0;
}