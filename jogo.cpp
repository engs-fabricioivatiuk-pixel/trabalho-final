#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main () {
    int mapa[16][16], posicaoColuna = 0, posicaoLinha = 0, inventario[5] = {0};
    char objetivo;
    srand(time(0));

    cout << "qual o seu objetivo ?";
    cout <<" 1-Coletar 4 gravetos e 2 pedras";
    cout <<" 2 coletar 1 fruta e 3 animais"; 
    cout << "3 coletar 8 pedras e 4 arvores";
    cin >> objetivo;

    if(objetivo == '1') {
     cout <<" 1-Coletar 4 gravetos e 2 pedras";}
    else if(objetivo == '2') {
     cout <<" 2 coletar 1 fruta e 3 animais"; 
    }
    else(objetivo == '3') {
     cout << "3 coletar 8 pedras e 4 arvores";
    }

}