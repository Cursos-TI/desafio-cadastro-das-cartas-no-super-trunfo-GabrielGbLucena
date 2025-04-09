#include <stdio.h> 

int main(){

    char estado01[15], estado02[15];
    char codigoCarta01[2], codigoCarta02[2];
    char nomeCidade01[20], nomeCidade02[20];
    int populacao01, populacao02;
    float area01, area02;
    float pib01, pib02;
    int qtdPontosTur01, qtdPontosTur02; 


    printf("Digite o Estado 01: \n");
    scanf("%s", &estado01);

    printf("Digite o Código Carta 01: \n");
    scanf("%s", &codigoCarta01);

    printf("Digite o Nome Cidade 01: \n");
    scanf("%s", &nomeCidade01);

    printf("Digite a População 01: \n");
    scanf("%d", &populacao01);

    printf("Digite a Área 01: \n");
    scanf("%f.2", &area01);

    printf("Digite a PIB 01: \n");
    scanf("%f.2", &pib01);

    printf("Digite a Quantidade de Pontos Turísticos 01: \n");
    scanf("%d", &qtdPontosTur01);

    printf("Digite o Estado 02: \n");
    scanf("%s", &estado02);

    printf("Digite o Código Carta 02: \n");
    scanf("%s", &codigoCarta02);

    printf("Digite o Nome Cidade 02: \n");
    scanf("%s", &nomeCidade02);

    printf("Digite a População 02: \n");
    scanf("%d", &populacao02);

    printf("Digite a Área 02: \n");
    scanf("%f.2", &area02);

    printf("Digite a PIB 02: \n");
    scanf("%f.2", &pib02);

    printf("Digite a Quantidade de Pontos Turísticos 02: \n");
    scanf("%d", &qtdPontosTur02);

    printf("Estado 01: %s \n", estado01);
    printf("Código da Carta 01: %s \n", codigoCarta01);
    printf("Nome da Cidade: %s \n", nomeCidade01);
    printf("População: %d \n", populacao01);
    printf("Área: %.2f km² \n", area01);
    printf("PIB: %.2f BILHÕES DE REAIS \n", pib01);
    printf("Quantidade de pontos turísticos: %d \n\n", qtdPontosTur01);
    printf("Estado 02: %s \n", estado02);
    printf("Código da Carta: %s \n", codigoCarta02);
    printf("Nome da Cidade: %s \n", nomeCidade02);
    printf("População: %d \n", populacao02);
    printf("Área: %.2f km² \n", area02);
    printf("PIB: %.2f BILHÕES DE REAIS \n", pib02);
    printf("Quantidade de pontos turísticos: %d \n", qtdPontosTur02);


}
