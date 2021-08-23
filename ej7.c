#include<stdio.h>
#include<conio.h>
int main()
{ int i, t, m, v, f; for (f=1; f<21; f++) {printf("Ingrese el total de unidades diarias del vendedor %i ", f); scanf("%i", &i); t=i*15; if(m<i) {m=i; v=i;} }
  printf("El total de unidades vendidas es: %i ", t); printf("\n"); printf ("El vendedor con mayores unidades vendidas es el: %i ", m); getchar(); return 0; }
