#include <stdio.h>

int main()
{
    float peso, altura, imc;
    printf("qual seu peso: ");
    scanf("%f, &peso");
    printf("digite sua altura: ");
    scanf("%f, &altura");
    imc= peso / (altura*altura);
    printf("seu IMC é: %.2f",imc);
    if(imc<=18.5){
        printf("voce está abaixo do peso");
    }else{
        printf("voce está no peso adequado");
    }
    }

    
}
