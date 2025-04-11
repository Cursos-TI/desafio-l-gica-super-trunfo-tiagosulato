#include <stdio.h>


    int main() {
       // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    
       int  pontos_turisticos1, pontos_turisticos2, contador1, contador2;
       int opcao, atributos1, atributos2;
       int resultadosoma1, resultadosoma2;
       unsigned long int populacao1, populacao2;
   
       char estado1, estado2;
       char codcarta1[50];
       char nomepais1[50];
       char codcarta2[50];
       char nomepais2[50];
   
       float area1, pib1, area2, pib2, superpoder1, superpoder2; 
       float densid_populacional1, pib_percapita1, densid_populacional2, pib_percapita2;
       float soma1, soma2;
      
   
       // Cadastro das Cartas:

        printf("Menu Principal\n");
        printf("1. Iniciar Jogo\n");
        printf("2. Ver Regras\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: \n");
        scanf("%d", &opcao);

       
       
       switch (opcao) {
        case 1:
       printf ("Para começar o jogo vamos começar cadastrando as cartas! \n"); 
       printf("Vamos digitar os dados da carta 1 \n"); 
      
       printf("Digite o nome do País:\n");
       scanf(" %s", &nomepais1);
   
       printf ("Digite a população do País \n");
       scanf(" %lu", &populacao1);
   
       printf ("Digite a area do País em Km² \n");
       scanf("      %f", &area1);
   
       printf ("Digite o pib do País \n");
       scanf("      %f", &pib1);
   
       printf ("Digite a quantidade de Pontos Turisticos do País \n");
       scanf("      %i", &pontos_turisticos1);
   
       
       //atribuindo valor as variaveis carta 2
   
       printf ("Vamos digitar os dados da carta 2 \n");
   
         
       printf ("Digite o nome do País \n");
       scanf(" %s", &nomepais2);
   
       printf ("Digite a população do País \n");
       scanf(" %lu", &populacao2);
   
       printf ("Digite a area do País em Km² \n");
       scanf(" %f", &area2);
   
       printf ("Digite o pib do País \n");
       scanf(" %f", &pib2);
   
       printf ("Digite a quantidade de Pontos Turisticos do País \n");
       scanf(" %i", &pontos_turisticos2);

        //calculando densidade e Pib per Capita
   
        densid_populacional1 = populacao1 / area1;
        densid_populacional2 = populacao2 / area2;
        pib_percapita1 = pib1 / populacao1;
        pib_percapita2 = pib2 / populacao2;
    
        //calculando super poder e comparando as cartas
    
        superpoder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_percapita1 + (1/densid_populacional1);
        superpoder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_percapita2 + (1/densid_populacional2);
        contador1 = 0;
        contador2 = 0;
       printf ("Agora escolha o primeiro atributo voce quer comparar.\n");
       printf ("1. População\n");
       printf ("2. Area\n");
       printf ("3. PIB\n ");
       printf ("4. Pontos turisticos \n");
       printf ("5. Densidade populacional \n");
       printf ("6. PIB per Capita \n");
       printf ("7. Super poder \n");
       scanf ("%d", &atributos1);
    
        switch (atributos1)
        {
        case 1:
        printf ("Você escolheu o atributo populaçao \n");
        printf ("O País %s  tem a população de: %lu \n", nomepais1, populacao1);
        printf ("O País %s  tem a população de: %lu \n", nomepais2, populacao2);
        soma1 = populacao1;
        soma2 = populacao2;        
        
            if (populacao1 > populacao2)
            {
             contador1++;
               
             printf ("O Pais Vencedor foi %s pois tem a maior população \n",nomepais1);

            } else if (populacao2 > populacao1) {

             contador2++;
             
             printf ("O Pais Vencedor foi %s pois tem a maior população \n",nomepais2);
               
            } else {
             printf ("Houve um empate pois os atributos são iguais");
            }            
            break;
        case 2 :
        printf ("Você escolheu o atributo Area \n");
        printf ("O País %s  tem a Area de: %.2f \n", nomepais1, area1);
        printf ("O País %s  tem a Area de: %.2f \n", nomepais2, area2);
        soma1 = area1;
        soma2 = area2;
        
            if ( area1 > area2)
            {
             contador1++;   
             printf ("O Pais Vencedor foi %s pois tem a maior Area \n",nomepais1);

            } else if (area2 > area1) {
             contador2++;
             printf ("O Pais Vencedor foi %s pois tem a maior Area \n",nomepais2);
               
            } else {
             printf ("Houve um empate pois os atributos são iguais");
            }            
            break;
        case 3 :
        printf ("Você escolheu o atributo PIB \n");
        printf ("O País %s  tem o PIB de: %.2f \n", nomepais1, pib1);
        printf ("O País %s  tem o PIB de: %.2f \n", nomepais2, pib2);
        soma1 = pib1;
        soma2 = pib2;
        
            if ( pib1 > pib2)
            {
             contador1++;   
             printf ("O Pais Vencedor foi %s pois tem o maior PIB \n",nomepais1);

            } else if (pib2 > pib1) {
             contador2++;   
             printf ("O Pais Vencedor foi %s pois tem o maior PIB \n",nomepais2);
               
            } else {
             printf ("Houve um empate pois os atributos são iguais");
            }            
            break;
        case 4:
        printf ("Você escolheu o atributo Pontos Turisticos \n");
        printf ("O País %s  tem a quantidade de pontos turisticos de: %i \n", nomepais1, pontos_turisticos1);
        printf ("O País %s  tem a quantidade de pontos turisticos de: %i \n", nomepais2, pontos_turisticos2);
        soma1 = pontos_turisticos1;
        soma2 = pontos_turisticos2;
        
            if ( pontos_turisticos1 > pontos_turisticos2)
            {
             contador1++;
             printf ("O Pais Vencedor foi %s pois tem a maior quantidade de Pontos turisticos \n",nomepais1);

            } else if (pontos_turisticos2 > pontos_turisticos1) {
             contador2++;
             printf ("O Pais Vencedor foi %s pois tem a maior Area \n",nomepais2);
               
            } else {
             printf ("Houve um empate pois os atributos são iguais");
            }            
            break;
        case 5 :
        printf ("Você escolheu o atributo Densidade Populacional \n");
        printf ("O País %s  tem a Densidade Populacional de: %.2f \n", nomepais1, densid_populacional1);
        printf ("O País %s  tem a Densidade Populacional de: %.2f \n", nomepais2, densid_populacional2);
        soma1 = densid_populacional1;
        soma2 = densid_populacional2;
        
            if ( densid_populacional1 < densid_populacional2)
            {
             contador1++;
             printf ("O Pais Vencedor foi %s pois tem a menor Densidade Populacional \n",nomepais1);

            } else if (densid_populacional2 < densid_populacional1) {
             contador2++;
             printf ("O Pais Vencedor foi %s pois tem a menor Densidade Populacional \n",nomepais2);
               
            } else {
             printf ("Houve um empate pois os atributos são iguais");
            }            
            break;
        case 6 :
        printf ("Você escolheu o atributo PIB per Capita \n");
        printf ("O País %s  tem o PIB per Capita de: %.2f \n", nomepais1, pib_percapita1);
        printf ("O País %s  tem o PIB per Capita de: %.2f \n", nomepais2, pib_percapita2);
        soma1 = pib_percapita1;
        soma2 = pib_percapita2;
        
            if ( pib_percapita1 > pib_percapita2)
            {
             contador1++;
             printf ("O Pais Vencedor foi %s pois tem o maior PIB per Capita \n",nomepais1);

            } else if (pib_percapita2 > pib_percapita1) {
             contador2++;
             printf ("O Pais Vencedor foi %s pois tem o maior PIB per Capita \n",nomepais2);
               
            } else {
             printf ("Houve um empate pois os atributos são iguais");
            }            
            break;
        case 7 :
        printf ("Você escolheu o atributo Super poder \n");
        printf ("O País %s  tem o super poder de %.2f \n", nomepais1, superpoder1);
        printf ("O País %s  tem o super poder de %.2f \n", nomepais2, superpoder2);
        soma1 = superpoder1;
        soma2 = superpoder2;
        
            if ( superpoder1 > superpoder2)
            {
             contador1++;
             printf ("O Pais Vencedor foi %s pois tem o maior Super Poder \n",nomepais1);

            } else if (superpoder2 > superpoder1) {
             contador2++;
             printf ("O Pais Vencedor foi %s pois tem o maior Super Poder \n",nomepais2);
               
            } else {
             printf ("Houve um empate pois os atributos são iguais");
            }            
            break;
        default:
        printf("Opção inválida. Tente novamente.\n");
        break;
        }
        
        printf ("Agora vamos escolher o Segundo atributo.\n\n");
        printf ("***Atenção: Você deve escolher um atributo diferente do primeiro***.\n\n");
        printf ("Escolha um dos atributos.\n");
        printf ("1. População\n");
        printf ("2. Area\n");
        printf ("3. PIB\n ");
        printf ("4. Pontos turisticos \n");
        printf ("5. Densidade populacional \n");
        printf ("6. PIB per Capita \n");
        printf ("7. Super poder \n");
        scanf ("%d", &atributos2);

        if (atributos1 == atributos2)
        {
            printf ("Você escolheu o mesmo atributo.\n");
        } else { 
             switch (atributos2)
             {
                case 1:
        printf ("Você escolheu o atributo populaçao \n");
        printf ("O País %s  tem a população de: %lu \n", nomepais1, populacao1);
        printf ("O País %s  tem a população de: %lu \n", nomepais2, populacao2);
        soma1 = soma1 + populacao1;
        soma2 = soma2 + populacao2;
        
            if (populacao1 > populacao2)
            {
             contador1++;
             printf ("O Pais Vencedor foi %s pois tem a maior população \n",nomepais1);

            } else if (populacao2 > populacao1) {
             contador2++;
             printf ("O Pais Vencedor foi %s pois tem a maior população \n",nomepais2);
               
            } else {
             printf ("Houve um empate pois os atributos são iguais");
            }            
            break;
        case 2 :
        printf ("Você escolheu o atributo Area \n");
        printf ("O País %s  tem a Area de: %.2f \n", nomepais1, area1);
        printf ("O País %s  tem a Area de: %.2f \n", nomepais2, area2);
        soma1 = soma1 + area1;
        soma2 = soma2 + area2;
       
            if ( area1 > area2)
            {
             contador1++;
             printf ("O Pais Vencedor foi %s pois tem a maior Area \n",nomepais1);

            } else if (area2 > area1) {
             contador2++;
             printf ("O Pais Vencedor foi %s pois tem a maior Area \n",nomepais2);
               
            } else {
             printf ("Houve um empate pois os atributos são iguais");
            }            
            break;
        case 3 :
        printf ("Você escolheu o atributo PIB \n");
        printf ("O País %s  tem o PIB de: %.2f \n", nomepais1, pib1);
        printf ("O País %s  tem o PIB de: %.2f \n", nomepais2, pib2);
        soma1 = soma1 + pib1;
        soma2 = soma2 + pib2;
        
            if ( pib1 > pib2)
            {
             contador1++;
             printf ("O Pais Vencedor foi %s pois tem o maior PIB \n",nomepais1);

            } else if (pib2 > pib1) {
             contador2++;
             printf ("O Pais Vencedor foi %s pois tem o maior PIB \n",nomepais2);
               
            } else {
             printf ("Houve um empate pois os atributos são iguais");
            }            
            break;
        case 4:
        printf ("Você escolheu o atributo Pontos Turisticos \n");
        printf ("O País %s  tem a quantidade de pontos turisticos de: %i \n", nomepais1, pontos_turisticos1);
        printf ("O País %s  tem a quantidade de pontos turisticos de: %i \n", nomepais2, pontos_turisticos2);
        soma1 = soma1 + pontos_turisticos1;
        soma2 = soma2 + pontos_turisticos2;
        
            if ( pontos_turisticos1 > pontos_turisticos2)
            {
             contador1++;
             printf ("O Pais Vencedor foi %s pois tem a maior quantidade de Pontos turisticos \n",nomepais1);

            } else if (pontos_turisticos2 > pontos_turisticos1) {
             contador2++;
             printf ("O Pais Vencedor foi %s pois tem a maior Area \n",nomepais2);
               
            } else {
             printf ("Houve um empate pois os atributos são iguais");
            }            
            break;
        case 5 :
        printf ("Você escolheu o atributo Densidade Populacional \n");
        printf ("O País %s  tem a Densidade Populacional de: %.2f \n", nomepais1, densid_populacional1);
        printf ("O País %s  tem a Densidade Populacional de: %.2f \n", nomepais2, densid_populacional2);
        soma1 = soma1 + densid_populacional1;
        soma2 = soma2 + densid_populacional2;
        
            if ( densid_populacional1 < densid_populacional2)
            {
             contador1++;
             printf ("O Pais Vencedor foi %s pois tem a menor Densidade Populacional \n",nomepais1);

            } else if (densid_populacional2 < densid_populacional1) {
             contador2++;
             printf ("O Pais Vencedor foi %s pois tem a menor Densidade Populacional \n",nomepais2);
               
            } else {
             printf ("Houve um empate pois os atributos são iguais");
            }            
            break;
        case 6 :
        printf ("Você escolheu o atributo PIB per Capita \n");
        printf ("O País %s  tem o PIB per Capita de: %.2f \n", nomepais1, pib_percapita1);
        printf ("O País %s  tem o PIB per Capita de: %.2f \n", nomepais2, pib_percapita2);
        soma1 = soma1 + pib_percapita1;
        soma2 = soma2 + pib_percapita2;
        
            if ( pib_percapita1 > pib_percapita2)
            {
             contador1++;
             printf ("O Pais Vencedor foi %s pois tem o maior PIB per Capita \n",nomepais1);

            } else if (pib_percapita2 > pib_percapita1) {
             contador2++;
             printf ("O Pais Vencedor foi %s pois tem o maior PIB per Capita \n",nomepais2);
               
            } else {
             printf ("Houve um empate pois os atributos são iguais");
            }            
            break;
        case 7 :
        printf ("Você escolheu o atributo Super poder \n");
        printf ("O País %s  tem o super poder de %.2f \n", nomepais1, superpoder1);
        printf ("O País %s  tem o super poder de %.2f \n", nomepais2, superpoder2);
        soma1 = soma1 + superpoder1;
        soma2 = soma2 + superpoder2;
        
            if ( superpoder1 > superpoder2)
            {
             contador1++;
             printf ("O Pais Vencedor foi %s pois tem o maior Super Poder \n",nomepais1);

            } else if (superpoder2 > superpoder1) {
             contador2++;
             printf ("O Pais Vencedor foi %s pois tem o maior Super Poder \n",nomepais2);
               
            } else {
             printf ("Houve um empate pois os atributos são iguais");
            }            
            break;
        default:
        printf("Opção inválida. Tente novamente.\n");
        break;
        }

        if (soma1 > soma2)
        {
            contador1++;
                   
            printf ("O país vencedor nas somas dos atributos foi: %s com %.2f pontos. \n",nomepais1,soma1);
            printf ("Já o país %s ficou com penas %.2f pontos.\n",nomepais2,soma2);

        } else if (soma2 > soma1)
        {
            contador2++;
            
            printf ("O país vencedor nas somas dos atributos foi: %s com %.2f pontos.\n",nomepais2,soma2);
            printf ("Já o país %s ficou com penas %.2f pontos.\n",nomepais1,soma1);
            
        } else {
            printf ("Houve um empate a soma dos atributos são iguais");
        }

                
        printf ("Placar Final\n");
        printf ("%s %i X %i %s \n",nomepais1,contador1,contador2,nomepais2);

        break;

        }

        case 2 : 
        printf ("1.As regras do jogo são: \n");
        printf ("2.Primeiro voce tem que cadastar os atributos nas Cartas \n");
        printf ("3.Escolha um dos atributos para fazer a comparação das cartas \n");
        printf ("4.Vence a carta que tiver o melhor atributo \n");
        printf ("5.Tenha um bom jogo e Divirta-se \n\n");
            break;
        case 3 :
        printf ("Saindo....... \n");
        break;
        default:
        printf ("Opção invalida. Tente novamente. \n");

       }
         
       return 0;
    }
 
