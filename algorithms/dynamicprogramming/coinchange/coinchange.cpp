/// Hacker Rank - Algorithms - Dynamic Programming
/// Coin Change
/// Author: Carlos L. Cuenca
/// Date: 10/24/2020

#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<cinttypes>
#include<string>

/// -----------------
/// Program Constants

const int SUCCESS = 0;

/// -----------------------
/// Function Implementation

long getWays(int n, std::vector<long> coins) {

    coins.push_back(0);
    std::sort(coins.begin(), coins.end());

    std::vector<std::vector<long>> matrix(coins.size(), std::vector<long>(n + 1, 0));

    for(int row = 0; row < matrix.size(); row++)
        for(int column = 0; column < matrix[row].size(); column++) {

            if(!column) matrix[row][column] = 1;

            else if(row - 1 >= 0) {

                matrix[row][column] = matrix[row - 1][column];

                if(column - coins[row] >= 0) {
                    
                    matrix[row][column] += matrix[row][column - coins[row]];

                }

            }

        }

    return matrix[coins.size() - 1][n];

}

/// --------------
/// Driver Program

int main(int argc, char* argv[]) {

    /// -----------------
    /// Program Variables

    uint32_t inputCount ;
    uint64_t number     ;
    uint64_t coinCount  ; 

    /// -------
    /// Program

    std::cin >> inputCount;

    while(inputCount--) {

        std::cin >> number >> coinCount;

        std::vector<long> coins(coinCount, 0);

        for(uint32_t index = 0; index < coinCount; index++)
            std::cin >> coins[index];

        std::cout << getWays(number, coins) << std::endl;

    }

    return SUCCESS;

}
