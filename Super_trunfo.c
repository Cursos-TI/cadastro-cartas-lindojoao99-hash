#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct {
    char estado;          // 'A'..'H'
    char codigo[4];       // ex.: "A01"
    char nome[64];
    int  populacao;
    float area_km2;
    float pib_bi;         // em bilhões
    int  pontos_turisticos;
} Carta;

int main(void) {
    Carta cartas[2];

    for (int i = 0; i < 2; i++) {
        printf("=== Cadastro da Carta %d ===\n", i + 1);

        // Estado (uma letra). Converte para maiúsculo sem if/else
        printf("Estado (A-H): ");
        scanf(" %c", &cartas[i].estado);
        cartas[i].estado = (char)toupper((unsigned char)cartas[i].estado);

        // Número 01..04 para compor o código
        int numero;
        printf("Numero da carta (01 a 04): ");
        scanf(" %d", &numero);

        // Gera o código sem if/else
        snprintf(cartas[i].codigo, sizeof(cartas[i].codigo), "%c%02d", cartas[i].estado, numero);

        // Nome da cidade (com espaços)
        printf("Nome da cidade: ");
        scanf(" %63[^\n]", cartas[i].nome);

        printf("Populacao: ");
        scanf(" %d", &cartas[i].populacao);

        printf("Area (km^2): ");
        scanf(" %f", &cartas[i].area_km2);

        printf("PIB (bilhoes de reais): ");
        scanf(" %f", &cartas[i].pib_bi);

        printf("Numero de pontos turisticos: ");
        scanf(" %d", &cartas[i].pontos_turisticos);
    }

    printf("\n===== CARTAS CADASTRADAS =====\n");
    for (int i = 0; i < 2; i++) {
        printf("\nCarta %d:\n", i + 1);
        printf("Estado: %c\n", cartas[i].estado);
        printf("Codigo: %s\n", cartas[i].codigo);
        printf("Nome da Cidade: %s\n", cartas[i].nome);
        printf("Populacao: %d\n", cartas[i].populacao);
        printf("Area: %.2f km^2\n", cartas[i].area_km2);
        printf("PIB: %.2f bilhoes de reais\n", cartas[i].pib_bi);
        printf("Numero de Pontos Turisticos: %d\n", cartas[i].pontos_turisticos);
    }

    printf("\n===== CARTAS CADASTRADAS =====\n");
    for (int i = 0; i < 2; i++) {
        printf("\nCarta %d:\n", i + 1);
        printf("Estado: %c\n", cartas[i].estado);
        printf("Codigo: %s\n", cartas[i].codigo);
        printf("Nome da Cidade: %s\n", cartas[i].nome);
        printf("Populacao: %d\n", cartas[i].populacao);
        printf("Area: %.2f km^2\n", cartas[i].area_km2);
        printf("PIB: %.2f bilhoes de reais\n", cartas[i].pib_bi);
        printf("Numero de Pontos Turisticos: %d\n", cartas[i].pontos_turisticos);
    }
    
    return 0;
}
