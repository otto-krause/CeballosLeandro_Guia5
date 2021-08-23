#include<stdio.h>
#include<conio.h>
int main()
{ int v, p=0, n=0, c=0; for (int f = 1; f<=10; f++) {printf("Ingrese el valor %i: ", f); scanf("%i", &v); if (v>0){p++;} else {if (v<0){n++;} else {c++;} }  }
  printf("La cantidad de nros positivos son: %i", p); printf("\n"); printf("La cantidad de nros negativos es: %i", n); printf("\n"); printf("La cantidad de nros iguales a 0 es: %i", c);
  getchar(); return 0;
}
