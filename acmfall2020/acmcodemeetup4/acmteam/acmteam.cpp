/// Hacker Rank - ACM - Fall 2020
/// ACM Team
/// Author: Carlos L. Cuenca
/// Date: 10/04/20

#include<iostream>
#include<string>
#include<vector>
#include<cmath>

/// --------------
/// Driver Program

int main(int argc, char* argv[]) {

	/// -----------------
	/// Program Variables

	uint32_t attendees     ;
	uint32_t topics        ;
	uint32_t maximumTopics ;
	uint32_t permutations  ;
	uint32_t currentTopics ;

	/// -------
	/// Program

	std::cin >> attendees >> topics;

	std::vector<std::string> attendeeTopics(attendees, "");

	maximumTopics = 0;

	for(uint32_t index = 0; index < attendees; index++)
		std::cin >> attendeeTopics[index];

	for(uint32_t index = 0; index < attendeeTopics.size(); index++)
		for(uint32_t jindex = index + 1; jindex < attendeeTopics.size(); jindex++) {

			currentTopics = 0;

			for(uint32_t kindex = 0; kindex < topics; kindex++) {

				if(attendeeTopics[index][kindex] == '1' || attendeeTopics[jindex][kindex] == '1') {

					currentTopics++;

				}

			}

			if(currentTopics > maximumTopics) {

				maximumTopics = currentTopics;

				permutations = 1;

			} else if (currentTopics == maximumTopics) {

				permutations++;

			}

		}

	std::cout << maximumTopics << std::endl;
	std::cout << permutations  << std::endl;

	return 0;

}