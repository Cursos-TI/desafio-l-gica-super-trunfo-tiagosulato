#include <stdio.h>


    int main() {
       // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    
       int  pontos_turisticos1, pontos_turisticos2;
       int comp_pontosTuristicos, compPibpercapita, comp_populacao;
       int compArea, compPib, compSuperpoder, compDensidade;
       unsigned long int populacao1, populacao2;
   
       char estado1, estado2;
       char codcarta1[50];
       char nomecidade1[50];
       char codcarta2[50];
       char nomecidade2[50];
   
       float area1, pib1, area2, pib2, superpoder1, superpoder2; 
       float densid_populacional1, pib_percapita1, densid_populacional2, pib_percapita2;
      
   
       // Cadastro das Cartas:
       
       printf("Vamos digitar os dados da carta 1 \n");
   
       printf("Digite a letra estado:\n ");
       scanf(" %s", &estado1);
   
       printf("Digite o codigo da carta:\n");
       scanf(" %s", &codcarta1);
   
       printf("Digite o nome da cidade:\n");
       scanf(" %s", &nomecidade1);
   
       printf ("Digite a população da cidade \n");
       scanf(" %lu", &populacao1);
   
       printf ("Digite a area da cidade em Km² \n");
       scanf("      %f", &area1);
   
       printf ("Digite o pib da cidade \n");
       scanf("      %f", &pib1);
   
       printf ("Digite a quantidade de Pontos Turisticos da cidade \n");
       scanf("      %i", &pontos_turisticos1);
   
       
       //atribuindo valor as variaveis carta 2
   
       printf ("Vamos digitar os dados da carta 2 \n");
   
       printf ("Digite a letra estado \n");
       scanf(" %c", &estado2);
   
       printf ("Digite o codigo da carta \n");
       scanf(" %s", &codcarta2);
   
       printf ("Digite o nome da cidade \n");
       scanf(" %s", &nomecidade2);
   
       printf ("Digite a população da cidade \n");
       scanf(" %lu", &populacao2);
   
       printf ("Digite a area da cidade em Km² \n");
       scanf(" %f", &area2);
   
       printf ("Digite o pib da cidade \n");
       scanf(" %f", &pib2);
   
       printf ("Digite a quantidade de Pontos Turisticos da cidade \n");
       scanf(" %i", &pontos_turisticos2);
   
       //calculando densidade e Pib per Capita
   
       densid_populacional1 = populacao1 / area1;
       densid_populacional2 = populacao2 / area2;
       pib_percapita1 = pib1 / populacao1;
       pib_percapita2 = pib2 / populacao2;
   
       //calculando super poder e comparando as cartas
   
       superpoder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_percapita1 + (1/densid_populacional1);
       superpoder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_percapita2 + (1/densid_populacional2);
   
       comp_populacao = populacao1 > populacao2;
       compArea = area1 > area2;
       compPib =  pib1 > pib2;
       compSuperpoder = superpoder1 > superpoder2;
       compDensidade = densid_populacional1 > densid_populacional2; 
       compPibpercapita = pib_percapita1 > pib_percapita2;
       comp_pontosTuristicos = pontos_turisticos1 > pontos_turisticos2;
       
       printf ("População da Cidade de %s : %lu \n",nomecidade1, populacao1);
       printf ("População da Cidade de %s : %lu \n",nomecidade2, populacao2);
       if (populacao1 > populacao2){
            printf ("%s Venceu pois tem a maior população.\n\n",nomecidade1);
        } else {
            printf ("%s Venceu pois tem a maior população.\n\n",nomecidade2);
        }
        
       printf ("Area da Cidade de %s : %.2f Km²\n",nomecidade1, area1); 
       printf ("Area da Cidade de %s : %.2f Km²\n",nomecidade2, area2);
       if (area1 > area2){
        printf ("%s Venceu pois tem a maior area em km².\n\n",nomecidade1);
        } else {
        printf ("%s Venceu pois tem a maior area em km².\n\n",nomecidade2);
        }
    
       printf ("PIB da Cidade de %s : %.2f Bilhôes de reais\n",nomecidade1, pib1);
       printf ("PIB da Cidade de %s : %.2f Bilhôes de reais\n",nomecidade2, pib2); 
        if (pib1 > pib2){
            printf ("%s Venceu pois tem o maior PIB.\n\n",nomecidade1);
        } else {
            printf ("%s Venceu pois tem o maior PIB.\n\n",nomecidade2);
        }

       printf ("Densidade Populacional da Cidade de %s : %.2f hab/km² \n",nomecidade1, densid_populacional1); 
       printf ("Densidade Populacional da Cidade de %s : %.2f hab/km² \n",nomecidade2, densid_populacional2);
        if (densid_populacional1 < densid_populacional2){
            printf ("%s Venceu pois tem a menor Densidade populacional.\n\n",nomecidade1);
        } else {
            printf ("%s Venceu pois tem a menor Densidade populacional.\n\n",nomecidade2);
        }

        printf ("PIB per Capita da Cidade de %s : %.2f Reais \n ",nomecidade1, pib_percapita1);
        printf ("PIB per Capita da Cidade de %s : %.2f Reais \n ",nomecidade2, pib_percapita2);
        if (pib_percapita1 > pib_percapita2){
            printf ("%s Venceu pois tem o maior PIB per Capita.\n\n",nomecidade1);
        } else {
            printf ("%s Venceu pois tem o maior PIB per Capita.\n\n",nomecidade2);
        }

        printf ("Pontos Turisticos da Cidade de %s : %i \n",nomecidade1, pontos_turisticos1);
        printf ("Pontos Turisticos da Cidade de %s : %i \n",nomecidade2, pontos_turisticos2);
        if (pontos_turisticos1 > pontos_turisticos2){
            printf ("%s Venceu pois tem maior quantidade de pontos turisticos.\n",nomecidade1);
        } else {
            printf ("%s Venceu pois tem maior quantidade de pontos turisticos.\n",nomecidade2);
        }
   
       return 0;
    }
   


