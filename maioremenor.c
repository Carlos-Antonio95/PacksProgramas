//Programa que pe�a dois n�meros e imprima o maior deles.
#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int n1,n2;
    printf("Digite o primeiro n�mero: ");
    scanf("%i",&n1);
    getchar();
    printf("Digite o segundo n�mero: ");
    scanf("%i",&n2);
    getchar();
    if(n1 > n2){
        printf("O maior n�mero �: %i",n1);

    }else if(n2 > n1){
        printf("O maior n�mero �: %i",n2);
    }else{
        printf("Os n�meros digitados s�o iguais.");
    }

    return 0;
}