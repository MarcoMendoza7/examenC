#include <stdio.h>

int main() {
    int numero;
    int i;
    puts("Introduce un número ...");
    scanf("%d", &numero);
    printf("Tabla de multiplicar del %d\n", numero);
    i = 0;
    while(i <= 1000) {
        printf("%d * %d = %d\n", numero, i, numero*i);
        i++;
    }
    
    printf("\nTabla de multiplicar de manera descendente\n");
    i = 1000;
    while(i >= 0) {
        printf("%d * %d = %d\n", numero, i, numero*i);
        i--;
    }
    puts("FIN DEL PROGRAMA");
}