#include <stdio.h>
#define CANT_MAX 50

void ingresar_str(char []);
int comparar(char str1[], char str2[]);

int main(void){
    char str1[CANT_MAX];
    ingresar_str(str1);
    char str2[CANT_MAX];
    ingresar_str(str2);
    printf("\n");
    comparar(str1,str2);

    return 0;
}

void ingresar_str(char str[]){
    printf("Ingrese una palabra: ");
    gets(str);
}

int comparar(char str1[], char str2[]){
    for (int i = 0; i < CANT_MAX; i++){
        printf("Comparacion %i: %c - %c\n",i+1,str1[i],str2[i]);
        if (str1[i]!=str2[i]){
            printf("\nEl caracter numero %i del string 1 es distinto al del string 2. Caracter de diferencia: '%c' distinto de '%c'\n",i+1,str1[i],str2[i]);
            return 1;
        }
    }
    printf("\nAmbos strings son iguales.\n");
    return 0;
}
