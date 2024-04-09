#include <stdio.h>
#include <string.h>

int main() {
    
    char stringa[100];
    char carattereInserito, carattereDaSostituire;
    int posizioneInserimento, i;


    printf("Inserisci una stringa: ");
    scanf("%s", stringa);


    printf("Inserisci un carattere da inserire: ");
    scanf(" %c", &carattereInserito);

    
    printf("Inserisci la posizione in cui inserire il carattere: ");
    scanf("%d", &posizioneInserimento);

    // Inserimento del carattere nella posizione specificata
    for (i=strlen(stringa); i>=posizioneInserimento; i--) {
        stringa[i + 1] = stringa[i];
    }
    stringa[posizioneInserimento] = carattereInserito;
    stringa[strlen(stringa) + 1] = '\0'; // Aggiornamento della lunghezza della stringa

    printf("Stringa dopo l'inserimento: %s\n", stringa);

   
    printf("Inserisci un carattere da sostituire: ");
    scanf(" %c",&carattereDaSostituire);

    // Sostituzione del carattere con 'X'
    for (i=0; i<strlen(stringa);i++) {
        if (stringa[i]==carattereDaSostituire) {
            stringa[i]='X';
        }
    }

    printf("Stringa dopo la sostituzione: %s\n", stringa);

    return 0;
}
