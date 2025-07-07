#include <stdio.h>

typedef struct {
    char estado[3];
    int codigo;
    char nome[50];
    int populacao;
    float pib;
    float area;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
} Cidade;

void calcularPropriedades(Cidade *cidade) {
    cidade->densidade_populacional = cidade->populacao / cidade->area;
    cidade->pib_per_capita = cidade->pib / cidade->populacao;
}

void lerCidade(Cidade *cidade) {
    printf("Estado (UF): ");
    scanf("%s", cidade->estado);

    printf("Código da cidade: ");
    scanf("%d", &cidade->codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade->nome);

    printf("População: ");
    scanf("%d", &cidade->populacao);

    printf("PIB: ");
    scanf("%f", &cidade->pib);

    printf("Área (km²): ");
    scanf("%f", &cidade->area);

    printf("Número de pontos turísticos: ");
    scanf("%d", &cidade->pontos_turisticos);

    calcularPropriedades(cidade);
}

int main() {
    Cidade cidade;

    lerCidade(&cidade);

    printf("\n--- Dados da Cidade ---\n");
    printf("Estado: %s\n", cidade.estado);
    printf("Código: %d\n", cidade.codigo);
    printf("Nome: %s\n", cidade.nome);
    printf("População: %d\n", cidade.populacao);
    printf("PIB: %.2f\n", cidade.pib);
    printf("Área: %.2f km²\n", cidade.area);
    printf("Pontos Turísticos: %d\n", cidade.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", cidade.densidade_populacional);
    printf("PIB per capita: %.2f\n", cidade.pib_per_capita);

    return 0;
}