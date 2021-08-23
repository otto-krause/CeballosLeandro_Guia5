#include<stdio.h>
#include<conio.h>
int main()
{ int s, sm=0, su=0; for (int f=1; f<=20; f++) {printf("Ingrese el sueldo de la persona %i: ",f); scanf("%i", &s); if (s>2000) {sm++;} else {if (s<2000){su++;} } }
  printf("El nro de personans que ganan mas de 2000$ son %i: ", sm); printf("\n"); printf("El nro de personans que ganan menos de 2000$ son %i: ", su);
  getchar(); return 0; }
