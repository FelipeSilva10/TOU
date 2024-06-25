/*https://neps.academy/br/exercise/1212*/

#include <iomanip> //Biblioteca para funcionar o setprecision
#include <iostream>

using namespace std;

double soma_vetor(int n, int v[]){ //Função para calcular a média dos índices de v[]
    double media=0; //Declarar, em double, e iniciar soma
    for(int i=0;i<n;i++) { //Laço de repetição
        media += v[i]; //Soma v[] à soma e atribuí a variável soma
    }
    media = media/n; //Calculo da média
    return media; //Retorna a variável media contendo a média de todos os índices de v[]
}

int main(){ //Função principal

    int n, v[100100]; //Declaração de variáveis (n=variável que define a quantidade de entrada posteriores, v= variável que armazenará as entradas)
    cin >> n; //Entrada de dados: números inteiros atribuídos à n

    for(int i=0;i<n;i++) { //Função de entrada de dados nos índices de v[]
        cin >> v[i]; //Entrada de dados: entrada de dados para o índice correspondente à v[]
    }
    cout << fixed << setprecision(2) << soma_vetor(n, v) << "\n"; //Resultado final da média de todas as entradas definidas com 2 casas decimais
}


