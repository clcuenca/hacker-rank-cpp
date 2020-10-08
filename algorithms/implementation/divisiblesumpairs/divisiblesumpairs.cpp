/// Hacker Rank - ACM - Fall 2020
/// Divisible Sum Pairs
/// Author: Carlos L. Cuenca
/// Date: 10/07/20

#include<iostream>
#include<string>
#include<vector>
#include<cmath>

/// -----------------
/// Program Constants

const int SUCCESS = 0;

/// --------------
/// Driver Program

int main(int argc, char* argv[]) {

	/// -----------------
	/// Program Variables

	uint32_t numbers    ;
	uint32_t divisor    ;
	uint32_t inputCount ;
	uint32_t pairs 	    ;

	/// -------
	/// Program

	std::cin >> inputCount;

	while(inputCount--) {

		std::cin >> numbers >> divisor;

		std::vector<uint32_t> array(numbers);

		for(uint32_t index = 0; index < array.size(); index++)
			std::cin >> array[index];

		pairs = 0;

		for(uint32_t index = 0; index < array.size() - 1; index++) 
			for(uint32_t jindex = index + 1; jindex < array.size(); jindex++)  {

            uint32_t sum = array[index] + array[jindex];

            if(!(sum % divisor)) pairs++;

   		}

		std::cout << pairs << std::endl;

	}

	return SUCCESS;

}