/*https://neps.academy/br/exercise/167*/

#include <iostream>

int main() {
    int L,C,T1,T2;      //Entrada de dados
    std::cin>>L>>C;     //Entrada de dados
    if(L>=1&&C<=100) {  //Restrições
        T1=L*C+((C-1)*(L-1));   //Determinar valor do T1
        std::cout<<T1<<"\n";
        T2=((C-1)*2)+((L-1)*2); //Determinar valor do T2
        std::cout<<T2<<"\n";
    }
    return 0;
}


