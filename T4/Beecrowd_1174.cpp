/*https://judge.beecrowd.com/pt/problems/view/1174*/

#include <iomanip>
#include <iostream>

int main(){
    double A[100];
    for(int i=0;i<100;i++) { //Laço de repetição para entrada dos 100 elementos
        std::cin>>A[i];
    }
    for(int i=0;i<100;i++) { //Laço de repetição para imprimir com valores menores, ou iguais, à 10 e suas posições
        if(A[i]<=10) {
            std::cout<<std::fixed<<std::setprecision(1)<<"A["<<i<<"] = "<<A[i]<<"\n"; //setprecision para limitar o valor impresso e fixed para limitar depois do ponto (números decimais)
        }
    }
    return 0;
}