//Programa que pe�a as 4 notas bimestrais e mostre a m�dia.
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    float nota,media;
    for (int  i = 1; i < 5; i++){
        printf("Digite sua %i� nota: ",i);
        scanf("%f",&nota);
        getchar();
        media = media + nota;
    }
    printf("Sua m�dia bimestral � : %.2f",media / 4);

    return 0;
}