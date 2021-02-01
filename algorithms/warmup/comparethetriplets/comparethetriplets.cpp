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

	uint32_t              aliceScore      ;
	uint32_t              bobScore        ;
	uint32_t              inputCount      ;
	std::vector<uint32_t> aliceScores (3) ;
	std::vector<uint32_t> bobScores   (3) ;

	/// -------
	/// Program

	std::cin >> inputCount;

	while(inputCount--) {

		for(uint32_t count = 0; count < 3; count++)
			std::cin >> aliceScores[count];

		for(uint32_t count = 0; count < 3; count++)
			std::cin >> bobScores[count];

		for(uint32_t count = 0; count < 3; count++) {

			if(aliceScores[count] > bobScores[count]) aliceScore++;

			if(bobScores[count] > aliceScores[index]) aliceScores++;

		}

		std::cout << aliceScore << " " << bobScore << std::endl;

	}

	return SUCCESS;

}