/*
Troco em Moedas
Bino tem que fornecer 𝐶 centavos de troco e deseja fornecer esse troco com a menor quantidade possível de moedas. Bino possui infinitas moedas de um real, cinquenta centavos, vinte e cinco centavos, dez centavos, cinco centavos e de um centavo.

Faça um programa para ler um inteiro 𝐶 representando a quantidade de centavos que Bino tem que fornecer de troca. Imprima a quantidade de moedas que Bino forneceu e em seguida imprima a quantidade de cada tipo de moeda que Bino forneceu. Tome muito cuidado com a formatação da sua saída.

Entrada
A entrada consiste de uma única linha contendo o inteiro 𝐶.

Saída
A saída consiste de sete linhas. A primeira consiste de um inteiro representando a quantidade total de moedas. A segunda consiste na quantidade de moedas de um real utilizadas. A terceira consiste na quantidade de moedas de cinquenta centavos utilizadas. A quarta consiste na quantidade de moedas de vinte e cinco centavos utilizadas. A quinta consiste na quantidade de moedas de dez centavos utilizadas. A sexta consiste na quantidade de moedas de cinco centavos utilizadas. A sétima linha consiste na quantidade de moedas de um centavo utilizadas.

Restrições
O valor fornecido não será negativo nem maior que 10000
 */

#include <iostream>

using namespace std;

int main(){
    //Declaração de variáveis
    int C;
    int Q = 0, R100 = 0, R50 = 0, R25 = 0, R10 = 0, R5 = 0, R1 = 0;
    //Entrada de dados
    cout<<"Insira o troco: ";
    cin>>C;
    if(C>0&C<10000)
    {
        while(C>0&C>=100)
        {
            C=C-100;
            R100=R100+1;
            Q=Q+1;
        }
        while(C>0&C>=50)
        {
            C=C-50;
            R50=R50+1;
            Q=Q+1;
        }
        while(C>0&C>=25)
        {
            C=C-25;
            R25=R25+1;
            Q=Q+1;
        }
        while(C>0&C>=10)
        {
            C=C-10;
            R10=R10+1;
            Q=Q+1;
        }
        while(C>0&C>=5)
        {
            C=C-5;
            R5=R5+1;
            Q=Q+1;
        }
        while(C>0&C>=1)
        {
            C=C-1;
            R1=R1+1;
            Q=Q+1;
        }
    }
    //Saída de dados
    cout<<"Quantidade de moedas: "<<Q<<endl;
    cout<<"Moedas de 1 real: "<<R100<<endl;
    cout<<"Moedas de 50 centavos: "<<R50<<endl;
    cout<<"Moedas de 25 centavos: "<<R25<<endl;
    cout<<"Moedas de 10 centavos: "<<R10<<endl;
    cout<<"Moedas de 5 centavos: "<<R5<<endl;
    cout<<"Moedas de 1 centavos: "<<R1<<endl;

    return 0;
}