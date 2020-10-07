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

	uint32_t numberA    ;
	uint32_t numberB    ;
	uint32_t operations ;

	/// -------
	/// Program

	std::cin >> numberA >> numberB;

	operations = 0;

	while(numberA != numberB) {

		while(numberA % 2) {

			numberA++;

			operations++;

		}

		while(numberA < numberB) {

			numberA++;

			operations++;

		}

		while(!(numberA % 2) && numberA > numberB) {

			numberA /= 2;

			operations++;

		}

	}

	std::cout << operations << std::endl;


	return SUCCESS;

}