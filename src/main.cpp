#include "../include/graph.hpp"

int main(){
    
    Graph g = Graph("vertex_inputs.txt");

    g.ReadFileConections("edges_inputs.txt");
    g.PrintMatrix(g.getMatrixAdj());
     cout << endl << endl;
    g.MakeFloydWarshall();
    cout << endl;
    g.PrintMatrix(g.getMatrixFinal());
    // cout << endl << endl;
    
    g.MakeShort("A","C");
    // cout << endl;
    
    return 0;
}