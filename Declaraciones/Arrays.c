#include <stdio.h>
#include <string.h>

int main(void){
    char nombre_apellido[20];
    int num[20][20], posicion;
    float vuelta[10][10], rango = 0.03;
    
    printf("\tBienvenido a la Formula E\n\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<1; j++){
            printf("Numero del chasis\n");
            scanf("%d", &num[i][j]);
        }
    }
    printf("Nombre y Apellido(Todo junto)");
    scanf("%s", &nombre_apellido);
    printf("Seleccione La posicion\n");
    scanf("%d", &posicion);
    switch (posicion)
    {
    case 1:
        /* code */
        for(int k=0; k<1; k++){
            for(int l=0; l<2; l++){
                printf("Vueltas Dadas: \n");
                scanf("%f", &vuelta[k][l]);
            }
        }
        if( vuelta[1][1] < 0.30){
            if(vuelta[1][2] < 0.30){
                printf("Posicion || competidor || numero || 1vuelta || 2vuelta || mejor tiempo \n");
                printf("1 - %s - %d - %f - %f - %.2f", nombre_apellido, num[1][1], vuelta[1][1], vuelta[1][2], rango);
            }
        }
        break;
    case 2:
    printf("Posicion || competidor || numero || 1vuelta || 2vuelta || mejor tiempo \n");
    printf("1 - %s - %d - %f - %f - %f", nombre_apellido, num[1][1], vuelta[1][1], vuelta[1][2], rango);
        break;
    default:
        printf("Salir");
        break;
    }
    
    
    return 0;
}