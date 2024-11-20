#include <stdio.h>

int main() {
    float cotacao_dolar, valor_dolar, valor_real;

    // Solicitar ao usuário a cotação do dólar
    printf("Digite a cotação do dólar: ");
    scanf("%f", &cotacao_dolar);

    // Solicitar ao usuário a quantidade de dólares disponível
    printf("Digite a quantidade de dólares disponível: ");
    scanf("%f", &valor_dolar);

    // Calcular o valor em reais
    valor_real = valor_dolar * cotacao_dolar;

    // Exibir o valor em reais
    printf("O valor em reais é: R$ %.2f\n", valor_real);

    return 0;
}
