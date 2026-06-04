#include <iostream>
#include <ctime>
#include <random> 
using namespace std;

int main () {
    int mapa[16][16], posicaoColuna = 0, posicaoLinha = 0, inventario[5] = {0};
    int x, y;
    int xjogador = 0, yjogador = 0;

    int gravetos = 0;
    int pedras = 0;
    int frutas = 0;
    int animais = 0;
    int arvores = 0;

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
    for(int b = 0; b < 38; b++){
        x = rand() % 16;
        y = rand() % 16;
        if (mapa[x][y] == 0){
            mapa[x][y] = 1;
        }
        else{
            b--;
        }
    }
     for(int b = 0; b < 38; b++){
        x = rand() % 16;
        y = rand() % 16;
        if (mapa[x][y] == 0){
            mapa[x][y] = 2;
        }
        else{
            b--;
        }
    }
     for(int b = 0; b < 38; b++){
        x = rand() % 16;
        y = rand() % 16;
        if (mapa[x][y] == 0){
            mapa[x][y] = 3;
        }
        else{
            b--;
        }
    }
 for(int b = 0; b < 38; b++){
        x = rand() % 16;
        y = rand() % 16;
        if (mapa[x][y] == 0){
            mapa[x][y] = 4;
        }
        else{
            b--;
        }
    }
     for(int b = 0; b < 38; b++){
        x = rand() % 16;
        y = rand() % 16;
        if (mapa[x][y] == 0){
            mapa[x][y] = 5;
        }
        else{
            b--;
        }
    }
     for(int b = 0; b < 16; b++){
        x = rand() % 16;
        y = rand() % 16;
        if (mapa[x][y] == 0){
            mapa[x][y] = 6;
        }
        else{
            b--;
        }
    }
    for (int i = 0; i < 16; i++){
        for (int l = 0; l < 16; l++){
            if (mapa[i][l] == 1){
                cout << " G ";
            }
            else if (mapa[i][l]==2){
                cout << " P ";
            }
            else if (mapa[i][l]==3){
                cout << " F ";
            }
            else if (mapa[i][l]==4){
                cout << " A ";
            }
             else if (mapa[i][l]==5) {
                cout << " T ";
             }
              else if (mapa[i][l]==6) {
                cout << " # ";
              }
             else {
                cout << " . ";
             }
        }
        cout << endl;
    }
    mapa[xjogador][yjogador] = 0;
    
    cout << "\nqual o seu objetivo ?" << endl;
    cout <<" 1- Coletar 4 gravetos e 2 pedras" << endl;
    cout <<" 2- coletar 1 fruta e 3 animais" << endl; 
    cout << "3- coletar 8 pedras e 4 arvores" << endl;
    cin >> objetivo;

    if(objetivo == 1) {
        metagravetos = 4 ;
        metapedras = 2 ;
        cout <<" 1- Coletar 4 gravetos e 2 pedras" << endl;
    }
    else if(objetivo == 2) {
        metafrutas = 1;
        metaanimais = 3;
        cout <<" 2- coletar 1 fruta e 3 animais" << endl; 
    }
    else if (objetivo == 3){
        metapedras = 8;
        metaarvores = 4;
        cout << "3- coletar 8 pedras e 4 arvores" << endl;
    }
    else {
        cout << "Objetivo indefinido!" << endl;
    }
    cout << "\nINVENTARIO: ";
    cout << "Graveto: " << gravetos << endl;
    cout << "Pedras:"  << pedras << endl;
    cout << "Frutas: " << frutas << endl;
    cout << "Animais: " << animais << endl;
    cout << "Arvores: " << arvores << endl;
    
    mapa[0][0] = '.';
    
}