//Author: Denis Sescu
//Data: 21/02/2024
/*Scrivere un programma in C che dopo aver inserito
i cognomi e i voti di una classe di studenti
determini e/o verifichi:
1) La media dei voti visualizzando, inoltre il numero di studenti inseriti;   
 2) Il voto massimo, il voto minimo ed I relativi cognomi degli studenti  
 3) Il numero degli studenti che hanno una valutazione sufficiente o superiore
 4) Il numero degli studenti che hanno una valutazione insufficiente o inferiore;   
 5) Il numero di studenti che hanno un voto compreso tra 7.50 e 10 estremi inclusi.
Il programma deve permettere il re-inserimento degli studenti e dei relativi voti.*/

#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(){
    
	int dim=0;
	printf("Quanti studenti ci sono nella classe??\n");
	scanf("%d",&dim);
    
	char studente[dim][100];
    
	float voto[dim];
	double media=0;
	int indice=0;
	int somma=0;
	bool controllo[dim];
	int indiceB=0;
	int risposta=0; 
	
	//Inizializzazione del vettore bool
	for(int i=0; i<dim;i++){
	    controllo[i]=false;
	}
    
    do{

	for(int i=0;i<dim;i++){
    	printf("inserisci il nome dello studente %d ",i+1);
    	scanf("%s",&studente[i][100]);
   	 
   	 
   	 
    	do{
    	printf("inserisci il voto dello studente \n");
    	scanf("%f",&voto[i]);
    	}while(voto[i]>10 || voto[i]<0);
    	
    	if(voto[i]>=6){
    	    controllo[i]=true;
    	}
    	indiceB++;
   	 
    	somma=somma+voto[i];
   	 
    	indice++;
   	 
	}
	media=somma/indice;
	
	printf("Hai inserito %d studenti\n",indiceB);
    
	printf("La media di tutti i voti è %.2f\n",media);
	
    float massimo=voto[0];//Assumo che il primo elemento sia il massimo iniziale
    
    // Scorri il vettore per trovare il massimo
    for (int i=0; i<dim;i++) {
        if (voto[i]>massimo) {
            massimo=voto[i];
        }
    }
    
    printf("Il voto massimo è %.2f\n",massimo);
    
    float minimo=voto[0];
    
    for(int i=0;i<dim;i++){
        if(voto[i]<minimo){
            minimo=voto[i];
        }
    }
    
    printf("Il voto minimo è %.2f\n", minimo);
     int indiceS=0;
     int indiceI=0;
     int indiceA=0;
    for(int i=0;i<dim;i++){
        if(voto[i]>=6){
            indiceS++;
            
        }else if(voto[i]>=7.50){
            indiceA++;
        }
        else{
            indiceI++;
        }
    }
    
    printf("Ci sono %d insufficenze\n ",indiceI);
    printf("Ci sono %d sufficenze\n",indiceS);
    printf("Ci sono %d con media superiore al 7.50\n",indiceI);
    
    for(int i=0;i<dim;i++){
        if(controllo[i]){
        printf("Gli alunni con media insufficente sono\n");
        printf("%s\n", studente[i]);
       
        }
        else{
            printf("Gli alunni con media sufficente sono\n");
            printf("%s\n",studente[i]);
        }
    }
    printf("\n");
    
    
    printf("Vuoi ripetere il programma?? 1) SI  2)NO\n");
    scanf("%d",&risposta);
    
    
    }while(risposta==1);
    
    
    
    
    
}
