#include <stdio.h>
#include "conversoes.h"

double converter(double valor, double fator) {
    return valor * fator;
}

int menu_potencia() {
    int opcao;
    printf("\n--- Conversor de Potencia ---\n");
    printf("1. Watts para Kilowatts\n");
    printf("2. Watts para Cavalos-Vapor (CV)\n");
    printf("3. Kilowatts para Watts\n");
    printf("4. Kilowatts para Cavalos-Vapor (CV)\n");
    printf("5. Cavalos-Vapor (CV) para Watts\n");
    printf("6. Cavalos-Vapor (CV) para Kilowatts\n");
    printf("0. Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);
    return opcao;
}

void processarConversao(int opcao) {
    double valor, resultado;
    const double W_PARA_KW = 0.001;
    const double W_PARA_CV = 1.0 / 735.5;
    const double KW_PARA_W = 1000.0;
    const double KW_PARA_CV = 1000.0 / 735.5;
    const double CV_PARA_W = 735.5;
    const double CV_PARA_KW = 735.5 / 1000.0;

    if (opcao == 0) {
        printf("Saindo do programa...\n");
        return;
    }

    printf("Digite o valor a ser convertido: ");
    if (scanf("%lf", &valor) != 1) {
        printf("Entrada invalida! Por favor, tente novamente.\n");
        return;
    }

    switch (opcao) {
        case 1:
            resultado = converter(valor, W_PARA_KW);
            printf("%.3f Watts = %.3f Kilowatts\n", valor, resultado);
            break;
        case 2:
            resultado = converter(valor, W_PARA_CV);
            printf("%.3f Watts = %.3f Cavalos-Vapor (CV)\n", valor, resultado);
            break;
        case 3:
            resultado = converter(valor, KW_PARA_W);
            printf("%.3f Kilowatts = %.3f Watts\n", valor, resultado);
            break;
        case 4:
            resultado = converter(valor, KW_PARA_CV);
            printf("%.3f Kilowatts = %.3f Cavalos-Vapor (CV)\n", valor, resultado);
            break;
        case 5:
            resultado = converter(valor, CV_PARA_W);
            printf("%.3f Cavalos-Vapor (CV) = %.3f Watts\n", valor, resultado);
            break;
        case 6:
            resultado = converter(valor, CV_PARA_KW);
            printf("%.3f Cavalos-Vapor (CV) = %.3f Kilowatts\n", valor, resultado);
            break;
        default:
            printf("Opcao invalida! Por favor, tente uma opcao valida.\n");
    }
}

int main() {
    int opcao;
    do {
        opcao = menu_potencia();
        processarConversao(opcao);
    } while (opcao != 0);

    return 0;
}
