/*
Leia 6 valores. Em seguida, mostre quantos destes valores digitados foram positivos. Na próxima linha, deve-se mostrar a média de todos os valores positivos digitados, com um dígito após o ponto decimal.

Entrada
A entrada contém 6 números que podem ser valores inteiros ou de ponto flutuante. Pelo menos um destes números será positivo.

Saída
O primeiro valor de saída é a quantidade de valores positivos. A próxima linha deve mostrar a média dos valores positivos digitados.
*/

#include <stdio.h>
 
int main(){
    // LER 6 VALORES
    float numero, soma = 0;
    int i, contador = 0;
    for(i = 1;i <= 6; i++){
        scanf("%f", &numero);
        if(numero > 0){
          soma = soma + numero;
          contador++;
        }
    }
    // CALCULA A MEDIA DESSES VALORES
    float media = soma / contador;
    printf("%d valores positivos\n",contador);
    printf("%.1f\n", media);
    return 0;
}