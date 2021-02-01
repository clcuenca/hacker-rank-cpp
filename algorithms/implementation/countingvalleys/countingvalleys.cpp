/// Hacker Rank
/// Counting Valleys
/// Author: Carlos L. Cuenca
/// Date: 10/10/20

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

    int steps     ;
    int level     ;
    int traversed ;
    int last      ;

    /// -------
    /// Program

    std::cin >> steps;

    std::vector<char> path(steps);

    for(int index = 0; index < steps; index++)
        std::cin >> path[index];

    level     = 0;
    traversed = 0;

    for(int index = 0; index < steps; index++) {

        last = level;

        if(path[index] == 'U') level++;

        if(path[index] == 'D') level--;

        if(!level && last < 0) traversed++;

    }

    std::cout << traversed << std::endl;

    return SUCCESS;

}