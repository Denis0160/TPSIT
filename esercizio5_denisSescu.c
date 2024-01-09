
#include <stdio.h>

int main() {
    
    // Declaration and initialization of variables
    char denominazione[50]; 
    int continua, countIntervallo = 0, countTot = 0, mediaCount = 0;
    float sommaPrezzi = 0, prezzo,  mediaPrezzi = 0, prezzoMax = 0, prezzoMin = 0, mediaIntervallo = 0, sommaPrezziIntervallo = 0;
    

    // Cycle for entering denominations and prices
    do {
        // Do-while loop to ensure the user enters a positive number
        do {
            // Prompts the user to enter a name
            printf("Inserisci il nome della denominazione: ");
            scanf("%s", denominazione);

            // Prompts the user to enter the stock price
            printf("Inserisci il prezzo dell'azione %s: ", denominazione);
            scanf("%f", &prezzo);

            //if the price is negative it is incorrect
            if (prezzo <= 0) {
                do {
                    printf("Non puoi inserire un prezzo negativo! Inserisci un prezzo positivo: ");
                    scanf("%f", &prezzo);
                } while (prezzo <= 0);
            }

            //Calculate the average of prices in the range between 2.50 and 3.50 euros (extremes included)
            if (prezzo >= 2.50 && prezzo <= 3.50) {
                sommaPrezziIntervallo += prezzo;
                countIntervallo++;
                mediaIntervallo = sommaPrezziIntervallo / countIntervallo;
            }

            countTot++;

            // Find the maximum price and minimum price
            if (countTot == 1 || prezzo > prezzoMax) {
                prezzoMax = prezzo;
            } 
            if (countTot == 1 || prezzo < prezzoMin) {
                prezzoMin = prezzo;
            }
        } while (prezzo <= 0);

        // Update information for each cycle
        sommaPrezzi += prezzo;
        mediaPrezzi += prezzo;
        mediaCount++;

        printf("Vuoi inserire un'altra denominazione? \n (1) Si \n (2) No \n");
        printf("Risposta: ");
        scanf("%d", &continua);

    } while (continua != 2);  

   // Calculate the general average of the prices
    if (mediaCount > 0) {
        mediaPrezzi /= mediaCount;
    }

    // Output the information
    printf("La somma dei prezzi delle azioni è: %.2f\n", sommaPrezzi);
    printf("La media dei prezzi delle azioni è: %.2f\n", mediaPrezzi);
    printf("L’azione con il prezzo massimo è: %.2f\n", prezzoMax);
    printf("L’azione con il prezzo minimo è: %.2f\n", prezzoMin);

   
    if (countIntervallo > 0) {
        printf("La media dei prezzi delle azioni nell'intervallo [2.50, 3.50] euro è: %.2f\n", mediaIntervallo);
    }

    return 0;
}