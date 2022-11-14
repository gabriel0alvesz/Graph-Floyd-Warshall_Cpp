#ifndef GRAPH_HPP
#define GRAPH_HPP

#define INF (float)DBL_MAX //Representação de Infinito
#define Matrix vector<vector<float>>

#include<bits/stdc++.h>

using namespace std;

class Vertex{

    private:

        string name_vertex;
        int grade_input;
        int grade_output;
        int grade;
    public:

        Vertex(string name);
        ~Vertex();

        void setGradeIn();
        int getGradeIn();

        void setGradeOut();
        int getGradeOut();

        void setGrade();
        int getGrade();
        string getNameVertex();
};


class Graph{

    private:

        int size_graph; //quantidade de vertices no grafo.
        int count_edges; // Quantidade de arestas no grafo todo
        vector<Vertex> vertex; // Lista de vertices para se obter indice
        
        Matrix matrix_adj;
        Matrix matrix_final;

        void MatrixAdjNull(int size);
        void MakeConection(string name1, string name2, float weight);
        int getIndexVertex(string name);
        void UpdateGrade(int i1, int i2);

        void ShortPath(int index1, int index2);
        void ShortPathAux(float *custo, int index1, int index2);
        
    public:

        Graph(string name_file);
        ~Graph();
        
        void PrintVertex();
        void PrintMatrix(Matrix m);
        void ReadFileConections(string name_file);
        

        void MakeFloydWarshall();
        void MakePath(string name1, string name2);
        Matrix getMatrixAdj();
        Matrix getMatrixFinal();
        string getNameVertex(int index);

        void MakeMinPath3(string name1, string name2, string name3);

};


#endif