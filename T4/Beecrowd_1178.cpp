/*https://judge.beecrowd.com/pt/problems/view/1178*/

#include <iomanip>
#include <iostream>

int main() {
    double v, n[100]; //Declaração de variáveis
    std::cin >> v; //Entrada de dados: valor a ser iniciado na progressão geométrica

    n[0] = v; //Sempre iniciar a progressão com o valor inicial
    for (int i = 1; i < 100; i++) {
        //Laço de repetição para calcular e armazenar a progressão geométrica
        n[i] = n[i - 1] / 2; //O dobro do valor do número anterior, iniciado por v
    }
    for (int i = 0; i < 100; i++) {
        //Laço de repetição para imprimir a progressão geométrica
        std::cout<< std::fixed << std::setprecision(4) << "N[" << i << "] = " << n[i] << "\n";
    }

    return 0;
}
