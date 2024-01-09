#include <stdio.h>

void main() {
    int n;

    // Vector size with validation 
    do {
        printf("Quanti numeri vuoi inserire? ");
        scanf("%d", &n);
    } while (n <= 0 || n > 30);
    
    
    // Declaration of variables
    double mediaP = 0, sommaP = 0;
    double mediaD = 0, sommaD = 0;
    int i = 0, pari = 0, dispari = 0;
    int vett[30];
    
     // LOOP TO FILL THE ARRAY
    for (i = 0; i < n; i++) {
        printf("\nInserisci il numero %d: ", i + 1);
        scanf("%d", &vett[i]);
    }


    printf("\nNumeri pari:\n");
    
    // Selection of even numbers
    for (i = 0; i < n; i++) {
        if (vett[i] % 2 == 0) {
            printf("%d ", vett[i]);
            sommaP += vett[i];
            pari++;
        }
    }
    
    // Selection of odd numbers 
    printf("\nNumeri dispari:\n");
    for (i = 0; i < n; i++) {
        if (vett[i] % 2 != 0) {
            printf("%d ", vett[i]);
            sommaD += vett[i];
            dispari++;
        }
    }
    
    // Sum and average of even numbers 
    if (pari > 0) {
        mediaP = sommaP / pari;
        printf("\nSomma dei numeri pari: %.2f\n", sommaP);
        printf("Media dei numeri pari: %.2f\n", mediaP);
    } else {
        printf("\nNessun numero pari inserito.\n");
    }
    
    // Sum and average of odd numbers
    if (dispari > 0) {
        mediaD = sommaD / dispari;
        printf("\nSomma dei numeri dispari: %.2f\n", sommaD);
        printf("Media dei numeri dispari: %.2f\n", mediaD);
    } else {
        printf("\nNessun numero dispari inserito.\n");
    }
}