/*
Leia a hora inicial, minuto inicial, hora final e minuto final de um jogo. A seguir calcule a duração do jogo.

Obs: O jogo tem duração mínima de um (1) minuto e duração máxima de 24 horas.

Entrada
Quatro números inteiros representando a hora de início e fim do jogo.

Saída
Mostre a seguinte mensagem: “O JOGO DUROU XXX HORA(S) E YYY MINUTO(S)” .
*/

#include <stdio.h>

int main() {

    // RECEBE OS VALORES E ARMAZENA NAS VARIAVEIS (HORA INICIAL, MINUTO INICIAL, HORA FINAL E MINUTO FINAL)
    int primeiroNumero, segundoNumero, terceiroNumero, quartoNumero;
    int conversao;
    scanf("%d %d %d %d", &primeiroNumero, &terceiroNumero, &segundoNumero, &quartoNumero);
    
    // CALCULA A DURAÇÃO TOTAL DO JOGO
    conversao = ((segundoNumero * 60) + quartoNumero) - ((primeiroNumero * 60) + terceiroNumero);
    if(conversao <= 0) conversao += 24 * 60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",conversao / 60,conversao % 60);
    return 0;
}