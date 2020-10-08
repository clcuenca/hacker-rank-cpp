/// Hacker Rank - Warmup
/// Diagonal Difference
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

	uint32_t inputCount        ;
	uint32_t n  	           ;
	int      firstDiagonalSum  ;
	int      secondDiagonalSum ;

	/// -------------
	/// Program Start

	std::cin >> inputCount;

	while(inputCount--) {

		std::cin >> n;

		std::vector<std::vector<int>> matrix(n, std::vector<int>(n, 0));

		for(uint32_t index = 0; index < n; index++)
			for(uint32_t jindex = 0; jindex < n; jindex++)
				std::cin >> matrix[index][jindex];

		firstDiagonalSum  = 0;
		secondDiagonalSum = 0;

		// First Diagonal
		for(uint32_t index = 0; index < n; index++)
			firstDiagonalSum += matrix[index][index];

		for(uint32_t index = 0; index < n; index++)
			secondDiagonalSum += matrix[n - index - 1][index];

		std::cout << std::abs(firstDiagonalSum - secondDiagonalSum) << std::endl;

	}

	return SUCCESS;

}