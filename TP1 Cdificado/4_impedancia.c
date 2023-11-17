#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265359

//P
float calc_Z_mod(float V_mod, float I_mod);
float calc_Z_ang(float V_ang, float I_ang);
float calc_Zx(float Z_mod, float Z_ang);
float calc_Zy(float Z_mod, float Z_ang);

void diagnostico(float frec,float Zy,float Zx,float omega,float valor_capacitor,float valor_inductor);

int main(void){
    float Zx=0,Zy=0;

    float frec=0, omega=0;

    float valor_inductor=0;
    float valor_capacitor=0;

    printf("DATOS DE IMPEDANCIA");

    printf("\nEscriba el valor de su parte real: "); scanf("%f", &Zx);
    printf("\nAhora el valor de su parte imaginaria: "); scanf("%f", &Zy);
    printf("\nPor ultimo el valor de su frecuencia: "); scanf("%f", &frec);

    //calculo omega
    omega=2*PI*frec;

    diagnostico(frec,Zy,Zx,omega,valor_capacitor,valor_inductor);

    return 0;
}

//F
void diagnostico(float frec,float Zy,float Zx,float omega,float valor_capacitor,float valor_inductor){
    //empezamos el diagnostico. la frecuencia es 0?
    if (frec!=0){
        //hay imaginario?
        if (Zy!=0){
            //sí, ¿es capacitivo o inductivo?
            if (Zy<0){
                //capacitor

                valor_capacitor=1/(omega*Zy);

                printf("\nReactancia principalmente capacitiva para un posible capacitor de %2.2fF\n",valor_capacitor);
            }else{
                //inductor
                valor_inductor=omega*Zy;

                printf("Reactancia principalmente inductiva para un posible inductor de %2.2fH. No posee capacitancia", valor_inductor);
            }
        }else{
            printf("\nNo hay imaginario\n");
        }
    }else{
        printf("\nFrec=0. Omitimos los imaginarios\n");
    }
    

    if (Zx!=0){ //hay real?
        printf("\nSu resistencia es %2.2fΩ\n",Zx);
    }else{
        printf("\nNo hay real\n");
    }
}