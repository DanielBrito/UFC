#include<stdio.h>
#include<stdlib.h>

/*

Fa�a um programa que mostre um menu de op��es a seguir, receba a op��o do
usu�rio e os dados necess�rios para executar cada opera��o.

MENU DE OP��ES:
1 - Somar dois n�meros.
2 - Raiz quadrada de um n�mero.
Digite a op��o desejada:

*/

int main()
{
    system("cls");

    int opcao;
    int n1=0, n2=0; // Soma
    float num; // Raiz quadrada

    printf("MENU DE OPCOES:\n\n");
    printf("1 - Somar dois inteiros\n");
    printf("2 - Raiz quadrada de um numero\n\n");

    printf("- > Opcao desejada: ");
    scanf("%d", &opcao);

    if(opcao==1)
    {
        printf("\n\nDigite dois valores: \n");
        scanf("%d%d", &n1, &n2);

        printf("\n\n%d + %d = %d\n\n", n1, n2, n1+n2);

        system("PAUSE");

        return main();
    }
    if(opcao==2)
    {
        printf("\n\nDigite um numero: ");
        scanf("%f", &num);

        printf("\n\nRaiz quadrada de %.2f = %.2f\n\n", num, pow(num, 0.5)); // ou sqrt(num);

        system("PAUSE");

        return main();
    }

    return 0;
}
