#include <stdio.h>

int main()
{
    int numero,vezes,i, resultando=0;
    printf("Digite a quantidade de repetição ");
    scanf("%d",&vezes);
    for(i=0;i<=vezes;i++){
        printf("\n\nDigite numeros da sorte\n");
        scanf("%d",&numero);
        resultando = numero + resultando;
        printf("\n<---------------------------->\n");
        printf("Esse é a soma dos seus numeros %d",resultando);
        printf("\n<---------------------------->");
    }

    
    return 0;
}
