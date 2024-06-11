/*https://neps.academy/br/exercise/2*/

#include <iostream>

int main() {
    int T1,T2,T3;   //Declaração de variáveis
    std::cin>>T1;   //Entrada de dados
    std::cin>>T2;
    std::cin>>T3;
    if(T1>1&&T1<1000&&T2>1&&T2<1000&&T3>1&&T3<1000) {
        if(T1<T2&&T2<T3&&T3>T1) {   // 1 2 3
            std::cout<<"1\n2\n3\n";
        }
        if(T1<T3&&T3<T2&&T2>T1) {   //1 3 2
            std::cout<<"1\n3\n2\n";
        }
        if(T2<T1&&T1<T3&&T3>T1) {   //2 1 3
            std::cout<<"2\n1\n3\n";
        }
        if(T2<T3&&T3<T1&&T1>T2) {   //2 3 1
            std::cout<<"2\n3\n1\n";
        }
        if(T3<T1&&T1<T2&&T2>T3) {   //3 1 2
            std::cout<<"3\n1\n2\n";
        }
        if(T3<T2&&T2<T1&&T1>T3) {   // 3 2 1
            std::cout<<"3\n2\n1\n";
        }
    }
    return 0;
}


