#include <stdio.h>

int main(){
    int dim=0,t,k;
    printf("Inserisci la dimensione del vettore\n");
    scanf("%d",&dim);

    int vet[dim], pari[dim], dispari[dim];

    

    for(int i=0; i<dim;i++){
        printf("inserisci il numero nella posizione %d ",i+1);
        scanf("%d",&vet[i]);
    }

    //Ciclo per separare i numeri pari da quelli dispari applicando un controllo all'interno 
    //del ciclo 

    for(int i=0;i<dim;i++){
        if(vet[i]%2==0){
            pari[k]=vet[i];
            k++;
        }else{
            dispari[t]=vet[i];
            t++;
        }
    }

     printf("Il vettore pari risulta:\n ");
    for(int i=0;i<dim;i++){
       
        printf("\n%d",pari[i]);

    }
    printf("Il vettore dispari risulta:\n ");
    for(int i=0;i<dim;i++){
        
        printf("\n%d",dispari[i]);

    }

}