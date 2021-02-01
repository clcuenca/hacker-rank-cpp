/// Hacker Rank
/// Breaking Best and Worst Records
/// Author: Carlos L. Cuenca
/// Date: 10/05/20

#include<iostream>
#include<string>
#include<vector>
#include<cmath>

/// --------------
/// Driver Program

int main(int argc, char*argv[]) {

	/// -----------------
	/// Program Variables

	uint32_t games         ;
	uint32_t minimum       ;
	uint32_t maximum       ;
	uint32_t minimumBroken ;
	uint32_t maximumBroken ;

	/// -------
	/// Program

	std::cin >> games;

	std::vector<uint32_t> scores(games);

	for(uint32_t index = 0; index < scores.size(); index++)
		std::cin >> scores[index];

	// Seed the minimum & maximum
	minimum = scores[0];
	maximum = scores[0];

	minimumBroken = 0;
	maximumBroken = 0;

	for(uint32_t index = 1; index < scores.size(); index++) {

		if(scores[index] < minimum) {

			minimum = scores[index];
			
			minimumBroken++;

		}

		if(score[index] > maximum) {

			maximum = scores[index];

			maximumBroken++;

		}

	}

	std::cout << maximumBroken << " " << minimumBroken << std::endl;

	return 0;

}
