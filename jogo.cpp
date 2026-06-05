#include <iostream>
#include <ctime>
#include <random> 
#include <string>

using namespace std;

int main () {
    char mapa[16][16], posicaoColuna = 0, posicaoLinha = 0, inventario[5] = {0};
    int x, y;
    int xJogador = 0, yJogador = 0;

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
                cout << " g ";
            }
            else if (mapa[i][l]==2){
                cout << " p ";
            }
            else if (mapa[i][l]==3){
                cout << " f ";
            }
            else if (mapa[i][l]==4){
                cout << " a ";
            }
            else if (mapa[i][l]==5) {
                cout << " t ";
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
    
    char itemEmbaixo = mapa[0][0];
    mapa[xJogador][yJogador] = 'J'; 

    while (gravetos < metagravetos || pedras < metapedras || frutas < metafrutas || animais < metaanimais || arvores < metaarvores) {
        
        cout << "\nINVENTARIO: " << endl;
        cout << "Graveto: " << gravetos << " | Pedras: " << pedras << " | Frutas: " << frutas << " | Animais: " << animais << " | Arvores: " << arvores << endl;
        cout << "--------------------------------------------------\n";

        for (int i = 0; i < 16; i++){
            for (int l = 0; l < 16; l++){
                if (mapa[i][l] == 'J') { 
                    cout << " J ";
                }
                else if (mapa[i][l] == 1){
                    cout << " g ";
                }
                else if (mapa[i][l]==2){
                    cout << " p ";
                }
                else if (mapa[i][l]==3){
                    cout << " f ";
                }
                else if (mapa[i][l]==4){
                    cout << " a ";
                }
                else if (mapa[i][l]==5) {
                    cout << " t ";
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

        cout << "\nComando (w,a,s,d para andar / digite 'c' ou ESPACO para coletar): ";
        string comando;
        getline(cin >> ws, comando);

        if (comando == "c" || comando == "C" || comando == " " || comando == "") {
            if (itemEmbaixo >= 1 && itemEmbaixo <= 5) {
                if (itemEmbaixo == 1) { gravetos++; cout << "\n[+] Coletou Graveto!"; }
                if (itemEmbaixo == 2) { pedras++;   cout << "\n[+] Coletou Pedra!"; }
                if (itemEmbaixo == 3) { frutas++;   cout << "\n[+] Coletou Fruta!"; }
                if (itemEmbaixo == 4) { animais++;  cout << "\n[+] Coletou Animal!"; }
                if (itemEmbaixo == 5) { arvores++;  cout << "\n[+] Coletou Arvore!"; }
                
                itemEmbaixo = 0; 
            } else {
                cout << "\nNao ha nada para coletar aqui!" << endl;
            }
            continue;
        }

        char movimento = comando[0];
        int proximoX = xJogador;
        int proximoY = yJogador;

        if (movimento == 'w' || movimento == 'W') proximoX--;
        if (movimento == 's' || movimento == 'S') proximoX++;
        if (movimento == 'a' || movimento == 'A') proximoY--;
        if (movimento == 'd' || movimento == 'D') proximoY++;

        if (proximoX >= 0 && proximoX < 16 && proximoY >= 0 && proximoY < 16) {
            
            if (mapa[proximoX][proximoY] == 6) {
                cout << "\nObstaculo! nao pode ultrapassar" << endl;
            } 
            else {
                mapa[xJogador][yJogador] = itemEmbaixo; 

                xJogador = proximoX;
                yJogador = proximoY;

                itemEmbaixo = mapa[xJogador][yJogador];

                mapa[xJogador][yJogador] = 'J';
            }
        } else {
            cout << "\nVoce bateu nas bordas do mapa!" << endl;
        }
    } 

    cout << "\nParabens! Voce atingiu todos os seus objetivos e venceu o jogo!" << endl;
    return 0;
}