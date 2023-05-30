/*
Em um país imaginário denominado Lisarb, todos os habitantes ficam felizes em pagar seus impostos, pois sabem que nele não existem políticos corruptos e os recursos arrecadados são utilizados em benefício da população, sem qualquer desvio. A moeda deste país é o Rombus, cujo símbolo é o R$.

Leia um valor com duas casas decimais, equivalente ao salário de uma pessoa de Lisarb. Em seguida, calcule e mostre o valor que esta pessoa deve pagar de Imposto de Renda, segundo a tabela abaixo.



Lembre que, se o salário for R$ 3002.00, a taxa que incide é de 8% apenas sobre R$ 1000.00, pois a faixa de salário que fica de R$ 0.00 até R$ 2000.00 é isenta de Imposto de Renda. No exemplo fornecido (abaixo), a taxa é de 8% sobre R$ 1000.00 + 18% sobre R$ 2.00, o que resulta em R$ 80.36 no total. O valor deve ser impresso com duas casas decimais.

Entrada
A entrada contém apenas um valor de ponto flutuante, com duas casas decimais.

Saída
Imprima o texto "R$" seguido de um espaço e do valor total devido de Imposto de Renda, com duas casas após o ponto. Se o valor de entrada for menor ou igual a 2000, deverá ser impressa a mensagem "Isento".
*/

#include <stdio.h>

int main(){
    double salario;
    scanf("%lf", &salario);
    
    // VERIFICA SE VAI SER ISENTO DE IMPOSTO DE RENDA (salário de 0.00 a R$ 2.000.00)
    if(salario <= 2000.00) {
        printf("Isento\n");

    // VERIFICA SE VAI PAGAR 8% DE IMPOSTO DE RENDA (salário de R$ 2000.01 até R$ 3000.00)
    } else if (salario >= 2000.01 && salario <= 3000.00) {
          printf("R$ %.2f\n", (salario - 2000.00) * 0.08);
    
    // VERIFICA SE VAI PAGAR 18% DE IMPOSTO DE RENDA (salário de R$ 3000.01 até R$ 4500.00)
    } else if (salario >= 3000.01 && salario <= 4500.00) {
          printf("R$ %.2f\n", ((salario - 3000.00) * 0.18 + 1000.00 * 0.08));
    
    // VERIFICA SE VAI PAGAR 28% DE IMPOSTO DE RENDA(salário acima de R$ 4.500.00)
    } else if (salario >= 4500.01) {
          
          printf("R$ %.2f\n", ((salario - 4500.00) * 0.28 + 1500.00 * 0.18 + 1000.00 * 0.08));
    
    }
    
    return 0;
}