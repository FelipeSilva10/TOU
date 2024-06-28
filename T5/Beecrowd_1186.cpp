/*https://judge.beecrowd.com/pt/problems/view/1190*/

#include <iomanip>
#include <iostream>

int main() {
    //Declaração de variáveis
    int M[12][12]; //Matriz que armazena os 144 elementos
    char O; //Tipo de operação
    long double Total = 0; //Variável que armazena o valor final
    //Entrada de dados
    std::cin >> O;
    //Caractere que indica a operação (Soma ou Média) que deverá ser realizada com os elementos da matriz
    for (int linha = 0; linha < 12; linha++) {
        for (int coluna = 0; coluna < 12; coluna++) {
            std::cin >> M[linha][coluna];
        }
    }
    //Lógica
    int colunamin = 11;
    int colunamax = 12;
    for (int linha = 1; linha < 12; linha++) {
        //Rodar as linhas
        for (int coluna = colunamin; coluna < colunamax; coluna++) {
            Total = Total + M[linha][coluna]; //Valores vão sendo armazenados na variável Total
        }
        colunamin -= 1;
    }
    //Saída de dados
    if (O == 'S') {
        //Se a operação for S (Soma)
        std::cout << std::fixed << std::setprecision(1) << Total << "\n";
    }
    if (O == 'M') {
        //Se a operação for M (Média)
        Total = Total / 66;
        std::cout << std::fixed << std::setprecision(1) << Total << "\n";
    }
    return 0;
}
