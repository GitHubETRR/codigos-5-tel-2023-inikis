#include <stdio.h>
#include <math.h>

#define PI 3.14159265359

float ingresar_real();
float ingresar_imaginario();
float pasaje_a_modulo(float zx,float zy);
float pasaje_a_angulo(float zx,float zy);
void resultados(float zx, float zy, float mod, float ang);

int main(){
    float zx=0,zy=0;
    float mod=0,ang=0;

    printf("CONVERSOR CARTESIANO A POLAR\n");
    zx=ingresar_real();
    zy=ingresar_real();

    mod=pasaje_a_modulo(zx,zy);
    ang=pasaje_a_angulo(zx,zy);

    resultados(zx,zy,mod,ang);

    return 0;
}

float ingresar_real(){
    float zx=0;
    printf("Por favor, ingrese la parte real de su numero cartesiano: ");
    scanf("%f",&zx);
    return zx;
}

float ingresar_imaginario(){
    float zy=0;
    printf("\nY ahora su parte imaginaria: ");
    scanf("%f",&zy);
    return zy;
}

float pasaje_a_modulo(float zx,float zy){
    float mod=0;
    mod=sqrt(pow(zx,2) + pow(zy,2));

    return mod;
}

float pasaje_a_angulo(float zx,float zy){
    float ang=0;
    ang=(atan2(zy,zx)*180/PI);

    return ang;
}

void resultados(float zx, float zy,float mod,float ang){
    printf("Su numero cartesiano %f j%f expresado en polar es %fe^j%f°",zx,zy,mod,ang);
}
