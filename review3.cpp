#include <iostream>

/*
leap year :

year is 4 digits

1) year divisible by 4. 

2) year divisible 100 and not 400 = not leap 

3) year divisible by 400 = leap
*/

int main() {

	int year, remainder_4, remainder_100, remainder_400 = 0;
	

	std::cout << "Please input a year: ";
	std::cin >> year;
	
	//perfectly divisible means all = 0
	year % 4 == remainder_4;
	year % 100 == remainder_100;
	year % 400 == remainder_400;

	//ensuring year is 4 digits
	if (year < 1000 || year > 9999) {
		
		std::cout << "Please enter a valid year.\n ";
		return 0;
	}

	else if ((remainder_4 == 0) || ((remainder_100 != 0) && (remainder_400 == 0))) {

		std::cout << "The year " << year << " is a leap year. \n";

	}

	else {

		std::cout << "The year " << year << " is NOT a leap year. \n";

	}


}