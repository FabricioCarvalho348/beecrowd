/*
Leia 3 valores inteiros e ordene-os em ordem crescente. No final, mostre os valores em ordem crescente, uma linha em branco e em seguida, os valores na sequência como foram lidos.

Entrada
A entrada contem três números inteiros.

Saída
Imprima a saída conforme foi especificado.
*/

#include<stdio.h>

int main(){
    int primeiroNumero, segundoNumero, terceiroNumero, aux;
    int vetor[3];
    
    // recebe os 3 valores e coloca dentro de cada posição do vetor
    scanf("%d %d %d", &primeiroNumero, &segundoNumero, &terceiroNumero);
    vetor[0] = primeiroNumero;
    vetor[1] = segundoNumero;
    vetor[2] = terceiroNumero;
    
    // percorre o vetor e ordena ele em ordem crescente
    for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                    if(vetor[i] < vetor[j]){
                            aux = vetor[j];
                            vetor[j] = vetor[i];
                            vetor[i] = aux;
                    }
            }
    }
    
    // imprime cada elemento de cada posição do vetor
    printf("%d\n%d\n%d\n", vetor[0], vetor[1], vetor[2]);
    printf("\n%d\n%d\n%d\n", primeiroNumero, segundoNumero, terceiroNumero);
    return 0;
}