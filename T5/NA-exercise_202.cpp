/*https://neps.academy/br/exercise/202*/

#include <iostream>

using namespace std;

int main() {
    int maior, x = 0;
    int matriz[3][3]; //Declaração de variáveis
    for (int linha = 0; linha < 3; linha++) {
        for (int coluna = 0; coluna < 3; coluna++) {
            cin >> matriz[linha][coluna]; //Entrada de dados
            if (x == 0) {
                maior = matriz[linha][coluna];
                x++;
            }
            if (matriz[linha][coluna] >= maior) {
                maior = matriz[linha][coluna];
            }
        }
    }
    for (int linha = 0; linha < 3; linha++) {
        for (int coluna = 0; coluna < 3; coluna++) {
            if (matriz[linha][coluna] == maior) {
                matriz[linha][coluna] = -1;
            }
        }
    }
    for (int linha = 0; linha < 3; linha++) {
        for (int coluna = 0; coluna < 3; coluna++) {
            cout << matriz[linha][coluna] << " "; //Saída de dados
        }
        cout << "\n";
    }
    return 0;
}
