//Write a program that asks the user some questions and places them into one of the four Houses based on their answers

#include <iostream>

int main() {

	int G, S, R, H, ans1, ans2, ans3, ans4;
	G = S = R = H = ans1 = ans2 = ans3 = ans4 = 0;

	std::cout << "Which animals do you relate to ?\n";
	std::cout << " 1) bird.\n 2) snake.\n 3) raven.\n 4) huff. \n ";
	std::cout << "Please enter your choice here:";
	std::cin >> ans1;

	switch (ans1) {

	case 1:
		G = G + 1;
		std::cout << "\n";
		break;

	case 2:
		S = S + 1;
		std::cout << "\n";
		break;

	case 3:
		R = R + 1;
		std::cout << "\n";
		break;

	case 4:
		H = H + 1;
		std::cout << "\n";
		break;

	default:
		std::cout << "You have not entered an option within the range.\n";
		break;


	}

	//std::cout << G;

	std::cout << "Dawn or Dusk?\n";
	std::cout << " 1) Dawn.\n 2) Dusk.\n ";
	std::cout << "Please enter your choice here:";
	std::cin >> ans2;

	switch (ans2) {

	case 1:
		G = G + 1;
		break;

	case 2:
		H = H + 1;
		break;

	default:
		std::cout << "You have not entered an option within the range.\n";
		break;
	}

	//std::cout << G;
	
	std::cout << "What music pleases you? ?\n";
	std::cout << " 1) calm.\n 2) death metal.\n 3) edm.\n 4) lame music. \n ";
	std::cout << "Please enter your choice here:";
	std::cin >> ans3;

	switch (ans3) {

	case 1:
		G = G + 1;
		break;

	case 2:
		S = S + 1;
		break;

	case 3:
		R = R + 1;
		break;

	case 4:
		H = H + 1;
		break;

	default:
		std::cout << "You have not entered an option within the range.\n";
		break;
	}

	std::cout << "What tempts you? ?\n";
	std::cout << " 1) nothing.\n 2) death.\n 3) birds.\n 4) fairytales. \n ";
	std::cout << "Please enter your choice here:";
	std::cin >> ans4;
	//std::cout << G;
	switch (ans4) {

	case 1:
		G = G + 1;
		break;

	case 2:
		S = S + 1;
		break;

	case 3:
		R = R + 1;
		break;

	case 4:
		H = H + 1;
		break;

	default:
		std::cout << "You have not entered an option within the range.\n";
		break;
	}

	//std::cout << G;

	if ((G > S) && (G > R) && (G > H)) {
		std::cout << "GRYFINDOR!! \n";
	}
	
	else if ((S > G) && (S > R) && (S > H)) {

		std::cout << "SLYTHERIN!! \n";

	}
	else if ((R > G) && (R > S) && (R > H)) {

		std::cout << "RAVENCLAW!! \n";

	}
	else {
		std::cout << "HUFFLEPUFF!! \n";
	}
}

