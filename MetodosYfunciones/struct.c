
#include <stdio.h>
#include <string.h>

struct Persona{
    char nombre[20];
    int edad;
    float altura;
};



int main(void){
    
    struct Persona p1;

    strcpy(p1.nombre, "Leonel");
    p1.edad = 30;
    p1.altura = 1.75;

    printf("Nombre: %s\n", p1.nombre);
    printf("Edad: %i\n", p1.edad);
    printf("Altura: %f\n", p1.altura);

    return 0;
}