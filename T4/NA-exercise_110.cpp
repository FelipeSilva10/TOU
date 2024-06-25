/*https://neps.academy/br/exercise/110*/

#include <iostream>

int main() {
    int Quant, Contador=0;
    std::cin >> Quant; //Entrada de dados
    int Num[Quant], Sequencia[Quant];
    //Entrada de dados
    for (int i = 0; i < Quant; i++) {
        std::cin >> Num[i];
    }
    //Registro de sequências
    int x=Num[0];
    int y=-1;
    for (int i = 0; i < Quant; i++) {
        if(Num[i]==x) {
            Contador++;
        }
        if(Num[i]!=x) {
            y++;
            Sequencia[y]=Contador;
            Contador=1;
            x=Num[i];
        }
    }
    //Analisar a maior sequência registrada
    for (int i = 0; i < y; i++) {
        std::cout<<Sequencia[i]<<;
        if(Sequencia[i]>Sequencia[i-1]) {
            Contador=Sequencia[i];
        }
    }
    //Imprimir a maior sequência registrada
    std::cout << Contador;

    return 0;
}

//    if (N >= 1 && N <= std::pow(40, 10)) {
