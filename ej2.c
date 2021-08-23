#include<stdio.h>
#include<conio.h>
int main()
{ int s, f, v, prom,m=0, t; for (f=1; f<=15; f++) { printf("Ingrese el valor nro %i: ", f); scanf("%i", &v); if (v>m){m=v; t=15*v; s+=t;}} prom=s/15;
  printf("El promedio es: %i", prom); printf("\n"); printf("El nro mayor es: %i", m); }
