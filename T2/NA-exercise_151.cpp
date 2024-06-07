/*https://neps.academy/br/exercise/151*/

#include <iostream>

int main() {
    //Declaração de variáveis
    int A,B,C;
    //Entrada de dados
    std::cout<<"A: ";
    std::cin>>A;
    std::cout<<"B: ";
    std::cin>>B;
    std::cout<<"C: ";
    std::cin>>C;
    //Lógica e Saída de dados
    if(A<=1000&&A>=-1000&&B<=1000&&B>=-1000&&C<=1000&&C>=-1000) {
        if(A<=B&&B<C&&C>A||A<B&&B<=C&&C>A) {
            std::cout<<A<<"\n"<<B<<"\n"<<C; //A=1 B=2 C=3 ABC (123 112 122)
        }
        if(A<=C&&C<B&&B>A) {
            std::cout<<A<<"\n"<<C<<"\n"<<B; //A=1 B=3 C=2 ACB (132 121)
        }
        if(B<A&&A<=C&&C>B) {
            std::cout<<B<<"\n"<<A<<"\n"<<C; //A=2 B=1 C=3 BAC (213 212)
        }
        if(B<=C&&C<A&&A>B) {
            std::cout<<B<<"\n"<<C<<"\n"<<A; //A=3 B=1 C=2 BCA (312 211)
        }
        if(C<A&&A<=B&&B>C) {
            std::cout<<C<<"\n"<<A<<"\n"<<B; //A=2 B=3 C=1 CAB (231 221)
        }
        if(C<B&&B<A&&A>C) {
            std::cout<<C<<"\n"<<B<<"\n"<<A; //A=3 B=2 C=1 CBA (321)
        }
        if(A==B&&B==C) {
            std::cout<<A<<"\n"<<A<<"\n"<<A; //A=1 B=1 C=1 AAA/BBB/CCC (111 222)
        }
    }
    else {
        std::cout<<"Digite um número entre -1001 e 1001";
    }

    return 0;
}

/*SEM REPETIÇÃO
A=1 B=2 C=3  ABC
A=1 B=3 C=2  ACB
A=2 B=1 C=3  BAC
A=2 B=3 C=1 CAB
A=3 B=1 C=2 BCA
A=3 B=2 C=1 CBA
COM REPETIÇÃO
A=1 B=1 C=2  ABC
A=1 B=2 C=1 ACB
A=2 B=1 C=1 BCA
A=2 B=2 C=1 CAB
A=2 B=1 C=2 BAC
A=1 B=2 C=2 ABC
A=B=C

13 combinações possíveis*/

