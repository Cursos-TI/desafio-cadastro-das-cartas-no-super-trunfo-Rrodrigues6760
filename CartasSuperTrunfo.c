#include <stdio.h>

int main (){
char Nome [50];
float Populacao, Área, PIB;
int turísticos;

printf("Digite o nome da Cidade: \n");
scanf ("%s", &Nome);

printf("Digite a População: \n");
scanf("%f", &Populacao);

printf("Digite a Área: \n");
scanf("%f", &Área);

printf("Digite o PIB: \n");
scanf("%f", &PIB);

printf("Digite o número de pontos turísticos: \n");
scanf("%s", &turísticos);

printf("Nome da Cidade: %s \n", Nome);
printf("Populacao: %f \n", Populacao);
Printf("Área: %f \n", Área);
printf("PIB: %f \n",PIB);
printf("Número de pontos turiísticos: %f \n" ,turísticos);

return 0;

}