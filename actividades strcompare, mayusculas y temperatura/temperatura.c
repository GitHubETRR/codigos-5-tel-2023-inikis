#include <stdio.h>

#define CANT_TEMP 10

int ingresar_temp();
float calc_promedio(int []);
void temp_max_min(int []);
void temp_10_20(int []);

typedef struct{
    int max;
    int min;
}max_min;

int main(void){
    int temperaturas[CANT_TEMP]={15,20,21,21,26,27,31,32,33,33};
    /*
        for (int i = 0; i < CANT_TEMP; i++){
        temperaturas[i]=ingresar_temp();
    }
    */

    calc_promedio(temperaturas);

    return 0;
}

int ingresar_temp(){
    int temp = 0;
    printf("\nIngrese una temperatura: ");
    scanf("%d",&temp);
    return temp;
}

float calc_promedio(int temperaturas[]){
    float promedio;
    int suma=0;
    for (int i=0; i < CANT_TEMP; i++){
        suma += temperaturas[i];
    }
    promedio = suma/CANT_TEMP;
    return promedio;
}

void buscar_temp_max_min(int temperaturas[]){
    max_min temp_max_min;
    int nuevo_max;
    int nuevo_min;
    for (int i=0; i < CANT_TEMP; i++){
        
    }
}
