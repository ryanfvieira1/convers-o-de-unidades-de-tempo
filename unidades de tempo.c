#include <stdio.h>

void converterTempo(int escolha, double valor) {
    double segundos, minutos, horas; // variáveis para armazenar os resultados das conversões 

    switch (escolha) { // verifica qual unidade foi escolhida 

        case 1: // Caso 1: unidade escolhida é segundos 
            segundos = valor; 
            minutos = valor / 60.0;
            horas = valor / 3600.0;
            printf("%.2f segundos equivalem a %.2f minutos e %.2f horas.\n", segundos, minutos, horas);
            break;

        case 2: // Caso 2: unidade escolhida é minutos
            segundos = valor * 60.0;
            minutos = valor;
            horas = valor / 60.0;
            printf("%.2f minutos equivalem a %.2f segundos e %.2f horas.\n", minutos, segundos, horas);
            break;

        case 3: // Caso 3: unidade escolhida é horas 
            segundos = valor * 3600.0;
            minutos = valor * 60.0;
            horas = valor;
            printf("%.2f horas equivalem a %.2f minutos e %.2f segundos.\n", horas, minutos, segundos);
            break;

        default: // escolha inválida
            printf("Escolha inválida. Tente novamente.\n");
    }
}

int main() {
    int escolha; // Variável para armazenar a unidade escolhida pelo usuário
    double valor; // Variável para armazenar o valor a ser convertido

    printf("Conversor de Unidades de Tempo\n");
    printf("Escolha a unidade de entrada:\n");
    printf("1. Segundos\n");
    printf("2. Minutos\n");
    printf("3. Horas\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    if (escolha >= 1 && escolha <= 3) { // Verifica se a escolha é válida
        printf("Digite o valor a ser convertido: "); // Solicita o valor a ser convertido
        scanf("%lf", &valor); // Lê o valor do usuário

        if (valor >= 0) { // Verifica se o valor é positivo
            converterTempo(escolha, valor); // Chama a função para realizar a conversão
        } else { // Caso o valor seja negativo
            printf("O valor deve ser positivo.\n"); // Exibe mensagem de erro
        }
    } else { // Caso a escolha seja inválida
        printf("Escolha inválida.\n"); // Exibe mensagem de erro
    }

    return 0;
}
