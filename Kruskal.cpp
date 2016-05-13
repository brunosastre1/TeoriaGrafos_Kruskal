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
int find(int i);
int unioon(int i, int j);
int nrv, //nro de vertices
    m[200][200], pai[200], min, nra=1, i, j, find1, unioon1, a1,b1, customin=0;
    
    
int main() {
 
    //Impressao logo  
    char *nome_arquivo = "imagem.txt"; //variavel que possui o nome do arquivo que carega o arquivo com o logo, autores etc
    FILE *impArq = NULL;
 
    //tratativa de quando o arquivo não for encontrado ou ser nulo
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
    scanf("%d", &nrv);
    
    //Obtencao da matriz de adjacencia
    printf("\nDigite os valores da Matriz de Adjacencia:\n");
    for(i=1;i<=nrv;i++){
       for(j=1;j<=nrv;j++){
            scanf("%d", &m[i][j]);
            if(m[i][j]==0){
               m[i][j]==999;           
               }
               }
    }                       
    
    fflush(stdin);
      
    //Arestas da Arvore Geradora de Custo Minimo
    printf("\nAs arestas da AGCM sao:\n");
    while(nra<nrv){
         for(i=1,min=999;i<=nrv;i++){
            for(j=1;j<=nrv;j++){
               if(m[i][j] < min){
                  min = m[i][j];
                  a1=find1=i;
                  b1=unioon1=j;
               }
            }
         } 
      //uniao dos caminhos   
     find1=find(find1);
     unioon1=find(unioon1);
     
          if(unioon(find1,unioon1)){
             printf("\n%d aresta (%d,%d) = %d\n",nra++,a1,b1,min);
             customin +=min;
             }
             m[a1][b1] = m[b1][a1]=999;
     }                       
     printf("\nO Custo minimo eh de %d\n", customin);
     
	system("pause");
}
   //impressao do logo
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
    //promove a união das árvores cujos chefes são x e y respectivamente.
    int unioon(int i,int j){
	if(i!=j){
		pai[j]=i;
		return 1;
	}
	return 0;
    }
    
