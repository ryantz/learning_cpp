#include <iostream>
#include <vector>

int main() {

	//create vector, initialize vector, add up values in vector, display. 
	double total = 0;
	std::vector <double> price = { 1.00, 15.39, 40.55, 20.10 };

	//adding to the vector
	price.push_back(22.2);
	price.push_back(90.0);
	//removing from the vector

	for (int i = 0; i < 6; i++) {

		std::cout << price[i] << " ";
		total = total + price[i];
		

	}
	
	std::cout << "\n" << total;
	

}


