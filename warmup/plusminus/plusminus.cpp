/// Hacker Rank - Warmup
/// Plus Minus
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

	uint32_t inputCount    ;
	uint32_t count         ;
	uint32_t positiveCount ;
	uint32_t negativeCount ;
	uint32_t zeroCount     ;
	int      buffer        ;

	/// -------
	/// Program

	std::cin >> inputCount;

	while(inputCount) {

		std::cin >> count;

		negativeCount = 0;
		positiveCount = 0;
		zeroCount     = 0;

		for(uint32_t index = 0; index < count; index++) {

			std::cin >> buffer;

			if(buffer < 0) negativeCount++;

			if(buffer > 0) positiveCount++;

			if(!buffer) zeroCount++;

		}

		std::cout << std::fixed << std::setprecision(6) << (float) positiveCount / count << std::endl;
		std::cout << std::fixed << std::setprecision(6) << (float) negativeCount / count << std::endl;
		std::cout << std::fixed << std::setprecision(6) << (float) zeroCount     / count << std::endl;

	}

	return SUCCESS;

}