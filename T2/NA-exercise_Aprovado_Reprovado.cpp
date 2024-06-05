/*Aprovado ou Reprovado
No Colégio Neps Academy (CNA) um aluno é aprovado por média se ele obtiver uma média final maior ou igual a 7,
caso o aluno tenha uma média menor que 7 mas maior ou igual a 4 ele está de recuperação,
caso ele tenha uma média menor que 4 o aluno está reprovado.

A média é calculada com a nota das duas provas aplicadas no semestre e corresponde simplesmente a média aritimética das duas notas.
Baseado nas duas notas do aluno, indique o resultado final do aluno: "Aprovado", "Reprovado" ou "Recuperacao".

Entrada
A entrada consiste de apenas uma linha com as notas A e B, que correspondem as duas notas que o aluno conquistou esse semestre.

Saída
A saída do seu programa deve ser apenas uma linha.
Caso o aluno tenha sido aprovado informe "Aprovado",
caso o aluno tenha sido reprovado informe "Reprovado"
e caso ele esteja de recuperação informe "Recuperacao".*/

#include <iostream>

int main() {
    //Declaração de variáveis
    int A,B,MF=0;

    //Entrada de dados
    std::cout<<"Insira a nota da primeira prova: ";
    std::cin>>A;
    std::cout<<"Insira a nota da segunda prova: ";
    std::cin>>B;
    //Lógica e Saída de dados
    MF=(A+B)/2;

    if(MF>=7) {
    std::cout<<"Aprovado.";
    }
    if(MF<7&&MF>=4) {
        std::cout<<"Recuperação";
    }
    if(MF<4) {
        std::cout<<"Reprovado.";
    }
    return 0;
}


