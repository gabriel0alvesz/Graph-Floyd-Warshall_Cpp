#include "../include/graph.hpp"

int main(){

    //Graph grafo("vertex_inputs.txt");
    //Graph g = Graph("vertex_inputs.txt");
    
    Graph *g = new Graph("vertex_inputs.txt");
    g->PrintVertex();
    
    return 0;
}