/// Hacker Rank
/// Number Line Jumps
/// Author: Carlos L. Cuenca
/// Date: 10/05/20

#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>

/// --------------
/// Driver Program

int main(int argc, char* argv[]) {

	/// -----------------
	/// Program Variables

	uint32_t elementsA     ;
	uint32_t elementsB     ;
	uint32_t between   = 0 ;

	/// -------
	/// Program

	std::cin >> elementsA >> elementsB;

	std::vector<uint32_t> arrayA(elementsA);
	std::vector<uint32_t> arrayB(elementsB);

	for(uint32_t index = 0; index < arrayA.size(); index++)
		std::cin >> arrayA[index];

	for(uint32_t index = 0; index < arrayB.size(); index++)
		std::cin >> arrayB[index];

	std::sort(arrayA.begin(), arrayA.end());
	std::sort(arrayB.begin(), arrayB.end());

	uint32_t maximum = arrayB[arrayB.size() - 1];

	for(uint32_t number = 1; number <= maximum; number++) {

		bool areFactors = true;
		
		for(uint32_t index = 0; index < arrayA.size(); index++) {

			areFactors &= !(number % arrayA[index]);

			if(!areFactors) break;

		}

		bool isFactor = true;

		for(uint32_t index = 0; index < arrayB.size(); index++) {

			isFactor &= !(arrayB[index] % number);

			if(!isFactor) break;

		}

		if(areFactors && isFactor) between++;

	}

	std::cout << between << std::endl;

	return 0;

}