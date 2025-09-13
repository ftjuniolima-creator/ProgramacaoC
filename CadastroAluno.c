#include<stdio.h>
int idade;
float altura;
char nome[50];
int matricula;
int main (){
    printf("Entre com sua idade: \n");
    scanf("%d", &idade);

    printf("Entre com sua altura: \n");
    scanf("%f", &altura);

    printf("Entre com seu nome: \n");
    scanf("%s", nome);

    printf("Entre com sua matricula: \n");
    scanf("%d", &matricula);

    printf("-----Dados Cadastrados-----\n");

    printf("Sua idade é: %d \n", idade);
    printf("Sua altura é: %.2f \n", altura);
    printf("Seu nome é: %s \n", nome);
    printf("Sua matricula é: %d \n", matricula);
}