/// Hacker Rank - Warmup
/// Staircase
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

	uint32_t count      ;
	uint32_t inputCount ;

	/// -------
	/// Program

	std::cin >> inputCount;

		while(inputCount--) {

		std::cin >> count;

		for(uint32_t index = 1; index <= count; index++) {

			for(uint32_t jindex = 0; jindex < count - index; jindex++)
				std::cout << " ";

			for(uint32_t jindex = 0; jindex < index; jindex++)
				std::cout << "#";

			std::cout << std::endl;

		}
		
	}

	return SUCCESS;

}