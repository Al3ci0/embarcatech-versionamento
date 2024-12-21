#include <stdio.h>
#include "conversoes.h"

void mostrar_menu_principal() {
    int opcao;
    do {
        printf("\n--- Conversor de Unidades ---\n");
        printf("1. Conversao de Comprimento\n");
        printf("2. Conversao de Dados\n");
        printf("3.Conversao de Potencia\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                menu_comprimento();
                break;
            case 2:
                menu_dados();
                break;
            case 3:
                menu_potencia();
                break;
            case 0:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao != 0);
}

int main() {
    mostrar_menu_principal();
    return 0;
}
