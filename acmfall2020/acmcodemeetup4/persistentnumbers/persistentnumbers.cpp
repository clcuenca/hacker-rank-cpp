/// Hacker Rank - ACM - Fall 2020
/// Persistent Numbers
/// Author: Carlos L. Cuenca
/// Date: 10/03/20

#include<iostream>
#include<string>
#include<vector>
#include<cmath>

/// --------------
/// Driver Program

int main(int argc, char* argv[]) {

	/// -----------------
	/// Program Variables

	uint64_t input       ;
	uint64_t persistence ;
	uint64_t product     ;
	uint64_t buffer      ;

	/// -------
	/// Program

	std::cin >> input;

	persistence = 0;

	while(input > 9) {

		product = 1;

		buffer = input;

		while(buffer) {

			product *= (buffer % 10);

			buffer /= 10;

		}

		input = product;

		persistence++;

	}

	std::cout << persistence << std::endl;

	return 0;

}