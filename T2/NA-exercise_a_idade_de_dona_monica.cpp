/*https://neps.academy/br/exercise/463*/

#include <iostream>

int main() {
    int M,A,B,C;  //Declaração de variáveis
    std::cin>>M;
    std::cin>>A;
    std::cin>>B; //Entradas de dados
    if(M>=40 && M<=110 && A>=1 && A<M && B>=1 && B<M && B!=A) {
        C=M-(A+B);
        if(A>B&&A>C) {
            std::cout<<A;
        }
        if(B>B&&B>C) {
            std::cout<<B;
        }
        if(C>B&&C>A) {
            std::cout<<C;
        }
    }
    return 0;
}


