#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char codigoCidadeA[15], nomeCidadeA[15];
    char codigoCidadeB = "B01"; 
    char nomeCidadeB = "Petropolis";
    double populacaoA, areaA;
    double populacaoB=623000, areaB=78.596;
    long long pibA, pibB=61326;
    int pontosTuristicoA, pontosTuristicoB=5;

    // Definição dos valores de de um carta para haver comparação.
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
    printf("Digite o codigo da Cidade: Ex: A01, B01.\n");
    scanf("%s", &codigoCidadeA);

    printf("Digite o nome da cidade:\n Não pode conter espaço no nome.\n Ex: Sao Paulo = Sao-Paulo\n");
    scanf("%s", &nomeCidadeA);

    printf("Qual é o indice populacional da Cidade?\n");
    scanf("%lf", &populacaoA);

    printf("Qual o tamanho da area geográfica da cidade(km²)?\n");
    scanf("%lf", &areaA);

    printf("Qual o valor do PIB da cidade?\n");
    scanf("%llu", &pibA);

    printf("Quantos pontos turistico existe na cidade?\n");
    scanf("%d", &pontosTuristicoA);


    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    if (pibA > pibB){
        printf("A Cidade vencedora é: %s\n", nomeCidadeA);
        printf("O valor do PIB de: %s, é maior que o PIB de: %s\n", nomeCidadeA, nomeCidadeB);

        return 0;
    }else{
        printf("A Cidade vencedora é: %s\n", nomeCidadeB);
        printf("O valor do PIB de: %s, é maior que o PIB de: %s\n", nomeCidadeB, nomeCidadeA);

        return 0;
    }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
