/// Hacker Rank
/// Electronics Shop
/// Author: Carlos L. Cuenca
/// Date: 10/12/20

#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>

/// -----------------
/// Program Constants

const long long SUCCESS = 0;

/// --------------
/// Driver Program

int main(int argc, char* argv[]) {

    /// -----------------
    /// Program Variables

    int      budget        ;
    int      maximum       ;
    int      keyboardCount ;
    int      driveCount    ;
    uint32_t inputCount    ;

    /// -------
    /// Program

    std::cin >> inputCount;

    while(inputCount--) {

        std::cin >> budget >> keyboardCount >> driveCount;

        std::vector<int> keyboards(keyboardCount);
        std::vector<int> drives(driveCount);

        for(int index = 0; index < keyboardCount; index++)
            std::cin >> keyboards[index];

        for(int index = 0; index < driveCount; index++)
            std::cin >> drives[index];

        maximum = -1;

        for(int index = 0; index < keyboardCount; index++)
            for(int jindex = 0; jindex < driveCount; jindex++) {

                int sum = keyboards[index] + drives[jindex];

                if(sum > maximum && sum <= budget) maximum = sum;

            }

        std::cout << maximum << std::endl;

    }

    return SUCCESS;

}