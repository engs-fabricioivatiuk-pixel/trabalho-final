#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random> 
using namespace std;

int main () {
    int mapa[16][16], posicaoColuna = 0, posicaoLinha = 0, inventario[5] = {0};
    int gravetos = 0;
    int pedras = 0;
    int frutas = 0;
    int animais = 0;
    int arvores = 0;
    int x, y;

    int metagravetos = 0;
    int metapedras = 0;
    int metafrutas = 0;
    int metaanimais = 0;
    int metaarvores = 0;
    int objetivo;
    srand(time(0));
    for(int i = 0; i < 16; i++){
        for(int l = 0; l < 16; l++){
            mapa[i][l] = 0;
        }
    }

    cout << "qual o seu objetivo ?";
    cout <<" 1- Coletar 4 gravetos e 2 pedras" << endl;
    cout <<" 2- coletar 1 fruta e 3 animais" << endl; 
    cout << "3- coletar 8 pedras e 4 arvores" << endl;
    cin >> objetivo;

    if(objetivo == '1') {
    metagravetos = 4 ;
    metapedras = 2 ;
     cout <<" 1- Coletar 4 gravetos e 2 pedras" << endl;
    }
    else if(objetivo == '2') {
     metafrutas = 1;
     metaanimais = 3;
     cout <<" 2- coletar 1 fruta e 3 animais" << endl; 
    }
    else if (objetivo == '3'){
        metapedras = 8;
        metaarvores = 4;
     cout << "3- coletar 8 pedras e 4 arvores" << endl;
    }
    for(int i = 0; i < 38; i++){
        x = rand() % 16;

        y = rand() % 16;
        
        mapa[x][y] = 1;
    }

}

