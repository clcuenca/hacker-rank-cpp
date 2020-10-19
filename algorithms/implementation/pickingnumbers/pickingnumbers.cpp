/// Hacker Rank
/// Picking numbers
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

    int size            ;
    int longestSubArray ;

    std::cin >> size;

    std::vector<int> array(size);

    for(int index = 0; index < size; index++)
        std::cin >> array[index];

    longestSubArray = 0;

    //  We loop through all t combinations
    for(int t = 2; t <= array.size(); t++) {
        
        std::vector<int> combinations(t + 2);

        for(int j = 0; j < t; j++)
            combinations[j] = j;

        combinations[t] = array.size();
        combinations[t + 1] = 0;

        int j = 0;

        while(j < t) {

        int maxDifference = 0;

        for(int index = 0; index < t - 1; index++){

            int difference = std::abs(array[combinations[index]] - 
                array[combinations[index + 1]]);

            if(difference > maxDifference) maxDifference = difference;

        }

        if(maxDifference <= 1 && (t > longestSubArray)) longestSubArray = t;

            j = 0;

            while(combinations[j] + 1 == combinations[j + 1]) {

                combinations[j] = j;

                j++;

            }

            combinations[j]++;

        }

    }

    std::cout << longestSubArray << std::endl;

    return SUCCESS;

}
