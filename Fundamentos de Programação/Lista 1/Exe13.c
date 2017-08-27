#include<stdio.h>

/*

Sabe-se que o quilowatt de energia custa um quinto do sal�rio m�nimo.

Fa�a um programa que recebe o valor do sal�rio m�nimo e a quantidade de quilowatts
consumida por uma resid�ncia. Calcule e mostre:

a) o valor de cada quilowatt;
b) o valor a ser pago por essa resid�ncia;
c) o valor a ser pago com desconto de 15%.

Obs.: � poss�vel fazer este algoritmo com menos vari�veis,
mas pretendi fazer este de uma forma mais did�tica.

*/

int main()
{
    float salario, quant_quilowatt, valor_quilowatt, total, desconto;

    printf("Digite o valor do salario: ");
    scanf("%f", &salario);

    printf("Digite os quilowatts consumidos: ");
    scanf("%f", &quant_quilowatt);

    valor_quilowatt = salario*0.20;

    total = quant_quilowatt*(salario*0.20);

    desconto = total-(total*0.15);

    printf("\n\n     * RELATORIO * \n\n");
    printf("a) Valor de cada quilowatt: %.2f\n", valor_quilowatt);
    printf("b) Valor total a ser pago: %.2f\n", total);
    printf("c) Valor a ser pago com 15%% de desconto: %.2f\n\n", desconto);

    return 0;
}
