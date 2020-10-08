/// Hacker Rank
/// Apple and Orange
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

	int      houseStart    ;
	int      houseEnd      ;
	int      applePoint    ;
	int      orangePoint   ;
	uint32_t appleAmount   ;
	uint32_t orangeAmount  ;

	/// -------
	/// Program

	std::cin >> houseStart  >> houseEnd     ;
	std::cin >> applePoint  >> orangePoint  ;
	std::cin >> appleAmount >> orangeAmount ;

	std::vector<int> apples(appleAmount);
	std::vector<int> oranges(orangeAmount);

	for(uint32_t index = 0; index < apples.size(); index++)
		std::cin >> apples[index];

	for(uint32_t index = 0; index < oranges.size(); index++)
		std::cin >> oranges[index];

	uint32_t appleCount = 0;

	for(uint32_t index = 0; index < apples.size(); index++) {

		int landingPoint = applePoint + apples[index];

		if(landingPoint >= houseStart && landingPoint <= houseEnd)
			appleCount++;

	}

	uint32_t orangeCount = 0;

	for(uint32_t index = 0; index < oranges.size(); index++) {

		int landingPoint = orangePoint + oranges[index];

		if(landingPoint >= houseStart && landingPoint <= houseEnd)
			orangeCount++;

	}

	std::cout << appleCount  << std::endl;
	std::cout << orangeCount << std::endl;

	return 0;

}