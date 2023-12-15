#include <stdio.h>

int main(void)
{
    // Definindo a taxa de câmbio fixa
    const float taxa_cambio = 5.30;

    // Variáveis para armazenar os valores
    float valor_euro, valor_real;

    // Solicitar ao usuário o valor em euro
    printf("Digite o valor em euro: ");
    scanf("%f", &valor_euro);

    // Converter euro para real
    valor_real = valor_euro * taxa_cambio;
    printf("%.2f euros equivalem a %.2f reais\n", valor_euro, valor_real);

    // Solicitar ao usuário o valor em real
    printf("Digite o valor em reais: ");
    scanf("%f", &valor_real);

    // Converter real para euro
    valor_euro = valor_real / taxa_cambio;
    printf("%.2f reais equivalem a %.2f euros\n\n", valor_real, valor_euro);

    return 0;
}