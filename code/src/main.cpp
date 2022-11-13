#include "../include/graph.hpp"

int main(){
    
    Graph g = Graph("vertex_inputs.txt");

    g.ReadFileConections("edges_inputs.txt");
    g.PrintVertex();
    cout << endl << endl;
    g.PrintMatrix(g.getMatrixAdj());
    
    g.MakeFloydWarshall();

    g.MakeShort("Centro","Santo Antonio");
    
    return 0;
}