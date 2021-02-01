/// Hacker Rank
/// Trouble at ACM
/// Author: Carlos L. Cuenca
/// Date: 2/1/21

#include<iostream>
#include<vector>
#include<string>

/// ---------
/// Constants

const int SUCCESS          = 0          ;
const std::string GOOD_JOB = "good job" ;

int main(int argc, char* argv[]) {
    
    /// -----------------
    /// Program Variables

    int pagesFound    ;
    int memberId      ;
    int lastID      = 1     ;
    bool lostPapers = false ;

    /// -------------
    /// Program Start

    std::cin >> pagesFound;

    for(uint32_t index = 0; index < pagesFound; index++) {

        std::cin >> memberId;

        while(lastID < memberId) { 

            std::cout << lastID++ << std::endl;

            lostPapers = true;

        }

        lastID = memberId + 1;

    }

    if(!lostPapers) std::cout << GOOD_JOB << std::endl;

    return SUCCESS;

}