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
    float V_mod=0, V_ang=0;

    float I_mod=0, I_ang=0;

    float Z_mod=0, Z_ang=0;
    float Zx=0,Zy=0;

    float frec=0;

    float omega=0;

    float valor_inductor=0;
    float valor_capacitor=0;

    printf("TENSIÓN y CORRIENTE a IMPEDANCIA");

    //podria hacer una funcion para cada ingreso de datos pero no es necesario...... espero...
    printf("\nIngrese el modulo de su tension: "); scanf("%f", &V_mod);
    printf("\nAhora ingrese el angulo: "); scanf("%f", &V_ang);
    printf("\nIngrese el modulo de su corriente: "); scanf("%f", &I_mod);
    printf("\nAhora su angulo: "); scanf("%f", &I_ang);
    printf("\nPor ultimo el valor de su frecuencia: "); scanf("%f", &frec);

    Z_mod=calc_Z_mod(V_mod, I_mod);
    Z_ang=calc_Z_ang(V_ang, I_ang);

    Zx=calc_Zx(Z_mod,Z_ang);
    Zy=calc_Zy(Z_mod,Z_ang);

    //calculo omega
    omega=2*PI*frec;

    diagnostico(frec,Zy,Zx,omega,valor_capacitor,valor_inductor);

    return 0;
}

//F
float calc_Z_mod(float V_mod, float I_mod){
    return V_mod/I_mod;
}

float calc_Z_ang(float V_ang, float I_ang){
    return (V_ang-I_ang)*PI/180;
}

float calc_Zx(float Z_mod, float Z_ang){
    return Z_mod*cos(Z_ang);
}

float calc_Zy(float Z_mod, float Z_ang){
    return Z_mod*sin(Z_ang);
}

void diagnostico(float frec,float Zy,float Zx,float omega,float valor_capacitor,float valor_inductor){
    //empezamos el diagnostico. la frecuencia es 0?
    if (frec!=0){
        //hay imaginario?
        if (!(Zy==0)){
            //sí, ¿es capacitivo o inductivo?
            if (Zy<0){
                //capacitor
                valor_capacitor=1/(omega*Zy);

                printf("\nReactancia principalmente capacitiva para un posible capacitor de %fF\n",valor_capacitor);
            }else{
                //inductor
                valor_inductor=Zy/omega;

                printf("Reactancia principalmente inductiva para un posible inductor de %fH. No posee capacitancia", valor_inductor);
            }
        }else{
            printf("\nNo hay imaginario\n");
        }
    }else{
        printf("\nFrec=0. Omitimos los imaginarios\n");
    }
    

    if (Zx!=0){ //hay real?
        printf("\nSu resistencia es %fΩ\n",Zx);
    }else{
        printf("\nNo hay real\n");
    }
}
