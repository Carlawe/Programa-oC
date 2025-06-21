
     
 #include <stdio.h>
int main() { 
        //Declaração das variaveis
     char pais1[20], pais2[20];
     int populacao1, populacao2 ;
     float area1, area2 ;
     float pib1, pib2 ;
     int pontoturistico1, pontoturistico2 ; 
     float densidadepopulacional1, densidadepopulacional2;
     float pibpercapta1, pibpercapta2;
     float superpoder1, superpoder2;
     int resultado1, resultado2;
     int atributo1, atributo2;
     int soma;

    
   
    //Entrada dos dados da primeira carta.
     printf("Bem vindo ao super trunfo ***Países***!!!!!\n");
     printf("Faça o cadastro da carta 1 : \n");
     printf("País\n");
     scanf("%s", &pais1);
     printf("População  (sem ponto ou vírgula):\n");
     scanf("%u", &populacao1);
     printf("Área (sem ponto ou virgula):\n");
     scanf("%f",&area1);
     printf("Pib (sem ponto ou vírgula):\n");
     scanf("%f", &pib1);
     printf("Número de pontos turisticos:\n");
     scanf("%d",&pontoturistico1);

          
     // espaco entre uma sequência e outra.
     printf("\n");
       

     
            //Saída dos dados da primeira carta
     printf("Carta 1 \n");
     printf("População:%u\n", populacao1);
     printf("Área: %f km2\nPIB: %f\nNumero de pontos turísticos: %d\n",area1, pib1, pontoturistico1);
     printf("Densidade populacional:%.2f\n", (float)(populacao1 / area1));
     

     // espaco entre uma sequência e outra.
     printf("\n");
      
     
          //Entrada dos dados da segunda carta.
     printf("Faça o cadastro da carta 2: \n");
     printf("País:\n");
     scanf("%s",&pais2);
     printf("População (sem ponto ou vírgula):\n");
     scanf("%u", &populacao2);
     printf("Área (sem ponto ou vírgula):\n");
     scanf("%f",&area2);
     printf("PIB:\n");
     scanf("%f",&pib2);
     printf("Número de pontos turisticos:\n");
     scanf("%d",&pontoturistico2);
      
     printf("\n");
     
       //Saída dos dados da segunda carta.
     printf("Carta 2\n");
     printf("População:%u\n", populacao2);
     printf("Área: %f km2\nPIB: %f\nNumero de pontos turísticos: %d\n",area2, pib2, pontoturistico2);
     printf("Densidade populacional:%.2f\n", (float)populacao2/ area2);
     

     printf("\n");


                                     //Menu
                             //escolha da carta por atributo
            printf("Comparação das cartas por atributo\n");            
            printf("Escolha o primeiro atributo\n");
            printf("1.População\n");
            printf("2.Área\n");
            printf("3.Pib\n");
            printf("4.Número de pontos turísticos\n");
            printf("5.Densidade populacional\n");
            
            printf("escolha a comparação:\n");  
            scanf("%d", &atributo1);    
            
            
                                  
            
                              
          
                 printf("Carta 1 %s, Carta 2 %s\n", pais1 , pais2);//Saída dos nomes dos paises de cada carta
               
               
                              //Comparacao das cartas por atributo
           switch (atributo1)
            {
           case 1:
             printf("Você escolheu a opção população!\n");
             printf("Populacão Carta 1: %d - População carta 2: %d\n", populacao1, populacao2); //Saída valor atributo 1 e atributo 2.
             //resultado1 = populacao1 > populacao2 ? 1 : 0;
             resultado1 = (float)populacao1 + area1; (float)populacao1 + pib1; populacao1 + pontoturistico1; populacao1 + (float)densidadepopulacional1; //Resultado da soma dos atributos carta 1 + carta2.
             break;   
             
         
            case 2:
            printf("Você escolheu a opção Área!\n");
            printf("Área Carta 1: %.2f - Área carta 2: %.2f\n", area1, area2);//Saída valor atributo 1 e atributo 2.
             //resultado1 = area1 > area2 ? 1 : 0;
             resultado1 =  area1 + (float)populacao1 ; area1 + pib1; area1 + (float)pontoturistico1; area1 + densidadepopulacional1;//Resultado da soma dos atributos carta 1 + carta2.
             break;
                 
           case 3:
             printf("Você escolheu a opção Pib!\n");
             printf("Pib Carta 1: %.2f - Pib carta 2: %.2f\n", pib1, pib2);//Saída valor atributo 1 e atributo 2.
             //resultado1 = pib1 > pib2 ? 1 : 0;
             resultado1 = pib1 + (float)populacao1 ; pib1 + area1;  pib1 + (float)pontoturistico1; pib1 + densidadepopulacional1;//Resultado da soma dos atributos carta 1 + carta2.
            break;
                 
           case 4:
            printf("Você escolheu a opção Ponto turístico!\n");
            printf("Ponto turístico Carta 1: %d - Ponto turistico carta 2: %d\n", pontoturistico1, pontoturistico2);//Saída valor atributo 1 e atributo 2.
            //resultado1 = pontoturistico1 > pontoturistico2 ? 1 : 0;
            resultado1 = pontoturistico1 + populacao1; (float)pontoturistico1 + area1; (float)pontoturistico1 +  pib1;  (float)pontoturistico1 + densidadepopulacional1;//Resultado da soma dos atributos carta 1 + carta2.
                 
           case 5:
                         
           printf("Você escolheu a opção Densidade populacional!\n");
           printf("Densidade populacional Carta 1: %f - Densidade populacional carta 2: %f\n", densidadepopulacional1, densidadepopulacional2);//Saída valor atributo 1 e atributo 2.
          //resultado1 = densidadepopulacional1 < densidadepopulacional2 ? 1 : 0;
          resultado1 = densidadepopulacional1 + (float)populacao1; densidadepopulacional1 + area1; densidadepopulacional1 + pib1; densidadepopulacional1 + (float)pontoturistico1;//Resultado da soma dos atributos carta 1 + carta2.
          break; 
           
            default:                             // Opção do segundo atributo.
               printf("Opção de jogo inválida!");
           }
              
                printf("Escolha o segundo atributo\n");
            printf("1.População\n");
            printf("2.Área\n");
            printf("3.Pib\n");
            printf("4.Número de pontos turísticos\n");
            printf("5.Densidade populacional\n");
            
            printf("escolha a comparação:\n");  
            scanf("%d", &atributo2);         
             
           
           if(atributo1 == atributo2){
            printf(("Você escolheu o mesmo atributo\n"));
          
           }else{
              
                  switch(atributo2){
                 case 1:
             printf("Você escolheu a opção população!\n");
             printf("Populacão Carta 1: %d - População carta 2: %d\n", populacao1, populacao2);//Saída valor atributo 1 e atributo 2.
             //resultado2 = populacao1 > populacao2 ? 1 : 0;
             resultado2 = populacao2 + area2; populacao2 + (float)pib2; populacao2 + pontoturistico2; (float)populacao2 + densidadepopulacional2;//Resultado da soma dos atributos carta 1 + carta2.
           
             break;   
             
         
            case 2:
            printf("Você escolheu a opção Área!\n");
             printf("Área Carta 1: %.2f - Área carta 2: %.2f\n", area1, area2);//Saída valor atributo 1 e atributo 2.
             //resultado2 = area1 > area2 ? 1 : 0;
             resultado2 = area2 + (float)populacao2; area2 + pib2; area2 + (float)pontoturistico2; area2 + densidadepopulacional2;//Resultado da soma dos atributos carta 1 + carta2.
             break;
                 
           case 3:
             printf("Você escolheu a opção Pib!\n");
             printf("Pib Carta 1: %.2f - Pib carta 2: %.2f\n", pib1, pib2);//Saída valor atributo 1 e atributo 2.
             //resultado2 = pib1 > pib2 ? 1 : 0;
             resultado2 = pib2 + (float)populacao2; pib2 + area2;  pib2 + (float)pontoturistico2; pib2 + densidadepopulacional2; //Resultado da soma dos atributos carta 1 + carta2.
             
            break;
                 
           case 4:
            printf("Você escolheu a opção Ponto turístico!\n");
            printf("Ponto turistico Carta 1: %d - Ponto turistico carta 2: %d\n", pontoturistico1, pontoturistico2);//Saída valor atributo 1 e atributo 2.
            // resultado2 = pontoturistico1 > pontoturistico2 ? 1 : 0;
             resultado2 = pontoturistico2 + populacao2; (float)pontoturistico2 + area2; (float)pontoturistico2 +  pib2;  (float)pontoturistico2 + densidadepopulacional2;//Resultado da soma dos atributos carta 1 + carta2.
            break;   
           
            case 5:
                            
             printf("Você escolheu a opção Densidade populscional!\n");
             printf("Densidade populacional Carta 1: %f - Densidade populacional carta 2: %f\n", densidadepopulacional1, densidadepopulacional2);//Saída valor atributo 1 e atributo 2.
             //resultado2 = densidadepopulacional1 < densidadepopulacional2 ? 1 : 0;
             resultado2 = densidadepopulacional2 + (float)populacao2; densidadepopulacional2 + area2; densidadepopulacional2 + pib2; densidadepopulacional2 + (float)pontoturistico2;//Resultado da soma dos atributos carta 1 + carta2.
            break; 
           
            default:
               printf("Opção de jogo inválida!");
               break;
           }
           
           printf("\n");
                               //Comparação das cartas,
          if(resultado1 > resultado2){
            printf("Carta 1 venceu\n");
          }else if(resultado1 == resultado2){
            printf("Empatou!!");

          }else{
            printf("Carta 2 venceu!\n");
          }
        }
            printf("\n");
            
         printf( "resultado Carta 1: %d, Resultado carta 2: %d", resultado1, resultado2);   //saida da soma dos resultados carta 1 + carta 2.
            
           
            return 0;
        }   