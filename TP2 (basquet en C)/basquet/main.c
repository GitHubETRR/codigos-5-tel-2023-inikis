#include <stdio.h>
#include <stdint.h>

//C
#define EQUIPO_NUGGETS 1
#define EQUIPO_HEATS 2
#define CANT_EQUIPOS 2
#define SIMPLE 1
#define DOBLE 2
#define TRIPLE 3

//V
int equipo_punto=0, valor_punto=0; //variables activas
int puntaje_nuggets, puntaje_heats=0; //puntajes por equipo
int puntaje_total=0;
int cant_triples=0, cant_dobles=0, cant_simples=0; //cantidad de puntos
float porc_triples=0, porc_dobles=0, porc_simples=0; //porcentajes de puntos

//F
void registrarEquipo();
void registrarPunto();
void mostrarResultados();

int main(){
    printf("SISTEMA DE REGISTRO DE PUNTOS DE BASQUET\n");

    do{
        equipo_punto, valor_punto=0;

        registrarEquipo();
        registrarPunto();
    }while(equipo_punto != 0 || puntaje_total == 0);

    mostrarResultados();
}

void registrarEquipo(){
    printf("\nINGRESE EL EQUIPO QUE REALIZÓ EL PUNTO\n");
    printf(" - 1 (Denver Nuggets)\n");
    printf(" - 2 (Miami Heats)\n");
    printf("\nSI DESEA CALCULAR LOS RESULTADOS, INGRESE 0\n");
    
    do{
        scanf("%d", &equipo_punto);
        if (equipo_punto<0||equipo_punto>CANT_EQUIPOS){
            printf("\nIngrese un valor de equipo correcto:\n");
        }
    }while (equipo_punto<0||equipo_punto>CANT_EQUIPOS);
}

void registrarPunto(){
    if (!equipo_punto){
            if (!puntaje_total){
                printf("No se pueden calcular los resultados sin haber registrado un punto.\n");
            }else{
                printf("\nSe calcularán los resultados.\n");
            }
        }else{
            printf("\nREGISTRAR PUNTO\n");
            printf(" - 1 (simple)\n"); printf(" - 2 (doble)\n"); printf(" - 3 (triple)\n");

            do{
                scanf("%d",&valor_punto);
                if (valor_punto<=0||valor_punto>TRIPLE){
                    printf("\nEscriba un valor de punto correcto:\n");
                }
            }while (valor_punto<=0||valor_punto>TRIPLE);

            switch (valor_punto){
            case SIMPLE: cant_simples++; break;
            case DOBLE: cant_dobles++; break;
            case TRIPLE: cant_triples++; break;
            }
            puntaje_total+=valor_punto;

            switch (equipo_punto){
            case EQUIPO_NUGGETS: puntaje_nuggets+=valor_punto; break;
            case EQUIPO_HEATS: puntaje_heats+=valor_punto; break;
            }

            printf("\nPunto registrado.\n");

            if (puntaje_nuggets>puntaje_heats){
                printf("Los Nuggets (%d) van ganandole a los Heats (%d)\n", puntaje_nuggets, puntaje_heats);
            }else{
                printf("Los Heats (%d) van ganandole a los Nuggets (%d)\n", puntaje_heats, puntaje_nuggets);
            }
        }
}

void mostrarResultados(){
    if(puntaje_heats>puntaje_nuggets){
        printf("\nGanan los Miami Heats con %d puntos. Los Denver Nuggets hicieron %d\n", puntaje_heats, puntaje_nuggets);
    }else{
        printf("\nGanan los Denver Nuggets con %d puntos. Los Miami Heats hicieron %d\n", puntaje_nuggets, puntaje_heats);
    }

    porc_simples=((float)cant_simples/puntaje_total)*100;
    porc_dobles=(((float)cant_dobles*DOBLE)/puntaje_total)*100;
    porc_triples=(((float)cant_triples*TRIPLE)/puntaje_total)*100;

    printf("El total de puntos que se realizaron durante el partido fueron %d\n", puntaje_total);
    printf("%d simples se realizaron, el %2.2f %% del total\n", cant_simples, porc_simples);
    printf("%d dobles se realizaron, el %2.2f %% del total\n", cant_dobles, porc_dobles);
    printf("%d triples se realizaron, el %2.2f %% del total\n", cant_triples, porc_triples);
}
