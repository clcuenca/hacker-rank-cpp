/// Hacker Rank - ACM - Fall 2020
/// Rainbow String
/// Author: Carlos L. Cuenca
/// Date: 10/03/20

#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<unordered_map>

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

	count = 1;

		//  We loop through all t combinations
	for(int t = 1; t <= inputString.size(); t++) {
		
		std::vector<int> combinations(t + 2);

		for(int j = 0; j < t; j++)
			combinations[j] = j;

		combinations[t] = inputString.size();
		combinations[t + 1] = 0;

		int j = 0;

		while(j < t) {

			std::vector<int> hash('z' - 'a', 0);
			bool invalid = false;

			for(int index = 0; index < t; index++) {

				int jindex = inputString[combinations[index]] - 'a';

				hash[jindex]++;

				if(hash[jindex] > 1) {

					invalid = true;

					break;

				}

			}

			if(!invalid) count++;

			j = 0;

			while(combinations[j] + 1 == combinations[j + 1]) {

				combinations[j] = j;

				j++;

			}

			combinations[j]++;

		}

	}

	std::cout << count % 11092019 << std::endl;

	return 0;

}