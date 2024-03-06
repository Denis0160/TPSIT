
#include <stdio.h>

int main()
{
   int dim=0;
    
    printf("quanti numeri vuoi inserire nei vettori??\n");
    scanf("%d",&dim);

    int vet1[dim], vet2[dim], vetSomma[dim];



    for(int i=0;i<dim;i++){
        printf("inserisci il numero del primo vettore nella posizione %d",i+1);
        scanf("%d",&vet1[i]);
    }

    for(int i=0;i<dim;i++){
        printf("inserisci il numero del secondo vettore nella posizione %d",i+1);
        scanf("%d",&vet2[i]);
    }

    for(int i=0;i<dim;i++){
        vetSomma[i]=vet1[i]+vet2[i];

    }

    for(int i=0;i<dim;i++){
        printf("\nIl vettore somma nella posizione %d risulta %d ",i+1,vetSomma[i]);
    }

}
