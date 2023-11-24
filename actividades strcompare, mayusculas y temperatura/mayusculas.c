#include <stdio.h>
#include <string.h>
#define CANT_MAX 50

void ingresar_str(char []);
void buscar_minuscula(char []);

int main(void){
    //para cada minuscula, su equivalente en mayuscula esta a 32 posiciones de distancia
    char str[CANT_MAX]={0};
    ingresar_str(str);

    buscar_reemplazar_minuscula(str);

    return 0;
}

void ingresar_str(char str[]){
    printf("Ingrese una palabra: ");
    gets(str);
}

void buscar_minuscula(char str[]){
    for (int i = 0; i < CANT_MAX; i++){
        if(str[i]==0) break; //str tiene como max 50 caracteres. si no se usan todos, van a haber ceros y queremos evitarlos.

        for (int j = 97; j <= 122; j++){ //las minusculas en ascii van del digito 97 al 122
            if ((int)str[i] == j){
                printf("%c es minuscula\n",str[i]);

                str[i] -= 32;

                break;
            }
        }
    }

    printf("\nResultado: %s",str);
}
