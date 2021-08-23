#include<stdio.h>
#include<conio.h>
int main()
{ int n1,n2,f; printf("Ingrese el primer nro: "); scanf("%i", &n1); printf("Ingrese el segundo nro: "); scanf("%i", &n2); for (f=n1+1; f<n2;f++) {printf("%i ", f);}
  getchar(); return 0; }
