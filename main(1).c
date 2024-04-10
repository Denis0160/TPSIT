/*I codici a barre dei prodotti sono composti da 13 cifre, di cui l'ultima e' una cifra di controllo che si determina a partire dalle prime 12 (il codice vero e proprio) applicando le seguenti regole:
1)moltiplicare per 3 tutte le cifre in posizione dispari;
2)moltiplicare per 1 tutte le cifre in posizione pari;
3)sommare tra loro tutti i 12 valori così ottenuti;
4)calcolare il resto della divisione per 10 della somma ottenuta;
Codificare in linguaggio C un programma che, a paqrtire da un vettore di 12 elementi corrispondenti alle cifre di un codice a barre restituisca la cifra di controllo.*/

#include<stdio.h>
int main(){
       
    int dim=12;
    int vet[dim];
    int ultima=0, somma=0;

    printf("Inserisci le cifre del codice");
    for (int i = 0; i < dim; i++) {
        scanf("%d",vet+i);
    }

    
    int sommaD=0;
    for (int i=1;i<dim;i+=2) {
        sommaD=sommaD+(vet[i]*3);
    }

    
    int sommaP=0;
    for (int i=0;i<dim;i+=2) {
        sommaP=sommaP+(vet[i]*1);
    }

    
    int sommaT = 0;
    for (int i=0;i<dim;i++) {
        sommaT=sommaT+vet[i];
    }

    
    somma=sommaD+sommaP+sommaT;
    ultima=somma%10;
    printf("\nLa cifra di controllo e': %d",ultima);
}