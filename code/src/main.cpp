#include "../include/graph.hpp"

int main(){
    
    Graph g = Graph("vertex_inputs.txt");
    // g.PrintVertex(); //Para mostrar todos os bairros
    g.ReadFileConections("edges_inputs.txt");
    g.PrintMatrix(g.getMatrixAdj());
    cout << endl << endl;
    
    g.MakeFloydWarshall();
    // g.PrintMatrix(g.getMatrixFinal());

    cout << "-----------------> Aôp Pimenta!!\n\n";
    cout << "<--------------------- Menor Caminho para atender clientes em 3 bairros diferentes sequencialmente --------------------->\n\n";
    
    string str_file = "./src/input/input_teste.txt";
    ifstream file(str_file);

    if(file.is_open()){

         string line_token, token;
        char del = ',';

        while(getline(file,line_token)){

            stringstream sstream(line_token);
            string str1, str2, str3;

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
                        str3 = token;
                    break;
                }
                
                control++;
            }

            control = 0;
            
            cout << "\nClientes nos bairros: " << str1 << ", " << str2 << ", " << str3 << endl;
            g.MakeMinPath3_Sequential(str1,str2,str3);
            cout << "\n---------------------------------------------------------------------------\n";

        }

    }else{

        cout << "ERRO - " << str_file << endl;
    }

    return 0;
}

