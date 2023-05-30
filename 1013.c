/*
Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”. Utilize a fórmula:

maiorAB = (A + B + ABS(A - B)) / 2

Obs.: a fórmula apenas calcula o maior entre os dois primeiros (a e b). Um segundo passo, portanto é necessário para chegar no resultado esperado.

Entrada
O arquivo de entrada contém três valores inteiros.

Saída
Imprima o maior dos três valores seguido por um espaço e a mensagem "eh o maior".
*/

#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, d;
  
    scanf("%i %i %i", &a, &b, &c);
    
    d = (a + b + abs(a-b)) / 2;
    printf("%i eh o maior\n", (d + c + abs(d-c)) / 2);
}