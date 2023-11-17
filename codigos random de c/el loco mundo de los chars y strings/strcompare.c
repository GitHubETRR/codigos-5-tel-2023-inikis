#include <stdio.h>
#include <string.h>
#define CANT_MAX 50

char ingresar_str();
int comparar(char str1[], char str2[]);

int main(void){
    char str1[CANT_MAX]=ingresar_str();
    char str2[CANT_MAX]=ingresar_str();
    comparar(str1,str2);

    return 0;
}

char ingresar_str(){
    char str[CANT_MAX];
    printf("Ingrese una palabra: ");
    gets(str);

    return str;
}

int comparar(char str1[], char str2[]){
    printf("comparo...");
    for (int i = 0; i < CANT_MAX; i++){
        printf("%c",str1[i]);
        if (str1[i]!=str2[i]){
            printf("si");
            printf("str1 distinto str2");
            printf("El carácter N°%i del string 1 es distinto al del string 2. Carácter de diferencia: '%c'",i,str1[i]);
            return 1;
        }
    }
    printf("Ambos strings son iguales.");
    return 0;
}
