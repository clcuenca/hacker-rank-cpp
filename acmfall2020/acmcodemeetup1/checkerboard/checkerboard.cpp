/// Hacker Rank - ACM Coding Meetup 1 - Fall 2020
/// Checkerboard
/// Author: Carlos L. Cuenca
/// Date: 10/10/20

#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<sstream>

/// -----------------
/// Program Constants

const int SUCCESS = 0   ;
const char BLACK  = 'B' ;
const char WHITE  = 'W' ;

/// --------------
/// Driver Program

int main(int argc, char* argv[]) {

	/// -----------------
	/// Program Variables

	uint32_t    rows       ;
	uint32_t    columns    ;
	uint32_t    vertical   ;
	uint32_t    horizontal ;
	uint32_t    inputCount ;
	std::string buffer     ;
	std::string inverse    ;

	std::cin >> inputCount;

	while(inputCount--) {

		std::cin >> rows >> columns >> vertical >> horizontal;

		std::vector<uint32_t> heights(vertical);
		std::vector<uint32_t> widths(horizontal);

		for(uint32_t index = 0; index < heights.size(); index++)
			std::cin >> heights[index];

		for(uint32_t index = 0; index < widths.size(); index++)
			std::cin >> widths[index];

		buffer = "";

		for(uint32_t index = 0; index < widths.size(); index++) {

			uint32_t count = widths[index];

			while(count--) { 

				if(!(index % 2)) buffer += BLACK; else buffer += WHITE;

				if(!(index % 2)) inverse += WHITE; else inverse += BLACK;

			}


		}

		std::stringstream board;

		for(uint32_t index = 0; index < heights.size(); index++) {

			uint32_t count = heights[index];

			while(count--) {

				if(!(index % 2)) board << buffer << '\n';

				else board << inverse << '\n';

			}

		}

		std::cout << board.str() << std::endl;

	}

	return SUCCESS;

}