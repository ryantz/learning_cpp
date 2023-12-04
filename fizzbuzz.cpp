// print 1 to 100
// mul of 3, fizz
// mul of 5, buzz
// mul of 3,5, fizzbuzz
#include <iostream>

int main() {

	int nums = 0;
	
	//printing 1 to 100
	for (int i = 1; i <= 100; i++) {

		nums = i;
		//rules
		if (((nums % 3) == 0) && ((nums % 5) != 0)) {

			std::cout << "fizz\n";

		}

		else if (((nums % 5) == 0) && ((nums % 3) != 0)) {

			std::cout << "buzz\n";

		}

		else if (((nums % 3) == 0) && ((nums % 5) == 0)) {

			std::cout << "fizzbuzz\n";

		}

		std::cout << nums << "\n";

	}
	

}