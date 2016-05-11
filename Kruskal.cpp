 /**************************************************************************************************************************
 * Programa: Kruskal	
 * 
 * Descriçao:  Programa que implementa o algoritmo de Kruskall para resolver o "Problema da árvore geradora de custo mínimo". 
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
    
    

	system("pause");
}

    void imprimir_logo(FILE *impArq){
    
    char read_string[TAM_MAXIMO];
    
    while(fgets(read_string,sizeof(read_string),impArq) != NULL)
        printf("%s",read_string);
    }
