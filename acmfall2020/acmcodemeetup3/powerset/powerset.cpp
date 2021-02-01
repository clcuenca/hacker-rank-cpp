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

	std::string initial;
	uint32_t maximumBits;
	std::vector<std::vector<char>> sets;

	/// -------
	/// Program

	std::cin >> initial;

	maximumBits = (1 << initial.size()) - 1;

	for(uint32_t index = 0; index <= maximumBits; index++) {

		std::vector<char> set;

		uint32_t current = index;
		uint32_t jindex  = 0;

		while(current > 0) {

			if(current & 1) set.push_back(initial[jindex]);

			jindex++;

			current >>= 1;

		}

		sets.push_back(set);

	}

	std::cout << "{";

	for(uint32_t index = 0; index < sets.size(); index++) {

		std::cout << "{";

		for(uint32_t jindex = 0; jindex < sets[index].size(); jindex++)
			std::cout << sets[index][jindex];

		std::cout << "}";

		if(index < sets.size() - 1) std::cout << ", ";

	}

	std::cout << "}" << std::endl;



	return SUCCESS;

}
