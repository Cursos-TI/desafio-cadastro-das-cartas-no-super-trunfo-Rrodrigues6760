#include <stdio.h>


int main() { printf("Desafio SuperTrunfo\n");
printf("-----+ BEM VINDO AO JOGO SUPER TRUNFO +-----\n");
printf("------+ CARTA DE JOGADOR 1: MARCOS +------ \n");
    char nome_do_estado[20] = "Minas Gerais"  ;
    char codigo_da_carta[6] = "A01" ;
    char nome_da_cidade[25] = "Belo horizonte"  ;
    int populacao = 889655258 ;
    float area_em_km = 230.6 ;
    float pib = 18.3 ;
    int numero_de_pontos_turisticos = 18 ;

    printf("Nome do estado = %s \n",nome_do_estado);

    printf("Código da carta = %s \n",codigo_da_carta);

    printf("Nome da cidade = %s \n",nome_da_cidade);

    printf("Populacão = %d \n",populacao);

    printf("Area em KM = %.1f \n",area_em_km);

    printf("PIB = %.1fmilhões \n",pib);

    printf("Numero de pontos turísticos = %d \n", numero_de_pontos_turisticos);

    //inicio da criação de cartas(scanf).

    printf("------+ Agora é a sua vez! +-----\n");

    printf("DIGITE O NOME DO SEU ESTADO:");
    
    scanf("%s", &nome_do_estado);

    printf("seu estado é: %s\n", nome_do_estado);

    printf("DIGITE O CODIGO DA CARTA:");
    printf("(exemplo:A01,B07,W92)\n");

    scanf("%s", &codigo_da_carta);

    printf("codigo da sua carta:%s\n", codigo_da_carta);

    printf("DIGITE O NOME DA CIDADE:");

    scanf("%s", &nome_da_cidade);

    printf("o nome da cidade:%s\n", nome_da_cidade);

    printf("DIGITE A POPULAÇÃO DA CIDADE:");

    scanf("%d", &populacao);

    printf("a população:%d\n", populacao);

    printf("DIGITE A AREA EM 'KM':");

    scanf("%f", &area_em_km);

    printf("sua area em KM:%f\n", area_em_km);

    printf("digite o PIB da cidade:");

    scanf("%f", &pib);

    printf("o PIB da sua cidade:%f\n",pib);

    printf("digite o numero TOTAL de pontos turisticos da cidade:");

    scanf("%d",&numero_de_pontos_turisticos);

    printf("o numero total de pontos turísticos:%d\n",numero_de_pontos_turisticos);

    printf("-----+ SUA CARTA COMPLETA +-----\n");

    // vms ver
    printf("Nome do estado = %s \n",nome_do_estado);

    printf("Código da carta = %s \n",codigo_da_carta);

    printf("Nome da cidade = %s \n",nome_da_cidade);

    printf("Populacão = %d \n",populacao);

    printf("Area em KM = %.1f \n",area_em_km);

    printf("PIB = %.1fmilhões \n",pib);

    printf("Numero de pontos turísticos = %d \n", numero_de_pontos_turisticos);

    


    return 0;
}
