#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
    //#define CIDADES 4
   char cidade[4][13] = {
       "BELÉM      ", 
       "FORTALEZA  ", 
       "MANAUS     ",
       "PORTO VELHO"};
    int distancia[4][4] =
 { {0,1611,5298,4397},
 {1611,0,5763,4865},
 {5298,5763,0,901},
 {4397,4865,901,0}
 };


int main (){
    int a, b,c,d;
    for(a=0;a<4;a++){
        printf("%ld\n",strlen(cidade[a]));
    }
    
    printf("\tTabela De distancias\n");
    printf("=======================================================\n");
    printf("\tOrigem\t\tDestino\t\tDistancia\n");
    printf("=======================================================\n");
    for(a=0;a<4;a++){
        for(b=0;b<4;b++){
            printf("\t%s\t%s\t%d\n", cidade[a],cidade[b],distancia[a][b]);
        }
    }
    printf("\nCodigos das cidades\n===================\n0-BELEM\n1-FORTALEZA\n2-MANAUS\n3-PORTO VELHO\n");
    printf("Codigo da cidade de horigem;");
    scanf("%d",&c);
    printf("Codigo da cidade destino;");
    scanf("%d",&d);
    printf("A distancia entre %s e %s eh de %dkm",cidade[c],cidade[d],distancia[c][d]);
}
//atividade b
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
int main(){
    int a,b,c,d[6][6];
    printf("IMPRIME TODOS OS ELEMENTOS DA MATRIX:\n");
    for(a=0;a<6;a++){
        for (b=0;b<6;b++)
        {
            d[a][b] = rand()%100000 + 1;
            printf("%d\t",d[a][b]);
            
        }
        printf("\n");
    }
    printf("\nIMPRIME TODOS OS INDICES DAS POSICOES DA MATRIZ:\n");
    for(a=0;a<6;a++){
        for (b=0;b<6;b++){
            printf("%d%d\t",a,b);
        }
        printf("\n");
    }    
    printf("IMPRIME TODOS OS ELETOS D DIAGONAL PRINCIPAL:\n");
    for(a=0;a<6;a++){
        printf("%d\t",d[a][a]);
    }
    printf("\nIMPRIME TODOS OS ELEMENTOS DA DIAGONAL PRINCIPAL:\n");
    for(a=0;a<6;a++){

        printf("\n"); 
        
        for (b=0;b<a;b++)
        {
           printf("\t"); 
        }
        printf("%d",d[a][a]);
    }
    printf("\nIMPRIME TODOS OS ELEMENTOS DA DIAGONAL PRINCIPAL E ZERO NAS DEMAIS\n");
    for(a=0;a<6;a++){
        for(b=0;b<6;b++){
            if (a==b)
            {
                printf("%d\t",d[a][b]);
            }
            else{
                printf(  "0\t");
            }
             
        }
        printf("\n");
    }
    printf("IMPRIME TODOS OS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL\n");
    for(a=0;a<6;a++){
        for(b=0;b<6;b++){
            if(b<=a)
            {
                printf("\t");
            }
            else{
                printf("%d\t",d[a][b]);
            }
            
        }
        printf("\n");
    }
    
}