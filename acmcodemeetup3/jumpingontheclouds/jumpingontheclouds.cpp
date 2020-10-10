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

	uint32_t minimumJumps ;
	uint32_t cloudCount   ;
	uint32_t currentCloud ;

	/// -------
	/// Program

	std::cin >> cloudCount;

	std::vector<uint32_t> clouds(cloudCount);

	for(uint32_t index = 0; index < clouds.size(); index++)
		std::cin >> clouds[index];

	currentCloud = 0;

	while(currentCloud < clouds.size() - 1) {

		if(!clouds[currentCloud + 2]) { 

			currentCloud += 2;
			minimumJumps++;

		} else  { 

			currentCloud += 1;
			minimumJumps++;

		}

	}

	std::cout << minimumJumps << std::endl;



	return SUCCESS;

}