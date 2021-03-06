/// Hacker Rank
/// Breaking Records
/// Carlos L. Cuenca
/// 02/07/2021

#include<iostream>
#include<cinttypes>

/// ---------
/// Constants

const int SUCCESS = 0;

/// -------
/// Program

int main(int argc, char* argv[]) {

    /// -----------------
    /// Program Variables

    int input            ;
    int games            ;
    int score            ;
    int minimumCount = 0 ;
    int maximumCount = 0 ;

    /// -------------
    /// Program Start

    std::cin >> input;

    while(input--) {

        std::cin >> games;
        std::cin >> score;

        int minimum = score;
        int maximum = score;

        for(uint32_t index = 1; index < games; index++) {

            std::cin >> score;
            
            maximumCount += (maximum < score);
            minimumCount += (minimum > score);

            minimum = std::min(minimum, score);
            maximum = std::max(maximum, score);

        }

        std::cout << maximumCount << " " << minimumCount << std::endl;

    }

    return SUCCESS;

}