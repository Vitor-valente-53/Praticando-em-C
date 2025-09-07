#include <stdio.h>
#include <ctype.h> // para toupper/tolower

int main()
{

   int mes;
   int menu;
   char semana;
   printf("Escolha uma opção abaixo:\nMes (1)\nSemana (2)\n");
   scanf("%d",&menu);
   if(menu == 1){
       printf("Digite o numero respectivo ao mes\n");
       scanf("%d",&mes);
       switch(mes){
           case 1 :
           printf("Janeiro \n");break;
           
           case 2 :printf("Fevereiro\n");break;
           case 3 :printf("Março \n");break;
           case 4 :printf("abril \n");break;
           case 5 :printf("maio \n");break;
           case 6 :printf("Junho \n");break;
           case 7 :printf("Juho \n");break;
           case 8 :printf("Agosto \n");break;
           case 9 :printf("Setembro \n");break;
           case 10 :printf("Outubro \n");break;
           case 11 :printf("Novembro \n");break;
           case 12 :printf("Dezembro \n");break;
           default:
           printf("opção invalida");
       }
   }else if(menu == 2){
       printf("Digite a letra inicial dia da semana: \n");
       printf("Obs: I(Quita) E(Sexta) A(Sabado)\n");
       scanf(" %c",&semana);
        semana = toupper(semana); // transforma a letra em maiúscula

       switch(semana){
           case 'S':printf("Segunda"); break;
           case 'T':printf("Terça"); break;
           case 'Q':printf("Quarta"); break;
           case 'I':printf("Quinta"); break;
           case 'E':printf("SEXTA"); break;
           case 'A':printf("Sabado"); break;
           case 'D':printf("Domingo"); break;
           default:
           printf("Valor invalido");
          
           
       }
   }
   

    
    return 0;
}
