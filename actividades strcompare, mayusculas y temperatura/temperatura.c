#include <stdio.h>

#define CANT_TEMP 10

int ingresar_temp();
float calc_promedio(int []);
void buscar_temp_max_min(int []);
void temp_10_20(int []);
void ordenar(int []);

int main(void){
    int temperaturas[CANT_TEMP]={0};

    for (int i = 0; i < CANT_TEMP; i++){
        temperaturas[i]=ingresar_temp();
    }

    calc_promedio(temperaturas);
    buscar_temp_max_min(temperaturas);
    temp_10_20(temperaturas);
    ordenar(temperaturas);

    return 0;
}

int ingresar_temp(){
    int temp = 0;
    printf("Ingrese una temperatura: \n");
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

    printf("\nEl promedio de las temperaturas es: %2.2f\n",promedio);

    return promedio;
}

void buscar_temp_max_min(int temperaturas[]){
    int nuevo_max=0;
    int nuevo_min=0;

    for (int i=0; i < CANT_TEMP; i++){
        if (temperaturas[i]>nuevo_max){
            nuevo_max=temperaturas[i];
        }else{
            nuevo_min=temperaturas[i];
        }
    }

    printf("\nTemperatura maxima: %d\n", nuevo_max);
    printf("Temperatura minima: %d\n", nuevo_min);
}

void temp_10_20(int temperaturas[]){
    int cant_10=0;
    int cant_20=0;

    for (int i = 0; i < CANT_TEMP; i++){
        if (temperaturas[i]>10){
            cant_10++;
        }
        if (temperaturas[i]<20){
            cant_20++;
        }
    }
    printf("\nCantidad de veces que la temperatura sobrepasa los 10 grados: %d\nCantidad de veces que es inferior a los 20: %d\n",cant_10,cant_20);
}

void ordenar(int temperaturas[]){
    int temp_a_mover=0;

    for (int i = 0; i < CANT_TEMP; i++){
        for (int j = 0; j < CANT_TEMP-1; j++){
           if (temperaturas[j]<temperaturas[j+1]){
                temp_a_mover=temperaturas[j]; //guardo la temperatura que voy a mover
                temperaturas[j]=temperaturas[j+1]; //basicamente muevo la temp. siguiente, un lugar para atras
                temperaturas[j+1]=temp_a_mover; //la temperatura que voy a mover es ahora la temp. siguiente
           }
        }
    }

    //mostrar las temperaturas
    printf("\nLas temperaturas quedaron asi:\n");
    for (int i = 0; i < CANT_TEMP; i++){
        printf("%d - %d\n",i,temperaturas[i]);
    }
}
