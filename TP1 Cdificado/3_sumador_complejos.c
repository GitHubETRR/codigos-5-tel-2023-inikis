#include <stdio.h>
#include <math.h>

#define OPCION_CARTESIANO 1
#define OPCION_POLAR 2
#define PI 3.14159265359

float suma_reales(float zx1,float zx2);
float suma_imaginario(float zy1,float zy2);
void expresar_resultado(float zxf,float zyf);
void expresar_cartesiano(float zxf,float zyf);

int main(void){
    //cartesiano 1
    float zx1=0,zy1=0;
    //cartesiano 2
    float zx2=0,zy2=0;
    //cartesiano suma
    float zxf=0,zyf=0;
    printf("SUMADOR DE DOS NUMEROS COMPLEJOS RECTANGULARES\n");

    //aca se podria hacer una funcion para obtener cada variable pero estoy muy cansado profe. no veo a mi familia hace años. extraño a mis hijos.
    printf("\nPor favor, ingrese el valor X del primer número complejo: "); 
    scanf("%f",&zx1);
    printf("\nAhora ingrese el valor Y del mismo numero: "); 
    scanf("%f",&zy1);
    printf("\nEscriba el valor X del segundo numero: "); 
    scanf("%f",&zx2);
    printf("\nPor ultimo, el valor Y: "); 
    scanf("%f",&zy2);

    zxf=suma_reales(zx1,zx2); zyf=suma_imaginario(zy1,zy2);

    expresar_resultado(zxf,zyf);

    return 0;
}

float suma_reales(float zx1,float zx2){
    float zxf;
    zxf=zx1+zx2; 
    return zxf;
}

float suma_imaginario(float zy1,float zy2){
    float zyf;
    zyf=zy1+zy2; 
    return zyf;
}

void expresar_resultado(float zxf,float zyf){
    printf("\n¿Como desea expresar la suma?\n1 - Cartesiano\n2 - Polar\n");
    float opcion=0;
    do{
        printf("Por favor eliga 1 o 2:\n");
        scanf("%f",&opcion);
    }while (opcion!=OPCION_CARTESIANO && opcion!=OPCION_POLAR);
    
    if (opcion==OPCION_CARTESIANO){
        printf("La suma expresada en cartesiano es: %2.2f j%2.2f",zxf,zyf);
    }else if(opcion==OPCION_POLAR){
        expresar_cartesiano(zxf,zyf);
    }
}

void expresar_cartesiano(float zxf,float zyf){
    float mod=0,ang=0;

    mod=sqrt(pow(zxf,2) + pow(zyf,2));
    ang=(atan2(zyf,zxf)*180/PI);

    printf("La suma %2.2f j%2.2f expresada en polar es %2.2fe^j%2.2f°",zxf,zyf,mod,ang);
}
