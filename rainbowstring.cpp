/// Hacker Rank - ACM - Fall 2020
/// Rainbow String
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

	std::string inputString ;
	uint64_t	count	 	;
	uint64_t    bitMaximum  ;

	/// -------
	/// Program

	std::cin >> inputString;

	count = 0;
	bitMaximum = (1 << inputString.size()) - 1;

	for(uint32_t index = 0; index <= bitMaximum; index++) {

		std::vector<uint32_t> hash('z' - 'a', 0);

		uint32_t current = index;
		uint32_t jindex = 0;

		while(current > 0) {

			if(current & 1) hash[inputString[jindex] - 'a']++;

			if(hash[inputString[jindex] - 'a'] > 1) break;

			jindex++;

			current >>= 1;

		}

		if(!current) count++;

	}

	std::cout << count % 11092019 << std::endl;

	return 0;

}