/*https://neps.academy/br/exercise/198*/

#include <iostream>

using namespace std;

int main() {
    int linhas[3] = {0, 0, 0};
    int colunas[3] = {0, 0, 0};
    int diagonais[2] = {0, 0};
    int matriz[3][3]; //Declaração de array bidimensional (matriz) com 3 linhas (0,1,2) e três colunas (0,1,2)
    for (int i = 0; i < 3; i++) {
        //Laço para as linhas
        for (int j = 0; j < 3; j++) {
            //Laço para as colunas
            cin >> matriz[i][j]; //Entrada de dados
        }
    }
    for (int lc = 0; lc < 3; lc++) {
        //Linhas e colunas
        for (int c = 0; c < 3; c++) {
            linhas[lc] += matriz[lc][c];
        }
        for (int l = 0; l < 3; l++) {
            colunas[lc] += matriz[l][lc];
        }
    }

    for (int lc = 0; lc < 3; lc++) {
        diagonais[0] += matriz[lc][lc];
    }
    int c = 2;
    for (int l = 0; l < 3; l++) {
        diagonais[1] += matriz[l][c];
        c--;
    }
    if (linhas[0] == 15 && linhas[1] == 15 && linhas[2] == 15 && colunas[0] == 15 && colunas[1] == 15 && colunas[2] ==
        15 && diagonais[0] == 15 && diagonais[1] == 15) {
        cout << "SIM";
    } else {
        cout << "NAO";
    }
    return 0;
}
