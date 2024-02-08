//Author:Sescu Denis
//Data:08/02/2024


#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
#include <unistd.h>//Libreria per l'opzione wait


//CALCOLO VINCITE
float calcoloVincita(int NumR, double Cost, double puntata,int Contatore) {
        double vincita;
        vincita = ((puntata * Cost) / NumR)*Contatore;
        return vincita;
    }

//Calcolo FATTORIALI
int getFactorial(int Fact) {
    int result = 1;
    for (int i = 1; i <= Fact; i++) {
        result *= i;
    }
    return result;
}


//metodo per generare numeri random 
int numRand(int min, int max) {
    return min + rand() % (max - min + 1);
}

//metodo del menu
int menu(char opzioni[], int dimensioneM){
 	int scelta;

    	do {

        	printf("\n%s\n",opzioni);
        	scanf("\n%d",&scelta);
       	 
        	if((scelta<1) || (scelta>dimensioneM)){
            	printf("\nOpzione sbagliata\n");
            	usleep(2000000);
            	system("cls");
        	}

       	 
    	}
    	while ((scelta < 1) || (scelta > dimensioneM ));

    	return scelta;
}



int main(){
 	    char sceltaM;
 	    
 	    int dim;

    	float puntata1 = 0, puntata2 = 0, puntata3 = 0, puntata4 = 0, puntata5 = 0;

    	int cont1 = 0, cont2=0, cont3=0, cont4=0, cont5=0;

    	float Vp1, Vp2, Vp3, Vp4, Vp5;

    	int sceltapuntata, dimU = 0;

    	float costS = 11.23, costA =5.62, costT =3.74 , costQ = 2.81, costC =2.25 ;
    	
    	int dimN;
    	
    	
   	 
    
   	 
   	 
    	printf("=== Gioco Lotto === \nSu quante ruote vuoi giocare?\n");
        	char opzioni []= "[1] Una ruota\n[2] Dieci ruote";
        	//Calcolo della dimensione dell'array di stringhe       	 
        	int dimensioneM=sizeof(opzioni)/sizeof(opzioni[0]);
   	 
        	sceltaM= menu(opzioni, dimensioneM);
        	
        	switch(sceltaM){
        	    case 1:{
        	        dimN=5;
        	        dim=1;
        	        break;
        	    }
        	    case 2:{
        	        dimN=50;
        	        dim=10;
        	        break;
        	    }
        	}
        	
        	int ruotaN[dimN];
        	
        	srand(time(NULL)); // Inizializzazione del generatore di numeri casuali
            for (int i = 0; i < dimN; i++) {
                int k, controllo;
                do {                                        /*il primo ciclo fro serve per generare valori all'interno dell'vettore
                                                            random, k è una variabile temporanea che prende il valore che andra inserito 
                                                            nell array, controllo è la variabile che stabilisce se c'è già un numero k all'interno
                                                            dell'array in modo da non  ripeterlo,*/
                     controllo = 0;
                     k = numRand(1, 90);
                        for (int j = 0; j < dimN; j++) {
                       
                        if (ruotaN[j] == k) {
                         controllo++;
                        }
                        }
                } while (controllo == 1);
            ruotaN[i] = k;
       	 
    	 
            }
            
            // Stampa dei numeri generati casualmente
            printf("Numeri generati casualmente:\n");
            for (int i = 0; i < dimN; i++) {
                ruotaN[i]++;
            }
            printf("\n");
            
            printf("quanti numeri vuoi inserire? da 1 a 5");

            do {
                scanf("\n%d",&dimU); 
            } while (dimU < 1 || dimU > 5);

            int NumUtente [dimU];
            printf("Gioca i numeri\n");
            
             for (int i = 0; i <dimU; i++) {
                do {

                    int k, controllo;

                    do {
                        controllo = 0;
                        scanf("\n%d",&k);

                        for (int j=0; j<dimU; j++) {

                            if (NumUtente[j] == k) {
                                printf("\nhai gia inserito questo numero!");
                                controllo++;
                            }

                        }
                    } while (controllo == 1);

                    NumUtente[i] = k;

                    if (NumUtente[i] < 1 || NumUtente[i] > 90) {
                        printf("\nHai inserito un valore errato!!");
                    }
                } while (NumUtente[i] < 1 || NumUtente[i] > 90);
                
                
            }
            
             bool s1 = false, s2 = false, s3 = false, s4 = false, s5 = false;
            do {
                printf("\n----Scegli su cosa puntare----");
                if (dimU >= 1) {

                    printf("\n[1] Singolo");

                    if (dimU >= 2) {

                        printf("\n[2] Ambo");

                        if (dimU >= 3) {

                            printf("\n[3] Terna");

                            if (dimU >= 4) {

                                printf("\n[4] Quaterna");

                                if (dimU >= 5) {

                                    printf("\n[5] Cinquina");
                                }
                            }
                        }
                    }
                }
                //Where The user chose where he/she wants to bet
                printf("\n[0] esci");

                scanf("\n%d",&sceltapuntata);
                switch (sceltapuntata) {
                    case 1: {
                        if (s1 == false) {
                            printf("Hai scelto di puntare su singolo!\n");
                            s1 = true;
                            do {
                                printf("\nQuanto vuoi puntare??");
                                puntata1 = 0;
                                scanf("\n%f",&puntata1);
                            } while (puntata1 < 0.50 || puntata1 > 200);
                        } else if (s1 == true) {
                            printf("\nHai Gia scelto singolo");

                        }
                        break;
                    }
                    case 2: {
                        if (dimU > 1) {
                            if (s2 == false) {
                                printf("\nHai scelto di puntare su ambo!");
                                s2 = true;
                                do {
                                    printf("\nQuanto vuoi puntare??");
                                    puntata2 = 0;
                                    scanf("\n%f",&puntata2);
                                } while (puntata2 < 0.50 || puntata2 > 200);
                            } else if (s2 == true) {
                                printf("\nHai Gia scelto ambo");
                            }
                        }

                        break;
                    }
                    case 3: {
                        if (dimU > 2) {
                            if (!s3) {
                                printf("\nHai scelto di puntare su terna!");
                                s3 = true;
                                do {
                                    printf("\nQuanto vuoi puntare??");
                                    puntata3 = 0;
                                    scanf("\n%f",&puntata3);
                                } while (puntata3 < 0.50 || puntata3 > 200);
                            } else if (s3) {
                                printf("\nHai Gia scelto terna");
                            }
                        }
                        break;
                    }
                    case 4: {
                        if (!s4) {
                            printf("\nHai scelto di puntare su quaterna!");
                            s4 = true;
                            do {
                                printf("\nQuanto vuoi puntare??");
                                puntata4 = 0;
                                scanf("\n%f",&puntata4);
                            } while (puntata4 < 0.50 || puntata4 > 200);
                        } else if (s4) {
                            printf("\nHai Gia scelto quaterna");
                        }
                        break;
                    }
                    case 5: {
                        if (!s5) {
                            printf("\nHai scelto di puntare su cinquina!");
                            s5 = true;
                            do {
                                printf("\nQuanto vuoi puntare??");
                                puntata5 = 0;
                                scanf("\n%f",&puntata5);
                            } while (puntata5 < 0.50 || puntata5 > 200);
                        } else if (s5) {
                            printf("\nHai Gia scelto cinquina");
                        }
                        break;
                    }
                }
            } while (sceltapuntata != 0);
            
            //Ciclo per mettere a confronto il vetttore random e quelo inserito dall'utente
            for (int i = 0; i < dimU; i++) {
                for (int k = 0; k < dimN; k++) {
                    if (NumUtente[i] == ruotaN[k]) {
                        cont1++;
                    }
                }
            }
            
            printf("\nsingoli fatti: %d\n",cont1);
            
            if(s2){
                int cont2 = getFactorial(cont1) / (getFactorial(2) * getFactorial(cont1 - 2));
                printf("\nAmbo fatti: %d\n", cont2);
            }
            if(s3){
                cont3 = getFactorial(cont1) / (getFactorial(3) * getFactorial((cont1 - 3)));
                printf("\nterni fatti:%d\n", cont3);
            }
            if(s4){
                cont4 = getFactorial(cont1) / (getFactorial(4) * getFactorial((cont1 - 4)));
                printf("\nquterni fatti:%d\n",cont4);
            }
            if (s5) {
                cont5 = getFactorial(cont1) / (getFactorial(5) * getFactorial((cont1 - 5)));
                printf("\ncinquine fatti:%d\n",cont5);
            }
            
            Vp1 = calcoloVincita(dim, costS, puntata1,cont1) - puntata1;

            Vp2 = calcoloVincita(dim, costA, puntata2,cont2) - puntata2;

            Vp3 = calcoloVincita(dim, costT, puntata3,cont3) - puntata3;

            Vp4 = calcoloVincita(dim, costQ, puntata4,cont4) - puntata4;

            Vp5 = calcoloVincita(dim, costC, puntata5,cont5) - puntata5;
            
            float vincitacomp = Vp1 + Vp2 + Vp3 + Vp4 + Vp5;
            
            printf("la tua vincita è: %f",vincitacomp);
            
            
            
            
            
}
