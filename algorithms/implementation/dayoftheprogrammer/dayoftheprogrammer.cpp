/// Day of the Programmer
/// Author: Carlos L. Cuenca
/// Date: 10/07/20

#include<iostream>
#include<string>
#include<vector>
#include<cmath>

/// -----------------
/// Program Constants

const int SUCCESS = 0   ;
const int DAYS    = 243 ;

/// --------------
/// Driver Program

int main(int argc, char* argv[]) {

	/// -----------------
	/// Program Variables

	uint32_t    inputCount ;
	uint32_t    year       ;
	std::string date       ;
	uint32_t    days       ;

	/// -------
	/// Program

	std::cin >> inputCount;

	while(inputCount--) {

		std::cin >> year;

		days = 13;

		// Julian Calendar
		if(year < 1918) {

			if(!(year % 4)) days--;

		} else if(year >= 1919) {

			if(!(year % 4) && (year % 100) || !(year % 400)) days--;

		} else {

			days = 25;

			if(!(year % 4) && (year % 100)) days--;

		}

		date = std::to_string(days) + "." + "09" + "." + std::to_string(year);

		std::cout << date << std::endl;

	}


	return SUCCESS;

}