#include<stdio.h>

int main()
{
    float pes;

    printf("Digite o numero de pes: ");
    scanf("%f", &pes);

    printf("\n\n     * CONVERSOES *\n\n");

    printf("Polegadas: \t%.2f\n", pes*12); // polegadas = p�s*12
    printf("Jardas: \t%.2f\n", pes/3); // jardas = p�s/3
    printf("Milhas: \t%.2f\n\n", pes/58.66);  // 1 milha = 58,66 p�s

    return 0;

}
