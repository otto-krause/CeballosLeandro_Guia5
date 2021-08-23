#include<stdio.h>
#include<conio.h>
int main(){
  int input; int a, t = 0; for(int i = 1; i < 31; i++){ printf("Alumno %d\n", i); a = 0;
  for(int f = 1; f < 11; f++){ printf("De la nota de la materia %d: ", f); scanf("%d", &input); a += input; t += input;}
  printf("\tEl promedio del alumno %d es: %d\n", i, a/10); }
  printf("\t\tEl promedio total de la clase es: %d\n", t/300);
  getchar(); return 0; }

