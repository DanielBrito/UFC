#include<stdio.h>

/*

O custo ao consumidor de um carro novo � a soma do pre�o de f�brica com o
percentual de lucro do distribuidor e dos impostos aplicados ao pre�o de f�brica.

Fa�a um programa que receba o pre�o de f�brica de um ve�culo, o percentual de
lucro do distribuidor e o percentual de impostos, calcule e mostre:

a) o valor correspondente aos lucro do distribuidor;
b) o valor correspondente aos impostos;
c) o pre�o final do ve�culo.

*/

int main()
{
    float preco_fabrica, perc_lucro, perc_impostos;

    printf("Digite o preco de fabrica do veiculo: ");
    scanf("%f", &preco_fabrica);

    printf("Digite a %% de lucro do distribuidor: ");
    scanf("%f", &perc_lucro);

    printf("Digite a %% de impostos: "); // PIS, COFINS, IPI, ICMS
    scanf("%f", &perc_impostos);

    float lucro_distr = preco_fabrica*(perc_lucro/100);
    float impostos = preco_fabrica*(perc_impostos/100);

    printf("\n\n     * RELATORIO *\n\n");

    printf("a) Lucro do distribuidor: %.2f\n", preco_fabrica*(perc_lucro/100));
    printf("b) Valor dos impostos: %.2f\n",impostos);
    printf("c) Valor final do veiculo: %.2f\n\n", preco_fabrica+lucro_distr+impostos);

    return 0;

}
