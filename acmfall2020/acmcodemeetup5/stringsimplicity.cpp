/// Hacker Rank
/// Simplicity of Strings
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

    std::string input;
    uint64_t simplicity;
    uint64_t remove;

    std::cin >> input;

    simplicity = 0;
    remove     = 0;

    std::vector<int> track('z' - 'a', 0);

    for(uint32_t index = 0; index < input.size(); index++) {
        
        track[input[index] - 'a']++;

        if(track[input[index] - 'a'] == 1) simplicity++;

    }
    
    std::sort(track.begin(), track.end());
    
    if(simplicity >= 2) {
 
        for(uint32_t index = 0; index < track.size(); index++) {

            if(track[index]) {

                while(track[index]--) remove++;

                simplicity--;

                if(simplicity == 1 || simplicity == 2) break;

            }

        }

    }

    std::cout << remove << std::endl;

    return SUCCESS;

}