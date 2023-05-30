/*
Com base na tabela abaixo, escreva um programa que leia o código de um item e a quantidade deste item. A seguir, calcule e mostre o valor da conta a pagar.
CODIGO      ESPECIFICAÇÃO           PREÇO
  1         Cachorro Quente         R$ 4.00
  2          X-SALADA                R$ 4.50
  3          X-BACON                 R$ 5.00
  4          Torrada Simples         R$ 2.00
  5          Refrigerante            R$ 1.50

Entrada
O arquivo de entrada contém dois valores inteiros correspondentes ao código e à quantidade de um item conforme tabela acima.

Saída
O arquivo de saída deve conter a mensagem "Total: R$ " seguido pelo valor a ser pago, com 2 casas após o ponto decimal.
*/


#include <stdio.h>

int main()
{
	int codigoDoProduto, quantidadeDeProdutosComprados;
	float total;

    // ARMAZENA O CÓDIGO DO PRODUTO ESCOLHIDO E A QUANTIDADE
	scanf("%d", &codigoDoProduto);
	scanf("%d", &quantidadeDeProdutosComprados);
	
    // SE O USUÁRIO PEDIR CACHORRO QUENTE VAI PARA ESSE IF
    if(codigoDoProduto == 1) {

		total = 4.00 * quantidadeDeProdutosComprados;	
	
    }
    
    // SE O USUÁRIO PEDIR X-SALADA VAI PARA ESSE IF
    else if(codigoDoProduto == 2){

		total = 4.50 * quantidadeDeProdutosComprados;
	
    }

    // SE O USUÁRIO PEDIR X-BACON VAI PARA ESSE IF
    else if(codigoDoProduto == 3){

		total = 5.00 * quantidadeDeProdutosComprados;
	
    }

    // SE O USUÁRIO PEDIR TORRADA SIMPLES VAI PARA ESSE IF 
    else if(codigoDoProduto == 4) {

		total = 2.00 * quantidadeDeProdutosComprados;
	
    }
    
    // SE O USUÁRIO PEDIR REFRIGERANTE VAI PARA ESSE IF
    else if(codigoDoProduto == 5) {

		total = 1.50 * quantidadeDeProdutosComprados;
	}
	
    // IMPRIME O TOTAL A SER PAGO PELO USUÁRIO
	printf("Total: R$ %.2f\n",total);
	
	return 0;
}