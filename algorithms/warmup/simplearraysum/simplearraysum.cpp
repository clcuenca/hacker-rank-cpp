/// Hacker Rank - Warmup
/// Simple Array Sum
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

	uint32_t arrayLength ;
	uint32_t inputCount  ;
	uint32_t sum 		 ;
	uint32_t buffer      ;

	/// -------
	/// Program

	std::cin >> inputCount;

	while(inputCount--) {

		std::cin >> arrayLength;

		sum = 0;

		for(uint32_t index = 0; index < arrayLength; index++) {

			std::cin >> buffer;
			
			sum += buffer;

		}

		std::cout << sum << std::endl;
		
	}

	return SUCCESS;

}