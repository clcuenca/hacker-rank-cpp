/// Hacker Rank - Warmup
/// Compare the Triplets
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

	uint32_t inputCount  ;
	uint32_t arrayLength ;

	/// -------
	/// Program

	std::cin >> inputCount;

	while(inputCount--) {

		long sum = 0;

		std::cin >> arrayLength;

		for(uint32_t index = 0; index < arrayLength; index++) {

			long buffer;

			std::cin >> buffer;

			sum += buffer;

		}

		std::cout << sum << std::endl;

	}



	return SUCCESS;

}