/// Hacker Rank - Implementation
/// Grading Students
/// Author: Carlos L. Cuenca
/// Date: 10/09/20

#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>

/// -----------------
/// Program Constants

const int SUCCESS = 0;

/// --------------
/// Driver Program

int main(int argc, char* argv[]) {

	/// -----------------
	/// Program Variables

	uint32_t students     ;
	uint32_t grade        ;
	uint32_t one          ;
	uint32_t tenth        ;
	uint32_t nextMultiple ;
	uint32_t inputCount   ;

	/// -------
	/// Program

	std::cin >> inputCount;

	while(inputCount--) {

		std::cin >> students;

		for(uint32_t number = 0; number < students; number++) {

			std::cin >> grade;

			tenth = (grade / 10);
			one   = (grade % 10);

			nextMultiple = tenth*10 + 5;

			if(one >= 5) nextMultiple += 5;

			if((grade >= 38) && ((nextMultiple - grade) < 3)) grade = nextMultiple;

			std::cout << grade << std::endl;

		}

	}

	return SUCCESS;

}