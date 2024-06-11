/*Faça um algoritmo que faça a soma de dois números diferentes 3 vezes e mostre na tela todos eles.*/

#include <iostream>

int main() {
    int x=0;
    int n1,n2,r;
    while(x<3) {
        std::cout<<"Insira um número: ";
        std::cin>>n1;
        std::cout<<"Insira um número: ";
        std::cin>>n2;
        if(n1!=n2) {
            r=n1+n2; //Soma
            std::cout<<"A soma dos dois números distintos é igual à: "<<r<<"\n\n";
            x=x+1;
        }
        else {
            std::cout<<"Insira números diferentes!\n\n";
        }
    }
    return 0;
}
