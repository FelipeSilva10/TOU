/*https://neps.academy/br/exercise/326*/

#include <iostream>

using namespace std;

int soma_vetor(int n, int v[]){ //Função para somar os índices de v[]
    int soma=0; //Declarar e iniciar soma
    for(int i=0;i<n;i++) { //Laço de repetição para somar os índices de v[]
        soma += v[i]; //Soma v[] à soma e atribuí a variável soma
    }
    return soma; //Retorna a variável soma contendo a soma de todos os índices de v[]
}

int main(){ //Função principal

    int n, v[100100]; //Declaração de variáveis (n=variável que define a quantidade de entrada posteriores, v= variável que armazenará as entradas)
    cin >> n; //Entrada de dados: números inteiros atribuídos à n

    for(int i=0;i<n;i++) { //Função de entrada de dados nos índices de v[]
        cin >> v[i]; //Entrada de dados: entrada de dados para o índice correspondente à v[]
    }
    cout << soma_vetor(n,v) << "\n"; //Resultado final da soma de todas as entradas definidas
}


