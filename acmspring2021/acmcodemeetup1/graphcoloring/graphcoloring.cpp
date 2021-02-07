/// Hacker Rank
/// Graph Coloring
/// Author: Carlos L. Cuenca
/// Date: 2/2/21

#include<iostream>
#include<vector>
#include<cinttypes>
#include<limits>
#include<algorithm>

/// ---------
/// Constants

const int SUCCESS = 0;

/// -------
/// Program

int main(int argc, char* argv[]) {

    /// -----------------
    /// Program Variables

    int nodes    ;
    int edges    ;
    int node     ;
    int neighbor ;

    /// -------------
    /// Program Start

    std::cin >> nodes;
    std::cin >> edges;

    std::vector<std::pair<int, int>> table   (nodes, std::pair<int, int>(0, -1));
    std::vector<bool>                visited (nodes, false);
    std::vector<std::pair<int, int>> input   (0);
    
    for(int edge = 0; edge < edges; edge++) {
        
        std::cin >> node     ;
        std::cin >> neighbor ;
        
        if(node > neighbor) {
            
            int temp = node     ;
            node     = neighbor ;
            neighbor = temp     ;
            
        }
        
        input.push_back(std::pair<int, int>(node - 1, neighbor - 1));
        
    }
    
    std::sort(input.begin(), input.end());

    table[0].first = 0;
    
    int currentNode = 0;
    
    for(int edge = 0; edge < edges; edge++) {

        node     = input[edge].first;
        neighbor = input[edge].second;
        
        if(node != currentNode) {
            
            visited[currentNode] = true;
            
            currentNode = node;
            
        }
        
        if(!visited[neighbor]) {
            
            int colorChanges = table[currentNode].first + 
                ((table[currentNode].second > -1) && 
                 ((table[currentNode].second % 2) ^ (currentNode % 2)) ^ 
                 ((currentNode % 2) ^ (neighbor % 2)));
        
            if((table[neighbor].first <= colorChanges) && (((currentNode % 2) ^ (neighbor % 2)) ^ (table[neighbor].second == -1))) {
                
                table[neighbor].first  = colorChanges;
                
                table[neighbor].second = currentNode;
                
            }
            
        }
        
    }
    
    std::cout << table[currentNode + 1].first << std::endl;

    return SUCCESS;

}