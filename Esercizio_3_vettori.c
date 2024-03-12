#include <stdio.h>

int main() {
    int N, num, count = 0;
    
    // Input della dimensione del vettore
    printf("Inserisci la dimensione del vettore: ");
    scanf("%d", &N);

    // Dichiarazione e input del vettore
    int vet[N];
    printf("Inserisci i numeri nel vettore:\n");
    for (int i = 0; i < N; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vet[i]);
    }

    // Input del numero da cercare
    printf("Inserisci il numero da cercare: ");
    scanf("%d", &num);

    // Controllo se il numero esiste nel vettore
    for (int i = 0; i < N; i++) {
        if (vet[i] == num) {
            count++;
            printf("Il numero %d si trova alla posizione %d.\n", num, i + 1);
        }
    }

    // Stampa del numero di volte in cui il numero è presente nel vettore
    if (count == 0)
        printf("Il numero %d non esiste nel vettore.\n", num);
    else
        printf("Il numero %d si ripete %d volte nel vettore.\n", num, count);

    return 0;
}