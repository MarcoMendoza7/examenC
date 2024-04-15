#include <stdio.h>

int main (){
    int cliente;
    float cantidad;
    float descuento;
    float resultado;
    float cantidadDos;
    float descuentoDos;
    float resultadoDos;

    puts("Ingrese el numero 1 si es cliente. Numero 2 si no lo es");
    scanf("%d", &cliente);
    if(cliente == 1){
        puts("Ingrese la cantidad en pesos");
        scanf("%f", &cantidad);
        descuento = cantidad * 0.20;
        resultado = cantidad - descuento;
        printf("Su resultado final es = %f\n", resultado);
    }else{
        puts("Ingrese la cantidad en pesos");
        scanf("%f", &cantidadDos);
        descuentoDos = cantidadDos * 0.05;
        resultadoDos = cantidadDos - descuentoDos;
        printf("Su resultado final es = %f\n", resultadoDos); 
    }
    puts("FIN DEL PROGRAMA.");
}