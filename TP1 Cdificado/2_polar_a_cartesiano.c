#include <stdio.h>
#include <math.h>

#define PI 3.14159265359
#define CIENTO_OCHENTA 180

float ingreso_mod();
float ingreso_ang();
float pasaje_parte_real(float mod, float ang);
float pasaje_parte_imaginaria(float mod, float ang);
void resultados(float mod, float ang, float zx, float zy);

int main(void){
    float mod=0,ang=0;
    float zx=0,zy=0;

    printf("CONVERSOR POLAR A CARTESIANO\n");
    mod=ingreso_mod();
    ang=ingreso_ang();

    zx=pasaje_parte_real(mod, ang);
    zy=pasaje_parte_imaginaria(mod,ang);
    resultados(mod, ang, zx, zy);

    return 0;
}

float ingreso_mod(){
    float nuevo_mod=0;

    printf("Por favor ingrese el módulo de su número polar:");
    scanf("%f",&nuevo_mod);

    return nuevo_mod;
}

float ingreso_ang(){
    float nuevo_ang=0;

    printf("Por favor ingrese el ángulo de su número polar:");
    scanf("%f",&nuevo_ang);

    return nuevo_ang/CIENTO_OCHENTA*PI;
}

float pasaje_parte_real(float mod, float ang){
    float zx=mod*cos(ang); return zx;
}

float pasaje_parte_imaginaria(float mod, float ang){
    float zy=mod*sin(ang); 
    return zy;
}

void resultados(float mod, float ang, float zx, float zy){
    printf("El número polar %f e^j%f° expresado en cartesiano es %f + j%f", mod, ang, zx, zy);
}
