#include "../include/graph.hpp"

int main(){
    
    Graph g = Graph("vertex_inputs.txt");

    g.ReadFileConections("edges_inputs.txt");
    g.MakeFloydWarshall();
    g.PrintMatrixAdj();
    cout << endl;
    g.PrintMatrixFinal();

    cout << endl << endl;

    g.MakeShort("A","C");
    cout << endl;
    
    return 0;
}