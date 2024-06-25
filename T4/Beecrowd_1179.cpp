/*https://judge.beecrowd.com/pt/problems/view/1179*/

#include <iostream>

int main() {
    int entrada, par[5], impar[5];
    int indice1 = 0, indice2 = 0;

    for (int i = 0; i < 15; i++) {
        std::cin >> entrada;
        if (entrada % 2 == 0) {
            par[indice1] = entrada;
            indice1++;
        } else {
            impar[indice2] = entrada;
            indice2++;
        }

        if (indice1 == 5) {
            for (int i = 0; i < 5; i++) {
                std::cout << "par[" << i << "] = " << par[i] << "\n";
            }
            indice1 = 0;
        }

        if (indice2 == 5) {
            for (int i = 0; i < 5; i++) {
                std::cout << "impar[" << i << "] = " << impar[i] << "\n";
            }
            indice2 = 0;
        }
    }

    // Imprimir os elementos restantes nos arrays par e impar, se houver
    for (int i = 0; i < indice2; i++) {
        std::cout << "impar[" << i << "] = " << impar[i] << "\n";
    }
    for (int i = 0; i < indice1; i++) {
        std::cout << "par[" << i << "] = " << par[i] << "\n";
    }
    return 0;
}
