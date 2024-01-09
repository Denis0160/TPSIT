#include <stdio.h>

int main() {
    /*Write a program in C which, after reading N numbers (n chosen by the user), calculates and displays on the screen the sum 
    of the positive numbers, the sum of the negative numbers
    in absolute value, the count of the negative and positive numbers, the average of the positive and negative numbers.*/
    
    int N, numero;
    int sommaPositivi = 0, sommaNegativi = 0, conteggioPositivi = 0, conteggioNegativi = 0;

    
    //insertion of input data
    printf("Inserisci il numero di elementi (N): ");
    scanf("%d", &N);

    // Loop through N numbers to perform calculations
    for (int i = 0; i < N; ++i) {
        printf("Inserisci il numero %d: ", i + 1);
        scanf("%d", &numero);

        // Check if the number is positive
        if (numero > 0) {
            sommaPositivi += numero;
            conteggioPositivi++;
        
        } 
        // Check if the number is negative
         else if (numero < 0) {
            sommaNegativi += -numero; 
            conteggioNegativi++;
        }
       
    }
    // Calculate average for positive and negative numbers
    double mediaPositivi = 0.0, mediaNegativi = 0.0;

    if (conteggioPositivi > 0) {
        mediaPositivi = (double)sommaPositivi / conteggioPositivi;
    }

    if (conteggioNegativi > 0) {
        mediaNegativi = (double)sommaNegativi / conteggioNegativi;
    }

    // Output: Display the results
    printf("\nRisultati:\n");
    printf("Somma positivi: %d\n", sommaPositivi);
    printf("Somma negativi (in valore assoluto): %d\n", sommaNegativi);
    printf("Conteggio dei numeri positivi: %d\n", conteggioPositivi);
    printf("Conteggio dei numeri negativi: %d\n", conteggioNegativi);
    printf("Media positivi: %.2f\n", mediaPositivi);
    printf("Media negativi: %.2f\n", mediaNegativi);

    return 0;
}