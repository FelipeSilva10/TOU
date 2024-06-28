/*https://judge.beecrowd.com/pt/problems/view/1182*/

#include <iomanip>
#include <iostream>

int main() {
    //Declaração de variáveis
    int C; //Indica a coluna que será realizada a operação
    int M[12][12]; //Matriz que armazena os 144 elementos
    char T; //Tipo de operação
    long double Total = 0; //Variável que armazena o valor final
    //Entrada de dados
    std::cin >> C; //Linha que será considerada para operação
    if (C >= 0 && C <= 11) {
        std::cin >> T;
        //Caractere que indica a operação (Soma ou Média) que deverá ser realizada com os elementos da matriz
        for (int linha = 0; linha < 12; linha++) {
            for (int coluna = 0; coluna < 12; coluna++) {
                std::cin >> M[linha][coluna];
            }
        }
        //Lógica
        for (int linha = 0; linha < 12; linha++) {
            //Laço que varre as colunas somando
            Total = Total+M[linha][C]; //Valores vão sendo armazenados na variável O
        }
        //Saída de dados
        if (T == 'S') {
            //Se a operação for S (Soma)
            std::cout << std::fixed << std::setprecision(1) << Total << "\n";
        }
        if (T == 'M') {
            //Se a operação for M (Média)
            Total = Total / 12;
            std::cout << std::fixed << std::setprecision(1) << Total << "\n";
        }
    }
    return 0;
}
