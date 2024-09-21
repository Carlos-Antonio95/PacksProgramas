#include <stdio.h>
#include <locale.h>
#include <windows.h>

/*Segue uma lista com 10 exerc�cios de l�gica de programa��o em C, utilizando as estruturas de controle if, if-else, switch, while, do-while e for. Certifique-se de utilizar os comandos de entrada e sa�da adequados para receber os dados e exibir os resultados. N�o se autossabote! Execute os exerc�cios com dedica��o para alcan�ar sucesso em seus objetivos.

1. Verifica��o de Par ou �mpar
Escreva um programa que receba um n�mero inteiro do usu�rio e use a estrutura if-else para verificar se o n�mero � par ou �mpar. O programa deve exibir o resultado correspondente.

2. Calculadora Simples com switch
Crie um programa que simule uma calculadora simples. O usu�rio deve inserir dois n�meros e uma opera��o (adi��o, subtra��o, multiplica��o ou divis�o). Use o switch para realizar a opera��o correta e exibir o resultado.

3. Verificar Maior de Tr�s N�meros
Escreva um programa que receba tr�s n�meros inteiros e use if-else para determinar e exibir qual deles � o maior.

4. Imprimir N�meros de 1 a 100 (Com for)
Crie um programa que imprima todos os n�meros de 1 a 100 usando a estrutura for.

5. Soma de N�meros Pares (Com while)
Escreva um programa que calcule e exiba a soma de todos os n�meros pares de 1 a 100. Use a estrutura while para realizar a soma.

6. N�mero Fatorial (Com do-while)
Escreva um programa que pe�a ao usu�rio um n�mero inteiro positivo e calcule o fatorial desse n�mero usando a estrutura do-while. O fatorial de um n�mero n � a multiplica��o de todos os n�meros de 1 at� ??.

7. Menu de Op��es (Com switch)
Crie um programa que exiba um menu com as seguintes op��es:

Verificar se um n�mero � positivo ou negativo.
Verificar se um n�mero � par ou �mpar.
Sair do programa. O programa deve usar switch para escolher a op��o e realizar a a��o correspondente.

8. C�lculo de M�dia Aritm�tica
Escreva um programa que receba quatro notas de um aluno e calcule a m�dia aritm�tica. O programa deve usar if-else para verificar se a m�dia � maior ou igual a 7.0 e exibir se o aluno est� aprovado ou reprovado.

9. Tabuada de um N�mero (Com for)
Escreva um programa que pe�a ao usu�rio um n�mero inteiro e exiba a tabuada desse n�mero de 1 a 10, usando a estrutura for.

10. Soma de N�meros at� Zero (Com do-while)
Crie um programa que receba n�meros inteiros do usu�rio e v� somando esses n�meros. O programa deve parar de pedir n�meros e exibir a soma total quando o usu�rio inserir o n�mero 0. Use a estrutura do-while para realizar essa tarefa.*/

int main(){
    setlocale(LC_ALL,"Portuguese");
    //Variaveis usado no primeiro programa
    int operacao;
    int n1exe1;
    //Variaveis usado no segundo programa
    float n1exe2,n2exe2;
    char opexe2;
    //Variaveis usada no terceiro programa
    int n1,n2,n3;

    //Variaveis usada no quinto programa
    int somaexe5 =0;
    int paresexe5 = 0;

    //Variaveis usada no sexto programa
    int fatoexe6, numexe6;
        fatoexe6 = 1;

    //Variaveis usada no setimo programa
     int opcaoexe7,numeroexe7;
     //Variaveis usada no oitavo programa
     float notaexe8,mediaexe8;

     //Variaveis usada no novo programa
      int numeroexe09, tabuadaexe09;

    //Variaveis usada no decimo programa
    int numeroexe10;
    int somadorexe10 = 0;

    int x = 0;
    while (x == 0)//estrutura de repeti��o para n�o finalizar o programa no fim de cada uso.
    {

    
    printf("\nQual quest�o deseja ver ? 1 a 10 (Digite 0 para finalizar o programa): ");//Pergunta ao usuario qual quest�o ele deseja acessar
    scanf("%i",&operacao);
    switch (operacao){
    case 1:
        
        printf("Digite um n�mero verificarei se � �mpa ou par: ");
        scanf("%i",&n1exe1);
        getchar();
        if(n1exe1 % 2 == 0){
            printf("\nO n�mero %i � par.",n1exe1);
        }else{
            printf("\nO n�mero %i � �mpar.",n1exe1);
        } 
    break;

    case 2:
    printf ("Digite o primeiro e segundo n�mero: ");
    scanf("%f %f",&n1exe2,&n2exe2);
    getchar();
    printf("Digite a opera��o aritimetrica que deseja fazer(+ / - *)");
    scanf(" %c",&opexe2);
    switch (opexe2){
    case '+':
        printf("A soma entre %.0f e %.0f equivale a: %.0f",n1exe2,n1exe2,n1exe2+n2exe2);
        break;
    case '-':
        printf("A subtra��o entre %.0f e %.0f equivale a: %.0f",n1exe2,n1exe2,n1exe2-n2exe2);
        break;
    case '/':
        if(n2exe2 == 0 || n1exe2 == 0){
            printf("N�o � possivel dividir um n�mero por 0");
        }else{
            printf("A divis�o entre %.0f e %.0f equivale a: %.2f",n1exe2,n1exe2,n1exe2/n2exe2);  
        }
        break;
    case '*':
        printf("A multiplica��o entre %.0f e %.0f equivale a: %.2f",n1exe2,n1exe2,n1exe2*n2exe2);
        break;
    default:
        printf("Opera��o aritimetrica invalida.");
        break;
    }
    break;

    case 3:
    
    printf("Digite 3 n�meros consecutivos e direi qual � o maior dos 3: ");
    scanf("%i %i %i",&n1,&n2,&n3);
    getchar;
    if(n1 >= n2 && n1 >= n3){
        printf("O maior n�mero � %i",n1);
    }else if(n2 >= n1 && n2 >= n3){
        printf("O maior n�mero � %i",n2);
    }else if(n3 >= n1 && n3 >= n2){
        printf("O maior n�mero � %i",n3);
    }else{
        printf("Todos os n�meros s�o iguais");
    }

    break;
    
    case 4:
    for(int i = 1; i <=100; i++){
        printf("%i ",i);
    }

    break;

    case 5:
        while (paresexe5 < 100){
            paresexe5 = paresexe5 + 2;
            printf("%i ",paresexe5);
        
            somaexe5 = paresexe5 + somaexe5;
        

        }
    printf(" = %i",somaexe5);

    break;

    case 6:
        printf("Digite um n�mero, mostrarei o fatorial dele: ");
        scanf("%i",&numexe6);
        getchar;
        printf("%i! = ",numexe6);
        while (numexe6 > 1){
            fatoexe6 = fatoexe6 * numexe6;
            printf("%i x ",numexe6);
            numexe6 = numexe6 -1;
        }
        printf("1 = %i",fatoexe6);

    break;

    case 7:

        do{

        printf("Digite um n�mero: ");
        scanf("%i",&numeroexe7);
        getchar();
        printf("        Menu\n");
        printf("1. verificar se o n�mero � positivo ou negativo.\n");
        printf("2. Verificar se o n�mero � par ou impar.\n");
        printf("3. Sair do programa.\n");
        printf("Escolha sua op��o: ");
        scanf("%i",&opcaoexe7);

        switch(opcaoexe7){
            case 1:
                if(numeroexe7 >= 1){
                    printf("O n�mero %i � positivo.\n",numeroexe7);
                }else{
                    printf("O n�mero %i � negativo.\n",numeroexe7);
                }

            break;
            case 2:
                if (numeroexe7 % 2 == 0){
                printf("O n�mero %i � par.\n",numeroexe7);
                }else{
                    printf("O n�mero %i � impar.\n",numeroexe7);
                }
            case 3:
                printf("Saindo do programa...");
                break;
                
            default:
            printf("Op��o invalida.");
            break;
            }
        } while (opcaoexe7 != 3);




    break;

    case 8:
        for (int i = 1; i <= 4; i++)
        {
            printf("Digite sua %i� nota: ",i);
            scanf("%f",&notaexe8);
            mediaexe8 = mediaexe8 + notaexe8;
        }
        if (mediaexe8 / 4 >= 7){
            printf("O aluno foi aprovado. Com m�dia %.2f",mediaexe8/4);
        }else{
            printf("O aluno foi reprovado. Com m�dia %.2f",mediaexe8/4);
        }

    break;

    case 9:
        printf("Digite um n�mero: ");
        scanf("%i",&numeroexe09);
        getchar();
        printf("Tabuada de soma\n");
        for (int i = 0 ; i <11; i++ ){
            printf("%i + %i = %i\n",i,numeroexe09,numeroexe09+i);
        }
        printf("Tabuada de sutra��o\n");
        for (int i = 0 ; i <11; i++ ){
            printf("%i - %i = %i\n",i,numeroexe09,numeroexe09-i);
        }
        printf("Tabuada de mult\n");
        for (int i = 0 ; i <11; i++ ){
            printf("%i x %i = %i\n",i,numeroexe09,numeroexe09*i);
        }
        printf("Tabuada de div\n");
        for (int i = 0 ; i <11; i++ ){
            printf("%i / %i = %i\n",i,numeroexe09,numeroexe09/i);
        }

    break;

    case 10:

        do{
        printf("Digite um n�mero: ");
        scanf("%i",&numeroexe10);
        somadorexe10 = somadorexe10 + numeroexe10;
        printf("\nA soma dos n�meros digitados �: %i\n",somadorexe10);
        printf("Digite 0 para sair.");



        }while(numeroexe10 != 0);


    break;

    case 0:
    x = x +1;
    break;
    
    default:
    printf("Opera��o invalida.");
        break;
    }


}
   
    Sleep(500);//Comando para melhor intera��o do us�ario, da uma pausa em milisegundos.
    printf("Finalizando programa...");


return 0;


}