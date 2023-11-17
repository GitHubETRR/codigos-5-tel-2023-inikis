#include <stdio.h>
int main(){
    float R1;
    float R2;
    float res;
    printf("- CALCULO DE PARALELO - \n"); 
    printf("-----------------------\n\n");
    do{
        printf("Ingrese el valor de R1: "); scanf("%f", &R1); printf("");
        printf("Ingrese el valor de R2: "); scanf("%f", &R2); printf("\n");
        res=(R1*R2)/(R1+R2); printf("El paralelo entre %d y %d es %3.3f\n\n",(int)R1,(int)R2,res);
    }while(res); //condicion para siempre preguntar. a menos que de la nada te de 0
}