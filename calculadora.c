#include <stdio.h>

int main() {
    int menu;
    float num1, num2, res;

    printf("-----Calculadora em C-----\n\n");

    printf("Digite o primeiro valor: ");
    scanf("%f", &num1);

    printf("Digite o segundo valor: ");
    scanf("%f", &num2);

    printf("Digite a operação desejada:\n");
    printf("(1) Soma\n(2) Subtração\n(3) Multiplicação\n(4) Divisão\n");
    scanf("%d", &menu);

    switch(menu) {
        case 1:
            res = num1 + num2;
            printf("Resultado: %.2f", res);
            break;

        case 2:
            res = num1 - num2;
            printf("Resultado: %.2f", res);
            break;

        case 3:
            res = num1 * num2;
            printf("Resultado: %.2f", res);
            break;

        case 4:
            if (num2 != 0) {
                res = num1 / num2;
                printf("Resultado: %.2f", res);
            } else {
                printf("divisão por zero não existe\n");
            }
            break;

        default:
            printf("Opção inválida!\n");
    }

    return 0;
}
