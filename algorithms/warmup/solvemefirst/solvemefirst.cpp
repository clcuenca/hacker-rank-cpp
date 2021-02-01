/// Hacker Rank - Warmup
/// Solve Me First
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

	int      numberA    ;
	int      numberB    ;
	uint32_t inputCount ;

	/// -------
	/// Program

	std::cin >> inputCount;

	while(inputCount--) {

		std::cin >> numberA >> numberB;

		std::cout << numberA + numberB << std::endl;

	}

	return SUCCESS;

}