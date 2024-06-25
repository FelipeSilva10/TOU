/*https://neps.academy/br/exercise/1235*/

#include <iostream>

int main(){
    int N,X,V[1000]; //Declaração de variáveis
    std::cin>>N;
    for(int i=0;i<N;i++) {
        std::cin>>V[i];
    }
    std::cin>>X;
    for(int i=0;i<N;i++) {
        if(X==V[i]) {
            std::cout<<"pertence\n";
            break; //Quebra o laço de repetição, pois já achou e assim não se repita
        }
        else {
            std::cout<<"nao_pertence\n";
            break;
        }
    }
    return 0;
}



