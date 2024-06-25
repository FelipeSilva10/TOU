/*https://neps.academy/br/exercise/396*/

#include <iostream>

int main(){
    int n,contagem=0,lista[10],indice[10]; //Declaração de variáveis
    for(int i=0;i<10;i++) { //Laço de repetição para ler valores para lista[]
        std::cin>>lista[i]; //Armazenando elementos no índice, definido por i, da lista[i]
    }
    std::cin>>n; //Entrada de dados: número que será buscado na lista[10]
    for(int i=0;i<10;i++) { //Laço de repetição para comparar todos os 10 índices com n
        if(n==lista[i]) { //Comparar n com o elemento do índice da vez
            contagem+=1; //Se for igual, somar +1 na variável contagem
            indice[i]=i; //Atribuir esse índice da lista[i] como elemento em indice[i]
        }
    }
    if(contagem>0) { //Se n estiver presente em lista[] pelo menos uma vez
        std::cout<<contagem<<"\n"; //Imprimir quantas vezes n apareceu em lista[]
        for(int i=0;i<10;i++) { //Laço de repetição para exibir os índices dos elementos igual à n
            if(n==lista[i]) {
                std::cout<<indice[i]<<" ";
            }
        }
    }
    else { //Caso não haja nenhum elemento igual a n na lista[]
        std::cout<<"Mia x";
    }

}


