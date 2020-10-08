/// Hacker Rank - Warmup
/// Mini Max Sum
/// Author: Carlos L. Cuenca
/// Date: 10/07/20

#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<iomanip>

/// -----------------
/// Program Constants

const int SUCCESS = 0;

/// --------------
/// Driver Program

int main(int argc, char* argv[]) {

	/// -----------------
	/// Program Variables

	uint64_t minimum    ;
	uint64_t maximum    ;
	uint32_t inputCount ;
	uint64_t sum        ;

	/// -------
	/// Program

	std::cin >> inputCount;

	while(inputCount--) {

		std::vector<int> numbers(5);

		for(uint32_t index = 0; index < 5; index++)
			std::cin >> numbers[index];

		minimum = 0;
		maximum = 0;

		for(uint32_t omit = 0; omit < 5; omit++) {

			sum = 0;

			for(uint32_t index = 0; index < 5; index++)
				if(index != omit) sum += numbers[index];
		
			if(!minimum && !maximum) {

				minimum = sum;
				maximum = sum;

			}

			if(sum < minimum) minimum = sum;

			if(sum > maximum) maximum = sum;

		}

		std::cout << minimum << " " << maximum << std::endl;

	}

	return SUCCESS;

}