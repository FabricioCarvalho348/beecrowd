/*
Leia 5 valores Inteiros. A seguir mostre quantos valores digitados foram pares, quantos valores digitados foram ímpares, quantos valores digitados foram positivos e quantos valores digitados foram negativos.

Entrada
O arquivo de entrada contém 5 valores inteiros quaisquer.

Saída
Imprima a mensagem conforme o exemplo fornecido, uma mensagem por linha, não esquecendo o final de linha após cada uma.
*/


#include <stdio.h>


int main () {

int a, i, contadorPar = 0, contadorImpar = 0, contadorPositivo = 0, contadorNegativo = 0;

for (i = 0; i < 5; i++){

  scanf("%d", &a);
  if (a > 0){

    contadorPositivo++;

  }
  if (a < 0){

    contadorNegativo++;

  }
  if (a % 2 == 0){

    contadorPar++;

  }
  if (a % 2 != 0){

    contadorImpar++;

  }
}

printf("%d valor(es) par(es)\n", contadorPar);
printf("%d valor(es) impar(es)\n", contadorImpar);
printf("%d valor(es) positivo(s)\n", contadorPositivo);
printf("%d valor(es) negativo(s)\n", contadorNegativo);
}