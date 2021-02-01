/// Hacker Rank
/// 32 Bits
/// Author: Carlos L. Cuenca
/// Date: 10/10/20

#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>

/// -----------------
/// Program Constants

const int SUCCESS = 0;

/// --------------
/// Driver Program

int main(int argc, char* argv[]) {

    /// -----------------
    /// Program Variables

    uint32_t inputCount;
    uint64_t number    ;

    /// -------
    /// Program

    std::cin >> inputCount;

    while(inputCount--) {

        std::cin >> number;

        std::vector<char> stringNumber;

        while(number) {

            stringNumber.push_back(static_cast<char>('0' + number % 10));

            number /= 10;

        }
        
        std::reverse(stringNumber.begin(), stringNumber.end());

        uint64_t buffer  = 0;
        uint64_t other   = 0;
        uint64_t maximum = 0;

        for(uint32_t index = 0; index < stringNumber.size(); index++) {

            uint64_t sum     = 0; 
            
            buffer = buffer*10 + (stringNumber[index] - '0');
            
            other = buffer;

            while(other) {

                if(other & 1) sum++;

                other >>= 1;

            }

            if(sum > maximum) maximum = sum;

        }


        std::cout << maximum << std::endl;

    }

    return SUCCESS;

}