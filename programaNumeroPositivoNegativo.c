//Programa que pe�a um valor e mostre na tela se o valor � positivo ou negativo.
#include <stdio.h>
#include <locale.h>
int main (){
    int num;
    setlocale(LC_ALL,"Portuguese");
    printf("Digite um n�mero, direi se ele � positivo ou negativo: ");
    scanf("%i",&num);
    getchar();
    if(num < 0 ){
        printf("O n�mero %i digitado � negativo.",num);
    }else if(num > 0 ){
        printf("O n�mero %i digitado � positivo",num);
    }else{
        printf("O n�mero %i digitado � neutro",num);
    }

    return 0;
}