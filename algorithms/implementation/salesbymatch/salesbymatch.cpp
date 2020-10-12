/// Hacker Rank
/// Sales By Match
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

    uint32_t sockCount ;
    uint32_t buffer    ;
    uint32_t sum       ;

    /// -------
    /// Program

    std::cin >> sockCount;

    std::vector<int> socks(sockCount);
    std::unordered_map<int, int> map;

    for(uint32_t index = 0; index < socks.size(); index++) {

        std::cin >> buffer;

        auto search = map.find(buffer);

        if(search == map.end()) map[buffer] = 0;

        map[buffer]++

    }

    sum = 0;

    std::unordered_map<int, int>::iterator index = map.begin();

    while(index != map.end()) {

        sum += index.second / 2;

        index++;

    }

    std::cout << sum << std::endl;


    return SUCCESS;

}