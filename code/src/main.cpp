#include "../include/graph.hpp"

int main(){
    
    Graph g = Graph("vertex_inputs.txt");

    g.ReadFileConections("edges_inputs.txt");
    // g.PrintVertex();
    cout << endl << endl;
    // g.PrintMatrix(g.getMatrixAdj());
    
    g.MakeFloydWarshall();

    g.MakeMinPath3("Quinca Lopes", "J.K", "Ilha do Cabaçal");
    
    return 0;
}