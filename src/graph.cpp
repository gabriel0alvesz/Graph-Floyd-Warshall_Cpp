#include "../include/graph.hpp"

Vertex::Vertex(string name){

    this->name_vertex = name;
    this->grade_input = 0;
    this->grade_output = 0;
    this->grade = 0;
}

Vertex::~Vertex(){}    

void Vertex::setGradeIn(){

    this->grade_input++;
}

int Vertex::getGradeIn(){return grade_input;}

void Vertex::setGradeOut(){

    this->grade_output++;
}

int Vertex::getGradeOut(){return grade_output;}

void Vertex::setGrade(){

    this->grade = getGradeIn()+getGradeOut();
}

int Vertex::getGrade(){return grade;}

string Vertex::getNameVertex(){return name_vertex;}

// --------------------------- Graph --------------------------- 

Graph::Graph(string name_file){

    string str_file = "./src/input/" + name_file;
    string str_token;

    cout << str_file << endl;
    ifstream file(str_file);

    if(file.is_open()){

        while(getline(file,str_token)){

            Vertex v = Vertex(str_token);
            vertex.push_back(v);
        }

        this->size_graph = vertex.size();
        this->count_edges = 0;

    }else{

        cout << "ERRO - " << name_file << endl << endl;
    }

    file.close();

    MatrixAdjNull(size_graph);
}

void Graph::MatrixAdjNull(int size){

    vector<float> aux;
    for(int i = 0; i < size; i++){
        aux.push_back(INF);
    }

    for(int i = 0; i < size; i++){

        matrix_adj.push_back(aux);
    }

    for(int i = 0; i < size; i++){

        matrix_adj[i][i] = 0.0;
    }
}

void Graph::PrintMatrix(){

    int size = vertex.size();

    for(int i = 0; i < size; i++){
        
        for(int j = 0; j < size; j++){
            
            cout << matrix_adj[i][j] << "  \t";
        }
        cout << endl;
    }
}

Graph::~Graph(){}

void Graph::PrintVertex(){

    for(int i = 0; i < vertex.size(); i++){

        cout << vertex[i].getNameVertex() << endl;
    }
}

void Graph::MakeConection(string name1, string name2, float weight){

    int index_v1 = getIndexVertex(name1);
    int index_v2 = getIndexVertex(name2);

    if(index_v1 != -1 && index_v2 != -1){

        matrix_adj[index_v1][index_v2] = weight;

        UpdateGrade(index_v1, index_v2);
    }

    // cout << index_v1 << "/" << index_v2 << endl;
}

int Graph::getIndexVertex(string name){

    for(int i = 0; i < vertex.size(); i++){

        if(vertex[i].getNameVertex() == name){

            return i;
        }
    }

    return -1;
}

void Graph::UpdateGrade(int i1, int i2){

    vertex[i1].setGradeOut(); // vertice do qual sai uma aresta.
    vertex[i2].setGradeIn(); // vertice o qual chega uma aresta.

    // Atualiza o grau total
    vertex[i1].setGrade();
    vertex[i2].setGrade(); 
} 

void Graph::ReadFileConections(string name_file){

    string str_file = "./src/input/" + name_file;

    ifstream file(str_file);

    if(file.is_open()){

         string line_token, token;
        char del = ' ';

        while(getline(file,line_token)){

            stringstream sstream(line_token);
            string str1, str2;
            float w_ref;

            int control = 0;
            
            while(getline(sstream,token,del)){

                switch(control){

                    case 0:
                        str1 = token;
                    break;

                    case 1:
                        str2 = token;
                    break;

                    case 2:
                        w_ref = stof(token);
                    break;
                }
                
                control++;
            }

            control = 0;
            
            MakeConection(str1, str2, w_ref);
        }

    }else{

        cout << "ERRO - " << name_file << endl;
    }


}