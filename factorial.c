/************************************
* Programa que calcula el factorial *
* Nacho Romero PXSI-25/26           *
* **********************************/

#include <stdio.h>

int factorial(int n)
{
    int aux, i;
    aux=1;
    for(i=1;i<=n;i++) aux=aux*i;
    return aux;
}

void main(){
    int n;
    printf("Factorial de: ");
    scanf("%d",&n);
    printf("%d\n", factorial(n));
    return;
}
