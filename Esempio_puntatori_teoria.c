//Esempio puntatori e spiegazione 

#include <stdio.h>

int main(){
    
    int alfa = 4;
    int beta = 7;
    int *pointer;
   
    /***
     * lE CELLE DEL PROCESSORE HANNO DIMENSIONE 8 BIT, QUINDI UN BYTE
     * OGNI CELLA è DOTATA DI UN INDIRIZZO UNICO 
     * OGNI VARIABILE IN MEMORIA OCCUPA UN NUMERO DETERMINATO DI CELLE CONSECUTIVE
     * TIPI DI VARIABILI COME IL CHAR OCCUPANO UNA SOLA CELLA
     * TIPI DI VARIABILI COME GLI INTERI OCCUPANO 4 CELLE
     * ANCHE I PUNTATORI OCCUPANO UNO SPAZIO IN MEMORIA(4 CELLE IN UN SISTEMA A 32BIT 8 CELLE IN UN SISTEMA A 64BIT)
     * lA DIMENSIONE DI UN PUNTATORE è INDIPENDENTE DAL TIPO CHE PUNTA
     * IL TIPO DEL PUNTATORE VA A DETERMINARE QUANTE CELLE LEGGERE
     * 
     * SE LA UNA VARIABILE DI TIPO INTERO OCCUPA 4 CELLE, IL PUNTATORE 
     * CHE PUNTA A QUELLA VARIABILE CONTERRà L'INDIRIZZO DELLA PRIMA CELLA DELLA VARIABILE INTERA 
     * ***/
    
    pointer=&alfa; //IL PUNTATORE RISERVA IN MEMORIA L'INDIRIZZO DI ALFA
    
    printf("alfa -> %d, beta -> %d, pointer -> %d\n", alfa, beta, *pointer);
    
    beta=*pointer; //BETA PRENDE IL VALORE PUNTATO DA ALFA, QUINDI ASSUME VALORE 4
    
    printf("alfa -> %d, beta -> %d, pointer -> %d\n", alfa, beta, *pointer);
    
    alfa=*pointer;//ALFA PRENDE IL VALORE DEL PUNTATORE, QUINDI UN'ALTRA VOLTA 4
    
    printf("alfa -> %d, beta -> %d, pointer -> %d\n", alfa, beta, *pointer);
    
    *pointer=5;//IL PUNTATORE PRENDE IL VALORE 5, QUINDI MODIFICA ALFA A 5
    
    printf("alfa -> %d, beta -> %d, pointer -> %d\n", alfa, beta, *pointer);
}