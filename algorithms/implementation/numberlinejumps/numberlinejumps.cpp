/// Hacker Rank
/// Number Line Jumps
/// Author: Carlos L. Cuenca
/// Date: 10/05/20

#include<iostream>
#include<string>
#include<vector>
#include<cmath>

/// -----------------
/// Program Constants

const std::string YES          = "YES"    ;
const std::string NO           = "NO"     ;
const uint32_t    DISTANCE_MAX = 50000000 ;

/// --------------
/// Driver Program

int main(int argc, char* argv[]) {

	/// -----------------
	/// Program Variables

	uint32_t    position1        ;
	uint32_t    position2        ;
	uint32_t    velocity1        ;
	uint32_t    velocity2        ;
	std::string resultString = NO;

	/// -------
	/// Program

	std::cin >> position1 >> velocity1 >> position2 >> velocity2;

	while(position1 <= DISTANCE_MAX && position2 <= DISTANCE_MAX) {

		if(position1 == position2) {

			resultString = YES;

			break;

		}

		position1 += velocity1;
		position2 += velocity2;

	}

	std::cout << resultString << std::endl;

	return 0;

}
