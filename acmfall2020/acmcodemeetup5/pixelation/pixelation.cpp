/// Hacker Rank - Fall 2020 - ACM Code Meetup #5
/// Pixelation
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

    int  pulses    ;
    char direction ;
    int  time      ;
    int  length    ;
    int  wire      ;

    /// -------
    /// Program

    std::cin >> pulses;

    std::vector<char> directions ;
    std::vector<int>  times      ;
    std::vector<int>  lengths    ;
    std::vector<int>  wires      ;
    
    /// -------
    /// Program

    for(int pulse = 0; pulse < pulses; pulse++) {

        std::cin >> direction >> time >> length >> wire;
        
        directions .push_back(direction) ;
        times      .push_back(time)      ;
        lengths    .push_back(length)    ;
        wires      .push_back(wire)      ;

    }

    int pixels = 0;

    for(int index = 0; index < pulses; index++)
        for(int jindex = index + 1; jindex < pulses; jindex++) {

            if(directions[index] != directions[jindex]) {
                
                int head_i;
                int tail_i;
                int head_j;
                int tail_j;
                int delta_i;
                int delta_j;
                
                std::cout << "--------------------" << std::endl;
                
                std::cout << "Times[i]: " << times[index] << std::endl;
                std::cout << "Times[j]: " << times[jindex] << std::endl;

                if(times[index] <= times[jindex]) {
                    
                    head_i = 1 + std::abs(times[index] - times[jindex]);
                    tail_i = head_i - lengths[index];
                    head_j = 1;
                    tail_j = head_j - lengths[jindex];
                    
                    std::cout << "Head[i]: " << head_i << std::endl;
                    std::cout << "Tail[i]: " << tail_i << std::endl;
                    std::cout << "Head[j]: " << head_j << std::endl;
                    std::cout << "Tail[j]: " << tail_j << std::endl;
                    std::cout << "Wires[i]: " << wires[index] << std::endl;
                    std::cout << "Wires[j]: " << wires[jindex] << std::endl;
                    
                    delta_i = wires[jindex] - head_i;
                    delta_j = wires[index] - head_j;
                    
                    int maxDelta = std::max(delta_i, delta_j) + 1;
                    
                    std::cout << "Delta[i]: " << delta_i << std::endl;
                    std::cout << "Delta[j]: " << delta_j << std::endl;
                    std::cout << "Max: " << maxDelta << std::endl;
                    
                    if((head_i + maxDelta > wires[jindex]) && (tail_i + maxDelta < wires[jindex]) && 
                        (head_j + maxDelta > wires[index]) && (tail_j + maxDelta < wires[index])) pixels++;
                    
                    std::cout << "Pixels: " << pixels << std::endl;
                    
                } else {
                    
                    head_i = 1 + std::abs(times[jindex] - times[index]);
                    tail_i = head_i - lengths[jindex];
                    head_j = 1;
                    tail_j = head_j - lengths[index];
                    
                    delta_i = wires[index] - head_i;
                    delta_j = wires[jindex] - head_j;
                    
                    int maxDelta = std::max(delta_i, delta_j) + 1;
                    
                    if((head_i + maxDelta > wires[index]) && (tail_i + maxDelta < wires[index]) && 
                        (head_j + maxDelta > wires[jindex]) && (tail_j + maxDelta < wires[jindex])) pixels++;
                    
                }
                
            }

        }

    std::cout << pixels << std::endl;

    return SUCCESS;

}