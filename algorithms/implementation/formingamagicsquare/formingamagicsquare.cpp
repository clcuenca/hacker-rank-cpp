/// Hacker Rank
/// Forming a Magic Square
/// Author: Carlos L. Cuenca
/// Date: 10/05/20

#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<climits>
#include<algorithm>

/// -----------------
/// Program Constants

const int SUCCESS = 0;

/// --------------
/// Driver Program

int main(int argc, char* argv[]) {

    /// -----------------
    /// Program Variables

	// This will always be the magic constant of an n*n magic square
    int magicConstant = (3*(std::pow(3, 2) + 1)/2);
    int integers ;

    // The given matrix
    std::vector<std::vector<int>> matrix(3, std::vector<int>(3, 0));
    std::vector<std::vector<int>> current(3, std::vector<int>(3, 0));

    for(int index = 0; index < 3; index++) 
        for(int jindex = 0; jindex < 3; jindex++)
            std::cin >> matrix[index][jindex];

    // Create an array with numbers 1-9
    // Since magic squares contain one of each digit
    std::vector<int> array(9);

    for(int number = 1; number <= 9; number++)
    	array[number - 1] = number;

    do {

    	for(int index = 0; index < 3; index++)
    		for(int jindex = 0; jindex < 3; jindex++)
    			current[index][jindex] = array[3 * index + jindex];

        int sum = 0;
        bool isMagicSquare = true;

        /// Rows
        for(int index = 0; index < 3 && isMagicSquare; index++) {

            sum = 0;

            for(int jindex = 0; jindex < 3; jindex++) {

                sum += current[index][jindex];
            
            }

            isMagicSquare = sum == magicConstant;

        }

        /// Columns
        for(int index = 0; index < 3 && isMagicSquare; index++) {

            sum = 0;

            for(int jindex = 0; jindex < 3; jindex++) {

                sum += current[jindex][index];

            }

            isMagicSquare = sum == magicConstant;

        }

        sum = 0;

        /// Left to Right Diagonal
        for(int index = 0; index < 3 && isMagicSquare; index++)
			sum += current[index][index];

        isMagicSquare = sum == magicConstant;

        sum = 0;

        // Right to left diagonal
        for(int index = 2; index >= 0 && isMagicSquare; index--)
			sum += current[index][2 - index];
            

        isMagicSquare = sum == magicConstant;

        int cost = 0;
        int minimumCost = INT_MAX;

        if(isMagicSquare) {

        	for(int index = 0; index < 3; index++)
        		for(int jindex = 0; jindex < 3; jindex++) {

        			cost += std::abs(current[index][jindex] - matrix[index][jindex]);

        		}


        	minimumCost = std::min(minimumCost, cost);

        }

        // Keep looping until we've gone through all permutations
    } while(std::next_permutation(array.begin(), array.end()));


    std::cout << minimumCost << std::endl;

    return SUCCESS;

}
