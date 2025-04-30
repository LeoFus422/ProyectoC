/*Escriba un programa que lea valores enteras hasta que se introduzca un valor en el rango [20-30]
o se introduzca el valor 0. El programa debe entregar la suma de los valores mayores a 0 introducidos. */
#include <stdio.h>

int main(void){
    int num, suma = 0;

    do{
        printf("Digite un numero: ");
        scanf("%d", &num);
        if(num > 0){
            suma = suma + num;
        }
    }while(((num < 20) || (num > 30)) && (num != 0));
    printf("\nLA suma es: %d\n", suma);


    return 0;
}