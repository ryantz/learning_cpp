//Write a program to find the sum of even numbers and the product of odd numbers in a vector

#include <iostream>
#include <vector>

int main() {

	int totaleven = 0;
	int prododd = 1;
	
	std::vector<int> nums = { 2, 4, 3, 6, 1, 9 };
	//creating empty vector to place even and odd numbers in
	std::vector<int> even(1);
	std::vector<int> odd(1);
	
	for (int i = 0; i < nums.size(); i++) {
		
		if (nums[i] % 2 == 0) {

			//end product  {0,2,4,6}
			even.push_back(nums[i]);

		}

		else {

			//end product {0,3,1,9}
			odd.push_back(nums[i]);
		}

	}


	int e = even.size();
	int o = odd.size();

	

	for (int j = 0; j < e; j++) {
		
		//std::cout << even[j] << " " ;
		totaleven = totaleven + even[j];
		

	}
	
	//std::cout << totaleven;
	
	std::cout << "\n";

	for (int k = 1; k < o; k++) {

		//std::cout << odd[k] << " ";
		prododd = prododd * odd[k];
	}
	
	//std::cout << prododd;
	std::cout << "Sum of even numbers is: " << totaleven << ".\n" << "Product of odd numbers is: " << prododd << ".\n";
	
}


