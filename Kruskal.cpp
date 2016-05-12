 /**************************************************************************************************************************
 * Programa: Kruskal	
 * 
 * Descriçao:  Programa que implementa o algoritmo de Kruskall para resolver o "Problema da árvore geradora de m mínimo". 
 *
 * Autores:  Bruno Sastre     Felipe Aversoni
 * TIA:      41316861         41313038 
 ****************************************************************************************************************************/

#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

#define TAM_MAXIMO 128

void imprimir_logo(FILE *impArq);

int main() {

    int nv //nro de vertices
    m[150][150],i,j;
    
    
 
    //Impressao logo  
    char *nome_arquivo = "imagem.txt";
    FILE *impArq = NULL;
 
    if((impArq = fopen(nome_arquivo,"r")) == NULL)
    {
        fprintf(stderr,"erro ao abrir %s\n",nome_arquivo);
        return 1;
    }
    
    imprimir_logo(impArq);
    printf("\n");
    fclose(impArq);
    printf("\n");
    
    //Obtencao dos vertices
    printf("\nDigite a quantidade de vertices:");
    scanf("%d", &nv);
    
    //Obtencao da matriz de adjacencia
    printf("\nDigite os valores da Matriz de Adjacencia:\n");
    for(i=1;i<=nv;i++){
       for(j=1;j<=nv;j++){
            scanf("%d", &m[i][j]);
            if(m[i][j]==0){
               m[i][j]==999;           
               }
               }
    }                       
 

	system("pause");
}

    void imprimir_logo(FILE *impArq){
    
    char read_string[TAM_MAXIMO];
    
    while(fgets(read_string,sizeof(read_string),impArq) != NULL)
        printf("%s",read_string);
    }
    
    //devolve o chefe da árvore de F que contém o vértice v.
    int find(int i){
        while(pai[i])
        i=pai[i];
        return i;
    }

    
