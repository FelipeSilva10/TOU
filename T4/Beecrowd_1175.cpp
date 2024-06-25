/*https://judge.beecrowd.com/pt/problems/view/1175*/

#include <iostream>

int main(){
    int n[20]; //Declaração de variável com 20 elementos
    for(int i=0;i<20;i++) { //Laço de repetição, do 0 ao 19
        std::cin>>n[i]; //Atribuição à variável n no índice de acordo com a variável i
    }
    for(int i=19;i>-1;i--) { //Laço de repetição, do 19 ao 0
        std::cout<<"N["<<abs(i-19)<<"] = "<<n[i]<<"\n"; //Impressão com o índice [0-19] e o que está armazenado nos índices ao inverso
    }
    return 0;
}