/// Hacker Rank - Warmup
/// Birthday Cake Candles
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

	uint32_t maximum      ;
	uint32_t maximumCount ;
	uint32_t candles      ;
	uint32_t buffer       ;
	uint32_t inputCount   ;

	/// -------
	/// Program

	std::cin >> inputCount;

	while(inputCount--) {

		std::cin >> candles;

		maximum      = 0 ;
		maximumCount = 0 ;

		for(uint32_t index; index < candles; index++) {

			std::cin >> buffer;

			if(buffer > maximum) {

				maximum = buffer;

				maximumCount = 1;

			} else if(buffer == maximum) maximumCount++;

		}

		std::cout << maximumCount << std::endl;

	}

	return SUCCESS;

}
