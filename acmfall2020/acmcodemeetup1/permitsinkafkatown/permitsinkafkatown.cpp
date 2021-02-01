/// Hacker Rank - ACM Coding Meetup 1 - Fall 2020
/// Permits in Kafkatown
/// Author: Carlos L. Cuenca
/// Date: 10/10/20

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

	uint32_t signatures  ;
	uint32_t linePass    ;
	uint32_t inputCount  ;
	uint32_t currentDesk ;
	uint32_t lastDesk    ;

	/// -------
	/// Program

	std::cin >> inputCount;

	while(inputCount--) {

		std::cin >> signatures;

		currentDesk = 0;
		lastDesk    = 0;
		linePass    = 1;

		for(uint32_t index = 0; index < signatures; index++) {

			std::cin >> currentDesk;

			if(lastDesk && (currentDesk < lastDesk)) linePass++;

			lastDesk = currentDesk;

		}

		std::cout << linePass << std::endl;

	}

	return SUCCESS;

}