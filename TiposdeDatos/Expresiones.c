#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    int x;
    float y = 0;
    
    printf("-------BIENVENIDA!!----------");
    scanf("%d", &x);
    
    y =  (3*pow(x, 3)-1)/(pow(x, 3)+pow(x, 2)+3*x-2);

    
    printf("NUMERO: %.2f", y);
    
    printf("\n");
    system("PAUSE");
    return 0;
}