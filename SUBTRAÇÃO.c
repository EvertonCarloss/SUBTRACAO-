#include <stdio.h>
#include <locale.h>

// SUBTRA��O.

void main () {

setlocale(LC_ALL,"Portuguese");

int n1, n2, subtracao;

printf("DIGITE O PRIMERO N�MERO:  ");
scanf("%d",&n1);
printf("DIGITE O SEGUNDO N�MERO:  ");
scanf("%d",&n2);

subtracao = n1 - n2;

printf("O RESULTADO ENTRE %d E %d � %d", n1, n2, subtracao);



}
