/*https://neps.academy/br/course/programacao-basica-(codcad)/lesson/bondinho*/

#include <iostream>

int main() {
    //Declaração de variáveis
    int A,M;
    //Entrada de dados
    std::cout<<"Número de alunos: ";
    std::cin>>A;
    std::cout<<"Número de monitores: ";
    std::cin>>M;
    //Lógica e Saída de dados
    if(A>=1&&A<=50&&M>=1&&M<=50) {
        if(A+M<=50) {
           std::cout<<"Sim, todo podem ir";
        }
        else {
            std::cout<<"Não, nem todos podem ir";
        }
    }
    return 0;
}


