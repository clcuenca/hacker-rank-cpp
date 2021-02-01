/// Hacker Rank - Warmup
/// Time Conversion
/// Author: Carlos L. Cuenca
/// Date: 10/07/20

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

	uint32_t    inputCount   ;
	std::string inputTime    ;

	/// -------
	/// Program

	std::cin >> inputCount;

	std::cout << inputCount << std::endl;

	while(inputCount--) {

		std::cin >> inputTime;

		std::string hourString   = "";
		std::string minuteString = "";
		std::string secondString = "";
		std::string timePeriod   = "";

		hourString += inputTime[0];
		hourString += inputTime[1];

		minuteString += inputTime[3];
		minuteString += inputTime[4];

		secondString += inputTime[6];
		secondString += inputTime[7];

		timePeriod += inputTime[8];
		timePeriod += inputTime[9];

		uint32_t hours      = std::stoi(hourString);
		uint32_t minutes    = std::stoi(minuteString);
		uint32_t seconds    = std::stoi(secondString);

		if(timePeriod == "PM") {

			hours = (hours + 12) % 24;

			if(!hours) hours = 12;

		} else if(hours == 12 && timePeriod == "AM") hours = 0;

	    if(hours < 10) hourString = "0" + std::to_string(hours);

	    else hourString = std::to_string(hours);

	    if(minutes < 10) minuteString = "0" + std::to_string(minutes);

	    else minuteString = std::to_string(minutes);

	    if(seconds < 10) secondString = "0" + std::to_string(seconds);

	    else secondString = std::to_string(seconds);

		std::cout << hourString + ":" + minuteString + ":" + secondString << std::endl;

	}

	return SUCCESS;

}