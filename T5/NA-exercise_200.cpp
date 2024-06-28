/*https://neps.academy/br/exercise/200*/

#include <iostream>

using namespace std;

int main() {
    int matriz[3][3], linha[3]; //Declaração de array bidimensional (matriz) com 3 linhas (0,1,2) e três colunas (0,1,2)
    for (int i = 0; i < 3; i++) { //Laço para as linha
        for (int j = 0; j < 3; j++) { //Laço para as linha
            cin >> matriz[i][j]; //Entrada de dados
        }
    }
    for (int i = 0; i < 3; i++) { //Laço para as coluna
        for (int j = 0; j < 3; j++) { //Laço para as linha
            linha[i] += matriz[j][i]; //Soma das colunas
        }
    }
    for (int i = 0; i < 3; i++) { //Imprimir soma das das colunas
        cout << "Linha " << i << ":" << linha[i] << "\n";
    }
    return 0;
}
