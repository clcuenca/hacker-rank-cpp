/// Hacker Rank
/// Drawing Book
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

    uint32_t pageCount ;
    uint32_t page      ;
    uint32_t forward   ;
    uint32_t backward  ;

    /// -------
    /// Program

    std::cin >> pageCount ;
    std::cin >> page      ;

    std::cout << std::min(page / 2, (pageCount / 2) - (page / 2)) << std::endl;

    return SUCCESS;

}