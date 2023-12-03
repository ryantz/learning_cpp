#include <iostream>
#include <cmath>

int main() {

	int a, b, c = 0;
	double sol1, sol2;
	
	std::cout << "Please input the value for b: \n";
	std::cin >> b;
	std::cout << "Please input the value for a: \n";
	std::cin >> a;
	std::cout << "Please input the value for c: \n";
	std::cin >> c;

	sol1 = ((-b) + std::sqrt((b * b) - (4 * a * c))) / (2 * a);
	sol2 = ((-b) - std::sqrt((b * b) - (4 * a * c))) / (2 * a);

	std::cout << "Positive solution: " << sol1 << "\n" << "Negative solution: " << sol2 << "\n";
}