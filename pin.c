/***************************
programa en C que implementa
el pin sense repetició
Nacho Romero curs:25/26
***************************/
#include <stdio.h>
void main(){
int resposta;
printf("Pin?: ");
scanf("%d", &resposta);
if(resposta==1234)
    printf("Ok!\n");
else printf("Incorrecte!\n");
return;
}
