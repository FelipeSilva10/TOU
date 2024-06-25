/*https://neps.academy/br/exercise/196*/

#include <iostream>

int main() {
    int Lista1, Lista2, ArrayLista1[50], ArrayLista2[10000]; //Declaração de variáveis: Lista1=N, Lista2=Q
    std::cin >> Lista1; //ler um inteiro
    for (int i = 0; i < Lista1; i++) {
        //Ler Lista1 inteiros
        std::cin >> ArrayLista1[i];
    }
    std::cin >> Lista2; //ler um inteiro
    for (int i = 0; i < Lista2; i++) {
        //Ler Lista2 inteiros
        std::cin >> ArrayLista2[i];
    }
    //Verificar se o elemento do índice da Lista2 é igual à algum elemento da Lista1
    for (int i = 0; i < Lista2; i++) { //Rodar todos os índices da ArrayLista2[i]
        int aux=0; //Variável auxiliar para evitar repetição de "Sim" e "Nao", default 0 para "Não"
        for (int x = 0; x < Lista1; x++) { //Rodar todos os índices da ArrayLista1[i]
            if (ArrayLista2[i] == ArrayLista1[x]) { //Todos os elementos da ArrayLista2[i] serão comparados com os da ArrayLista1[x] *
                aux+=1; //Adiciona 1 à variável confirmando que há o elemento da ArrayLista2 na ArrayLista1
            }
        }
        if(aux>0) { //Há na Lista1
            std::cout<<"Sim\n";
        }
        if(aux==0) { //Não há na Lista1
            std::cout<<"Nao\n";
        }
    }
    return 0;
}

/* *Exemplo:
ArrayLista2[0] == ArrayLista1[0]
ArrayLista2[0] == ArrayLista1[1]
ArrayLista2[0] == ArrayLista1[2]
ArrayLista2[0] == ArrayLista1[3]
...
ArrayLista2[1] == ArrayLista1[0]
ArrayLista2[1] == ArrayLista1[1]
...
ArrayLista2[2] == ArrayLista1[0]
*/
