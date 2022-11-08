#include "../include/graph.hpp"

Vertex::Vertex(string name){

    this->name_vertex = name;
    this->grade_input = 0;
    this->grade_output = 0;
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
        aux.push_back(0.0);
        
    }

    for(int i = 0; i < size; i++){

        matrix_adj.push_back(aux);
    }
    
}

void Graph::PrintMatrix(){

    int size = vertex.size();

    for(int i = 0; i < size; i++){
        
        for(int j = 0; j < size; j++){
            
            cout << matrix_adj[i][j] << " ";
        }
        cout << endl;
    }
}

Graph::~Graph(){}

void Graph::PrintVertex(){

    for(auto n: vertex){

        cout << n.getNameVertex() << endl;
    }
}

// int Graph::isPresentVertex(Vertex v){

//     vector<Vertex>::iterator it;

//     it = vertex.begin();

// }


void Graph::MakeConection(Vertex v1, Vertex v2, float weight){

    int index = getIndexVertex(v1);

    
}

int Graph::getIndexVertex(Vertex v_aux){

    for(int i = 0; i < vertex.size(); i++){

        if(vertex[i].getNameVertex() == v_aux.getNameVertex()){

            return i;
        }
    }
}