//Método Burbuja

#include <stdio.h>


int main(void){
    int num[] = {4,1,2,3,5};
    int aux = 0;
    
    //Algoritmo del metodo burbuja
    for(int i = 0; i<5; i++){
        for(int j=0; j<5; j++){
            if(num[j] > num [j+1]){
                aux= num [j];
                num[j] = num [j+1];
                num [j+1] = aux;
            }
        }
    }
    printf("Orden Ascendente: ");
    for(int i = 0; i<5; i++){
        printf("%d", num[i]);
    }

    return 0;
}