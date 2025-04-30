/* Sucursal - entera (1 a 3) Articulo - entera (1 -60) Cantidad - entero Descripción del Articulo - Cadenas de caracteres.
articulos_sucursal [index, Cantidad_sucursal_1, Cantidad_sucursal_2, Cantidad_sucursal_3, total]
articulos [index, descripcion]*/

#include <stdio.h>
#include <string.h>

#define SUCURSAL_1 1
#define SUCURSAL_2 2
#define SUCURSAL_3 3
#define TOTAL 4

int main(void){
    int articulos_sucursal[60][5] = {0}, opc=0, i, articulo_index, sucursal=0;
    char articulos [60][90]={0}, articulo[90]; 
    
    printf("\tBienvenido a la Sucursal\n\n");
    do{
        printf("Ingrese nombre del articulo que desea cargar: ");
        scanf("%s", &articulos);

     i=0;
     while(articulos[i][0] != 0 && strcmp(articulo, articulos[i])) i++;
         articulo_index = i;
         strcpy(articulos[i], articulo);
    
         printf("\n%s, Indice: %d\n", articulos[articulo_index], articulo_index);//para ver que indice toma

         printf("Para que sucursal va a realizar la carga? (1,2,3)");
         scanf("%d", &sucursal);      


        printf("Ingrese la cantidad para la sucursal %d: ", sucursal);
        scanf("%d", &articulos_sucursal[articulo_index][sucursal]);
        articulos_sucursal[articulo_index][TOTAL] = articulos_sucursal[articulo_index][SUCURSAL_1]+ articulos_sucursal[articulo_index][SUCURSAL_2] + articulos_sucursal[articulo_index][SUCURSAL_3];
        
        
        printf("Desea ingresar otro Articulo? 1-Si, 2-No");
        scanf("%d", &opc);
    }while(opc==1);
    i=0;
    printf("Articulo\tSucursal 1\tSucursal 2\tSucursal 3\tTotal\n");
    while(i<60 && articulos[i][0]){
        printf("%s\t%d\t%d\t%d\t%d\n", articulos[i], articulos_sucursal[i][SUCURSAL_1], articulos_sucursal[i][SUCURSAL_2], articulos_sucursal[i][SUCURSAL_3], articulos_sucursal[articulo_index][TOTAL]);
        i++;
    }
    //Ordenamiento
    for(opc = 0; opc < 60; opc++){
        for(i = 0; i < 59; i++){
            if(articulos_sucursal[i][TOTAL]<articulos_sucursal[i+1][TOTAL]){
                strcpy(articulo, articulo[1]);
                strcpy(articulo[i], articulo[i+1]);
                strcpy(articulo[i+1], articulo);

                articulo_index = articulos_sucursal[i][SUCURSAL_1];
                articulos_sucursal[i][SUCURSAL_1] = articulos_sucursal[i+1][SUCURSAL_1];
                articulos_sucursal[i+1][SUCURSAL_1] = articulo_index;

                articulo_index = articulos_sucursal[i][SUCURSAL_2];
                articulos_sucursal[i][SUCURSAL_2] = articulos_sucursal[i+1][SUCURSAL_2];
                articulos_sucursal[i+1][SUCURSAL_2] = articulo_index;

                articulo_index = articulos_sucursal[i][SUCURSAL_3];
                articulos_sucursal[i][SUCURSAL_3] = articulos_sucursal[i+1][SUCURSAL_3];
                articulos_sucursal[i+1][SUCURSAL_3] = articulo_index;
            }
        }
    }
    i=0;
    printf("\n\n##################ORDENADA###############################\n");
    printf("Articulo\tSucursal 1\tSucursal 2\tSucursal 3\tTotal\n");
    while(i<60 && articulos[i][0]){
        printf("%s\t%d\t%d\t%d\t%d\n", articulos[i], articulos_sucursal[i][SUCURSAL_1], articulos_sucursal[i][SUCURSAL_2], articulos_sucursal[i][SUCURSAL_3], articulos_sucursal[articulo_index][TOTAL]);
        i++;
    }
    return 0;
}

