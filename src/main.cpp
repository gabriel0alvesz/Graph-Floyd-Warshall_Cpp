#include "../include/graph.hpp"

int main(){

    //Graph grafo("vertex_inputs.txt");
    //Graph g = Graph("vertex_inputs.txt");
    
    Graph g = Graph("vertex_inputs.txt");
    // g.PrintVertex();

    g.MakeConection("Pimenta", "Formiga", 42.0);

    g.PrintMatrix();
    
    return 0;
}