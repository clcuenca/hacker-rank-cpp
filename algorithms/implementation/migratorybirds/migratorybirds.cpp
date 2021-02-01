/// MigratoryBirds
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

	uint32_t inputCount ;
	uint32_t birdCount  ;
	uint32_t buffer	    ;
	uint32_t maximum    ;
	uint32_t type       ;

	/// -------
	/// Program

	std::cin >> inputCount;

	while(inputCount--) {

		std::cin >> birdCount;

		std::vector<uint32_t> birds(birdCount);

		for(uint32_t index = 0; index < birds.size(); index++) {

			std::cin >> buffer;

			birds[buffer - 1]++;

		}

		maximum = 0;

		for(uint32_t index = 0; index < birds.size(); index++) {

			if(birds[index] > maximum) {

				maximum = birds[index];

				type = index + 1;

			}

		}

		std::cout << type << std::endl;


	}



	/// -------
	/// Program

	return SUCCESS;

}