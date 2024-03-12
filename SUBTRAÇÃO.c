#include <stdio.h>
#include <locale.h>

// SUBTRAÇÃO.

void main () {

setlocale(LC_ALL,"Portuguese");

int n1, n2, subtracao;

printf("DIGITE O PRIMERO NÚMERO:  ");
scanf("%d",&n1);
printf("DIGITE O SEGUNDO NÚMERO:  ");
scanf("%d",&n2);

subtracao = n1 - n2;

printf("O RESULTADO ENTRE %d E %d É %d", n1, n2, subtracao);



}
