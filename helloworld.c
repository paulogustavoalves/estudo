#include <stdio.h> 
 #include <string.h>

 int main(){
 
 //Paulo Gustavo 

 //Cadastro das cartas

    char estado1[50]; char estado2[50];
    char codigo1[20]; char codigo2[20];
    char nomedacidade1[20]; char nomedacidade2[20];
    float população1; float população2;
    float areakm1; float areakm2;
    float pib1; float pib2;
    int pontosturisticos1; int pontosturisticos2;

    printf("Me fale o estado da sua carta\n");
    scanf("%s" , &estado1 );

    printf("Agora o codigo\n");
    scanf("%s" , &codigo1);

    printf("Agora me fale a cidade\n");
    scanf("%s" , &nomedacidade1);

    printf("Agora a população\n");
    scanf("%f" , &população1);

    printf("Agora a Area por km²\n");
    scanf("%f" , &areakm1);

    printf("Agora o Pib\n");
    scanf("%f" , &pib2);

    printf("Agora os pontos turisticos\n");
    scanf("%d" , &pontosturisticos1);

    printf("Vamos para a segunda carta\n");

    printf("Me fale o estado da sua carta\n");
    scanf("%s" , &estado2);

    printf("Agora o codigo\n");
    scanf("%s" , &codigo2);

    printf("Agora me fale a cidade\n");
    scanf("%s" , &nomedacidade2);

    printf("Agora a população\n");
    scanf("%f" , &população2);

    printf("Agora a Area por km²\n");
    scanf("%f" , &areakm2);

    printf("Agora o Pib\n");
    scanf("%f" , &pib2);

    printf("Agora os pontos turisticos\n");
    scanf("%d" , &pontosturisticos2);

    printf("Suas cartas são:\n");

    printf("Carta1:\n");
    printf("Estado:%s\n" ,estado1 );
    printf("Codigo:%s\n" , codigo1 );
    printf("Nome da cidade:%s\n" , nomedacidade1);
    printf("População:%f\n" , população1);
    printf("Area por km²::__:%f\n" , areakm1);
    printf("Pib:%f\n" , pib1);
    printf("Pontos turisticos:%d\n" , pontosturisticos1);

    printf("Carta2:\n");
    printf("Estado:%s\n" ,estado2 );
    printf("Codigo:%s\n" , codigo2 );
    printf("Nome da cidade:%s\n" , nomedacidade2);
    printf("População:%f\n" , população2);
    printf("Area por km²:%f\n" , areakm2);
    printf("Pib:%f\n" , pib2);
    printf("Pontos turisticos:%d\n" , pontosturisticos2);

    return 0;



}
