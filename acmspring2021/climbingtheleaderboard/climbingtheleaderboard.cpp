/// Hacker Rank
/// Simplicity of Strings
/// Author: Carlos L. Cuenca
/// Date: 2/1/21

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
    int rank    = 1 ;

    std::vector<std::pair<int, int>> ranked(0);
    std::vector<int>                 ranking(0);
    
    /// -------------
    /// Program Start

    std::cin >> players;

    // Start the first one
    std::cin >> scoreBuffer;

    ranked.push_back(std::pair<int, int>(rank, scoreBuffer));

    // Loop through the rest
    for(int index = 1; index < players; index++) {

        std::cin >> scoreBuffer;
        
        // Keep the same rank until we reach a different number
        if(scoreBuffer != ranked[ranked.size() - 1].second) {
            
            rank++;

            ranked.push_back(std::pair<int, int>(rank, int(scoreBuffer)));

        }

    }
    
    std::cin >> games;

    for(int index = 0; index < games; index++) {

        std::cin >> scoreBuffer;

        int intervalStart = 0;
        int intervalEnd   = ranked.size() - 1;
        
        rank = 1;
        
        if(scoreBuffer < ranked[intervalEnd].second) {
            
            rank = ranked[intervalEnd].first + 1;
            
        }

        while(scoreBuffer > ranked[intervalEnd].second && scoreBuffer < ranked[intervalStart].second) {
            
            int half   = (intervalEnd - intervalStart) / 2;
            int middle = intervalStart + half;

            if(scoreBuffer > ranked[middle].second) {

                intervalEnd = middle;

            } else if(scoreBuffer < ranked[middle].second) {

                intervalStart = middle;

            } else if(scoreBuffer == ranked[middle].second) {

                rank = ranked[middle].first;

                break;

            }
            
            if((intervalEnd - intervalStart) <= 1) {
                
                if(scoreBuffer > ranked[intervalEnd].second && scoreBuffer < ranked[intervalStart].second) {
                    
                    rank = ranked[intervalEnd].first;
                    
                }
                
                if(scoreBuffer == ranked[intervalStart].second) {
                    
                    rank = ranked[intervalStart].first;
                    
                }
                
                if(scoreBuffer == ranked[intervalEnd].second) {
                    
                    rank = ranked[intervalEnd].first;
                    
                }
                
                if(scoreBuffer > ranked[intervalStart].second) {
                    
                    rank = ranked[intervalStart].first - 1;
                    
                }
                
                if(scoreBuffer < ranked[intervalEnd].second) {
                    
                    rank = ranked[intervalEnd].first + 1;
                    
                }
                
                break;
                
            }

        }
        
        ranking.push_back(rank);

    }

    for(int index = 0; index < ranking.size(); index++)
        std::cout << ranking[index] << std::endl;

    return SUCCESS;

}