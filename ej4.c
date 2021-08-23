#include<stdio.h>
#include<conio.h>
int main()
{ int n, f, fact=1; printf("Ingrese el nro "); scanf("%i", &n); for (f=n; f>1; f--) {fact*=f;} printf("El factorial de %i es %i. ", n, fact); }
