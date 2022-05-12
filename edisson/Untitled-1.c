#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<conio.h>
    //#define CIDADES 4
   char cidade[4][12] = {"BELÉM", "FORTALEZA", "MANAUS",
"PORTO VELHO"};
    int distancia[4][4] =
 { {0,1611,5298,4397},
 {1611,0,5763,4865},
 {5298,5763,0,901},
 {4397,4865,901,0}
 };


int main (){
    int a, b,c,d;
    
    printf("\tTabela De distancias\n");
    printf("=======================================================\n");
    printf("\tOrigem\t\tDestino\t\tDistancia\n");
    printf("=======================================================\n");
    for(a=0;a<4;a++){
        for(b=0;b<4;b++){
            printf("\t%s\t\t%s\t\t%d\n", cidade[a],cidade[b],distancia[a][b]);
        }
    }
    printf("\nCodigos das cidades\n===================\n0-BELEM\n1-FORTALEZA\n2-MANAUS\n3-PORTO VELHO\n");
    printf("Codigo da cidade de horigem;");
    scanf("%d",&c);
    printf("Codigo da cidade destino;");
    scanf("%d",&d);
    printf("A distancia entre %s e %s eh de %dkm",cidade[c],cidade[d],distancia[c][d]);
}