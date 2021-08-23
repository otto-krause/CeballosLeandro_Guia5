#include<stdio.h>
#include<conio.h>
int main()
{ int n, e, f; float p=1; printf("Ingrese el valor de la base y exponente "); scanf("%i %i", &n, &e); for (f=0; f<e; f++) {p=p*n;} printf("La potencia es %f ", p);
  getchar(); return 0; }
