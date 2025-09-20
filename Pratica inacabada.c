/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float num1, total,num2,somar,qtd,i =0;
    char let=0;
    
    printf("Faça oque se pede\n");
    while(i != 'n'){
        printf("\nDigite 2 valores abaixo\n\n");
        printf("Digite o primeiro numero\n");
        scanf("%f",&num1);
        printf("Digite o Segundo numero\n");
        scanf("%f",&num2);
        printf("\n Você quer somar algum numero ou encerrar o codigo(s/n)\n");
        scanf(" %c",&let);
        
        if(let=='s'){
            printf("Você quer somar qual variavel ?\n");
            printf("Para (num1) digite '1' para (num2) digite '2'\n");
            scanf("%f",&i);
            if(i==1){
                printf("Qual valor quer somar?");
                scanf("%f",&somar);
                total = somar + num1;
                printf("%.2f",total);
            }
        }else{
            printf("Erro");
        }
        
        
    }printf("Codigo encerrado com sucesso");
    
    

    

    return 0;
}
