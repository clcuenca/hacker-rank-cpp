/// Hacker Rank
/// Cats and a Mouse
/// Author: Carlos L. Cuenca
/// Date: 10/05/20

#include<iostream>
#include<string>
#include<vector>
#include<cmath>

/// -----------------
/// Program Constants

const std::string CAT_A   = "Cat A"   ;
const std::string CAT_B   = "Cat B"   ;
const std::string MOUSE_C = "Mouse C" ;

/// --------------
/// Driver Program

int main(int argc, char* argv[]) {

	/// -----------------
	/// Program Variables

	int         catPosition1  ;
	int         catPosition2  ;
	int         mousePosition ;
	int         inputCount    ;
	std::string resultString  ;

	/// -------
	/// Program

	std::cin >> inputCount;

	while(inputCount--) {

		std::cin >> catPosition1 >> catPosition2 >> mousePosition;

		int delta1 = std::abs(catPosition1 - mousePosition);
		int delta2 = std::abs(catPosition2 - mousePosition);

		if(delta1 == delta2) resultString = MOUSE_C;

		else if(delta1 < delta2) resultString = CAT_A;

		else resultString = CAT_B;

		std::cout << resultString << std::endl;

	}

	return 0;

}