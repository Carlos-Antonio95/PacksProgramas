// programa que leia 5 n�meros e informe a soma e a m�dia dos n�meros.
#include <stdio.h>
#include <locale.h>
int main(){
    float soma,media,num;
    setlocale(LC_ALL,"Portuguese");
    for (int i = 01; i < 6; i++){
        printf("Digite o %i� n�mero: ",i);
        scanf("%f",&num);
        soma += num;
    }
    media = soma / 5;
    printf("A soma de todos os valores digitados �: %.2f\n",soma);
    printf("A m�dia dos valores digitados �: %.2f",media);
    

    return 0;
}