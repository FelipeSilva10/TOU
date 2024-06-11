/*https://neps.academy/br/exercise/1529*/

#include <iostream>

int main() {
    float X; //Declaração de variáveis
    int J=0;
    for(int x=0;x<8;x++) {
        std::cin>>X;
        if(X>1.80) {
            J=J+1;
        }
    }
    std::cout<<J<<" jogadores encontrados";
    return 0;
}


