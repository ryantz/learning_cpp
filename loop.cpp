#include <iostream>

int main() {
	//printing out an index and squares of the index until 9
	int i, square = 0;
	
	/*
	while (i <= 9) {

		square = i * i;
		std::cout << i << "   " << square << "\n";
		i++;

	}
	*/

	//using for loops
	for (i = 0; i < 10; i++) {

		square = i * i;
		std::cout << i << "   " << square << "\n";

	}

}