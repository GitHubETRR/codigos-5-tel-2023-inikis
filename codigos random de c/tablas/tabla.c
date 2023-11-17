#include <stdio.h>
int main(){
  unsigned char i;
  int resultado;
  int num;
  printf("TABLADOR DE LA TABLA DE TAL NUMERO\n");
  do{
    printf("\nElige un numero entero del que queres conocer la tabla (con 0 finalizas el programa): ");
    scanf("%d", &num); printf("\n");
    if(!(num==0)){
        for (i = 1; i <= 10; i++)
        {resultado=num*i; printf("%dx%d=%d\n", num, i, resultado);}
    }
  }while(!(num==0));
  printf("chau");
}
