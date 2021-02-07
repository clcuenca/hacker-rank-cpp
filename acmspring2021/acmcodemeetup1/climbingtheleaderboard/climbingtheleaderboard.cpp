/// Hacker Rank
/// Climbing the Leaderboard
/// Author: Carlos L. Cuenca
/// Date: 2/2/21

#include<iostream>
#include<vector>

/// ---------
/// Constants

const int SUCCESS = 0;

int main(int argc, char* argv[]) {
    
    /// -----------------
    /// Program Variables

    int players     ;
    int games       ; 
    int scoreBuffer ;

    std::vector<int> ranked  (0);
    
    /// -------------
    /// Program Start

    std::cin >> players;

    // Loop through the rest
    for(int index = 0; index < players; index++) {

        std::cin >> scoreBuffer;
        
        //.If it's empty, just add in as-is
        if(!ranked.size()) {
            
            ranked.push_back(scoreBuffer);
            
            // Keep the same rank until we reach a different number
        } else if(scoreBuffer != ranked.back()) {
            
            ranked.push_back(scoreBuffer);
            
        }

    }
    
    std::cin >> games;

    for(int index = 0; index < games; index++) {

        std::cin >> scoreBuffer;

        int intervalStart = 0;
        int intervalEnd   = ranked.size() - 1;
        int rank          = 0;

        while((intervalEnd - intervalStart) >= 1) {
            
            int middle = intervalStart + ((intervalEnd - intervalStart) / 2);
            
            if(scoreBuffer == ranked[middle]) {

                rank = middle;

                break;
                
            } else if(scoreBuffer > ranked[middle]) {

                intervalEnd = middle - 1;

            } else if(scoreBuffer < ranked[middle]) {

                intervalStart = middle + 1;

            }

            rank = intervalStart + (scoreBuffer < ranked[intervalStart]);

        }
        
        std::cout << rank + 1 << std::endl;

    }

    return SUCCESS;

}