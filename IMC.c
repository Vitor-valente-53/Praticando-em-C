



#include <stdio.h>

int main()
{
    float altura;
    float peso;
    float imc;
    printf("Digete sua altura: ");
    scanf("%f",&altura);
    printf("Digete seu peso: ");
    scanf("%f",&peso);
    imc = (peso / (altura*altura));
    printf("Seu IMC:%2.f \n", imc);
    if(imc <= 18.5){
        printf("Abaixo do peso");
    }else if(imc >= 18.5 && imc <= 24.9){
        printf("Peso normal");
    }else if(imc >= 25.0 && imc <= 29.9){
        printf("Sobrepeso");
        
    }else if(imc >= 30.0 && imc <= 34.9){
        printf("Obesidade grau I");
    }else if(imc >= 35.0 && imc <= 39.9){
        printf("Obesidade grau II ");
    }else if(imc >= 40.0){
        printf("Obesidade grau III ");
    }
    
    return 0;
}
