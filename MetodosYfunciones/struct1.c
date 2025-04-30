/*Realizar un programa que lea un arreglo de estructuras los datos de N empleados de la empresa 
y que imprima los datos del empleado con mayor y menor salario*/

#include <stdio.h>
#include <string.h>
#define MAX 100

typedef struct {
    char nombre[50];
    float salario;
}Empleados;


int main(void){
    
    Empleados emp[MAX];
    


    int n_empleados, posM=0, posm=0;
    float mayor=0, menor=999999;
    
    printf("Digite el numero de empleado: ");
    scanf("%d", &n_empleados);
    
    for(int i=0; i<n_empleados; i++){
        printf("Digite su nombre: ");
        scanf("%s", &emp[i].nombre); //Leer las cadenas sin espacio
        printf("Digite su salario: ");
        scanf("%f", &emp[i].salario);
        //Comparar para mayor y menor salario
        if(emp[i].salario > emp[posM].salario){
            posM = i;
        }
        if(emp[i].salario < emp[posm].salario){
            posm = i;
        }
    }
    printf("\n Datos del empleado con mayor salario\n");
    printf("Nombre: %s\n", emp[posM].nombre);
    printf("Salario: %.2f\n", emp[posM].salario);

    printf("\n Datos del empleado con menor salario\n");
    printf("Nombre: %s\n", emp[posm].nombre);
    printf("Salario: %.2f\n", emp[posm].salario);

    
    return 0;
}