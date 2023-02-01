#include <stdio.h>

int main(void){

float x=0, y=0 , resultado=0;
int op=0; // responsavel por saber qual tipo de calculo o user deseja realizar

do {
    printf("\nBem vindo!\n\t1 - SOMA\n\t2 - SUBTRACAO\n\t3 - MULTIPLICACAO\n\t4 - DIVISAO");
        printf("\n\t");
        scanf("%i" , &op);
    printf("\nDigite o primeiro numero: ");
        scanf("%f" , &x);
    printf("\nDigite o segundo numero: ");
        scanf("%f" , &y);

        switch(op){
            case 1/*SOMA*/:
                resultado = x+y;
                break;
            case 2 /*SUBTRACAO*/:
                resultado = x-y;
                break;
            case 3 /*MULTIPLICACAO*/:
                resultado = x*y;
                break;
            case 4 /*DIVISAO*/:
                resultado = x/y;
                break;
            default:
            printf("\nDigite uma opção valida\n");
            break;
        }

    printf("\nO resultado e : %0.2f" , resultado);
    printf("\nDigite 1 para continuar\n");
    scanf("\n%i" , &op);


} while (op == 1);
 
 return 0;
}