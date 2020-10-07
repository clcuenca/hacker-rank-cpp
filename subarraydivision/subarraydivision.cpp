/// Hacker Rank - ACM - Fall 2020
/// From A to B
/// Author: Carlos L. Cuenca
/// Date: 10/04/20

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

	uint32_t inputCount   ;
	uint32_t birthday     ;
	uint32_t birthmonth   ;
	uint32_t squareNumber ;
	uint32_t subsets 	  ;

	/// -------
	/// Program

	std::cin >> inputCount;

	while(inputCount--) {

		std::cin >> squareNumber;

		std::vector<uint32_t> squares(squareNumber);

		for(uint32_t index = 0; index < squares.size(); index++)
			std::cin >> squares[index];

		std::cin >> birthday >> birthmonth;

		subsets = 0;

		for(uint32_t index = 0; index < squares.size() - (birthmonth - 1); index++) {

			uint32_t sum     = 0     ;
			uint32_t current = index ;

			while(current < index + birthmonth) {

				sum += squares[current];

				current++;

			}

			if(sum == birthday) subsets++;

		}

		std::cout << subsets << std::endl;

	}

	return SUCCESS;

}