#include <stdio.h>
#include <string.h>

int main(void){
    char str[] = "Hola Mundo!";
    char slice[20];

    strncpy(slice, &str[6], 5);
    slice[5] = '\0';

    printf("Slice: %s\n", slice);

    return 0;
}