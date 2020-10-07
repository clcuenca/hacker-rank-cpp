/// Hacker Rank
/// Trouble at ACM
/// Author: Carlos L. Cuenca
/// Date: 10/05/20

#include<iostream>
#include<string>
#include<vector>
#include<cmath>

/// -----------------
/// Program Constants

const std::string GOOD_JOB = "good job";

/// --------------
/// Driver Program

int main(int argc, char* argv[]) {

	/// -----------------
	/// Program Variables

	int 			 papersFound ;
	int 			 currentId   ;
	std::vector<int> missingIds  ;

	/// -------
	/// Program

	std::cin >> papersFound;

	int id = 1;

	while(papersFound--) {

		std::cin >> currentId;

		while(id < currentId) {

			missingIds.push_back(id);

			id++;

		}

		id++;

	}

	if(!missingIds.size()) std::cout << GOOD_JOB << std::endl;

	else for(uint32_t index = 0; index < missingIds.size(); index++)
		std::cout << missingIds[index] << std::endl;


	return 0;

}