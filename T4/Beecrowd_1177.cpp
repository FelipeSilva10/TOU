/*https://judge.beecrowd.com/pt/problems/view/1177*/

#include <iostream>

int main() {
    int t,n[1000]; //Declaração de variáveis
    std::cin>>t; //Entrada de dados: valor que servirá de teto para a repetição
    int aux=-1; //Declarar e iniciar uma variável auxiliar
    if(t>=2&&t<=50) { //Restrição imposta pela exercício
        for(int i=0;i<1000;i++) { //Laço para armazenar os elementos em loop com valores de 0 à t-1
            if(aux<t-1) { //Enquanto o valor da variável auxiliar for o número anterior a t
                aux+=1; //progressão do valor
                n[i]=aux; //Atribuição a n[i]
            }
            else { //Quando aux atingi o t-1
                aux=0; //Reseta a variável aux
                n[i]=aux; //Atribui o 0 à n[i]
            }
        }
        for(int i=0;i<1000;i++) { //Laço para imprimir os valores do loop
            std::cout<<"N["<<i<<"] = "<<n[i]<<"\n";
        }
    }
    return 0;
}