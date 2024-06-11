/*https://neps.academy/br/exercise/157*/

#include <iostream>

int main() {
    int N;
    std::cin>>N;
    if(N>=0&&N<=100) {
        for(int x=0;x<N;x++) {
            std::cout<<"NepsAcademy eh Sucesso\n";
        }
        return 0;
    }
}


