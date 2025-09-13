#include<stdio.h>
int idade; //variavel do tipo inteiro
float altura; //variavel do tipo ponto flutuante
double peso; //variavel do tipo double
char nome[30]; //vetor de caracteres. O [] indica o tamanho do vetor.
int main (){
    printf("Entre com sua idade: \n");
    scanf("%d", &idade); //& indica o endereço da variavel e o %d indica que é um numero inteiro.

    printf("Entre com sua altura: \n");
    scanf("%f", &altura); //%f indica que é um numero float.

    printf("Entre com seu nome: \n");
    scanf("%s", &nome); //%s indica que é uma string. Não precisa do & pois o nome já é um vetor.

    printf("Entre com seu peso: \n");
    scanf("%lf", &peso); //%lf indica que é um numero double.

    printf("-----Dados Cadastrados-----\n");

    printf("Sua idade é: %d \n", idade); //%d dentro das aspas indica que é um numero inteiro.
    printf("Sua altura é: %.2f \n", altura); //%.2f indica que é um numero float com 2 casas decimais.
    printf("Seu nome é: %s \n", nome);
    printf("Seu peso é: %.2lf \n", peso); //%.2lf indica que é um numero double com 2 casas decimais.
}