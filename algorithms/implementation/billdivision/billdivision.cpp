/// Hacker Rank
/// Bill Division
/// Author: Carlos L. Cuenca
/// Date: 10/10/20

#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>

/// -----------------
/// Program Constants

const std::string BON_APPETIT = "Bon Appetit";
const long long SUCCESS = 0;

/// --------------
/// Driver Program

int main(int argc, char* argv[]) {

    /// -----------------
    /// Program Variables

    uint32_t declined     ;
    uint32_t itemsOrdered ;
    uint32_t charged      ;
    uint32_t actual       ; 

    /// -------
    /// Program

    std::cin >> itemsOrdered >> declined;

    std::vector<uint32_t> bill(itemsOrdered);

    for(uint32_t index = 0; index < bill.size(); index++) 
        std::cin >> bill[index];

    std::cin >> charged;
    
    actual = 0;

    for(uint32_t index = 0; index < bill.size(); index++)
        if(index != declined) actual += bill[index];

    actual /= 2;

    if(actual == charged) { std::cout << BON_APPETIT << std::endl; }

    else std::cout << charged - actual << std::endl;

    return SUCCESS;

}