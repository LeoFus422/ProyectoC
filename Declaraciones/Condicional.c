/*hACER un programa que simule un cajero automático con un saldo inicial de 1000 Dolares*/
#include <stdio.h>


int main(void){
    char letra;
    int saldo_inicial = 1000;
    float extra, saldo = 0, retiro;

    printf("\tBienvenido a su Cajero Virtual\n");
    printf("A. Ingresar dinero en cuenta\n");
    printf("B. Retirar dinero de la cuenta\n");
    printf("C. Salir\n");
    printf("Opcion: ");
    scanf("%s", &letra);
    switch (letra)
    {
    case 'A':
        /* code */
        printf("Digite la cantidad de dinero a ingresar: ");
        scanf("%f", &extra);
        saldo = saldo_inicial + extra;
        printf("Dinero en cuenta: %.2f", saldo);
        break;
    case 'B':
        printf("Digite la cantidad de dinero que va a retirar: ");
        scanf("%f", &retiro);
        if(retiro > saldo_inicial){
            printf("No tiene esa cantidad de dinero");
        }
        else{
            saldo = saldo_inicial - retiro;
            printf("Dinero en Cuenta: %.2f", saldo);
        }
        break;
    default:
        break;
    }

    return 0;
}