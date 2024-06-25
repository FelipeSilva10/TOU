/*https://judge.beecrowd.com/pt/problems/view/1172*/

#include <iostream>

int main(){
    int x[10]; //Declaração de variável com 20 elementos [0-9]
    for(int i=0;i<10;i++) { //Laço de repetição, do 0 ao 9
        std::cin>>x[i]; //Atribuição à variável x no índice de acordo com a variável i
    }
    for(int i=0;i<10;i++) { //Laço de repetição, do 0 ao 19
        int y; //Variável para filtrar os números menores que 1
        if(x[i]>0){ //Se o dado contido na variável for maior que 0
            y=x[i]; //armazena em y e imprimi no final
        }
        else{ //Se o dado contido na variável for menor, ou igual, à 0
            y=1; //Atribui 1 à y e imprimi
        }
        std::cout<<"X["<<i<<"] = "<<y<<"\n"; //Impressão com o índice [0-19] e o que está armazenado nos índices, se for maior que 0
    }
    return 0;
}