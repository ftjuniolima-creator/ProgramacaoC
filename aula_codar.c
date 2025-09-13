#include<stdio.h>
float temperatura, umidade;
unsigned int estoque, estoqueMinimo = 1000;

int main (){
    printf(" entre com a temperatura : \n");
    scanf ("%f", &temperatura);

    printf("entre com a umidade: \n");
    scanf("%f", &umidade);

    printf("entre com o estoque: \n");
    scanf("%u", &estoque);

    if (temperatura > 30 ){
        printf("Temperatura está alta! \n" );
    } 
    else {
        printf("A temperatura está dentro dos parametros. \n "); 
    }

    if (umidade > 50){
        printf("Umidade está elevada!\n");
    }
    else{
        printf("Umidade está dentro dos parametros. \n");
    }

    if (estoque < estoqueMinimo){
        printf ("Estoque abaixo do minimo, relizar compras!\n");
    }
    else{
        printf("Estoque dentro do aceitavel! \n");
    }

}