#include "../include/graph.hpp"

int main(){
    
    Graph g = Graph("vertex_inputs.txt");

    g.ReadFileConections("edges_inputs.txt");

    g.PrintMatrix();
    
    return 0;
}