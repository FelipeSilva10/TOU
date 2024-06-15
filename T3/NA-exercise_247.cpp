/*https://neps.academy/br/exercise/247*/

#include <iostream>

using namespace std;

bool eh_primo(int x) {
    if(x>=1&&x<=100000) {
        if(x%x==0 && x%1==0 && x%2!=0) {
            return true;
        }
        else {
            return false;
        }
    }
}

int main(){
    int x;

    cin>>x;

    if(eh_primo(x)==true){
        cout << "S" << "\n";
    }else{
        cout << "N" << "\n";
    }
}



