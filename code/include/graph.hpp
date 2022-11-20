/**
 * @file graph.hpp
 * @author Gabriel Alves (https://github.com/Nerd100oculoS)
 * @brief Arquivo cabeçalho
 * @date 2022-11-19
 * 
 * @copyright Copyright (c) 2022
 * 
**/

#ifndef GRAPH_HPP
#define GRAPH_HPP

#define INF (float)DBL_MAX
#define Matrix vector<vector<float>>
#define LOJA (string)"Loja-SUPREMA"

#include<bits/stdc++.h>

using namespace std;

/**
 * @brief Estrutura do Vértice.
 */
class Vertex{

    private:

        string name_vertex;
        int grade_input;
        int grade_output;
        int grade;
    
    public:

    // Constructor and Destructor
        Vertex(string name);
        ~Vertex();

    //set's and get's
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

    //Attributes
        int size_graph; //quantidade de vertices no grafo.
        int count_edges; // Quantidade de arestas no grafo todo
        vector<Vertex> vertex; // Lista de vertices para se obter indice

        Matrix matrix_adj; //Matriz de Adjacência
        Matrix matrix_final; //Matriz de Pesos

        int getIndexVertex(string name);

    //Private methods
        void MatrixAdjNull(int size);
        void MakeConection(string name1, string name2, float weight);
        void UpdateGrade(int i1, int i2);
        void ShortPathAux(int index1, int index2);
        
    public:

    //Constructor and Destructor
        Graph(string name_file);
        ~Graph();
        
    //set's and get's
        Matrix getMatrixAdj();
        Matrix getMatrixFinal();
        
        
        int getEdgesSize();
        string getNameVertex(int index); //Procura o indice dentro do vector
        float getWeightIndex(int i1, int i2);

    //Public methods
        void PrintVertex();
        void PrintMatrix(Matrix m);
        void ReadFileConections(string name_file);
        
        void MakeFloydWarshall();
        void MakePath(string name1, string name2);

        void MakeMinPath3_Sequential(string name1, string name2, string name3);
};

#endif