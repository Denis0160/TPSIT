#include <stdio.h>

int main(){
    
    
    float importo=0, totale=0, daPagare=0, sconto=0;
    char scelta;
    
    // Main loop to enter the amount and calculate the total
    do{
    printf("Inserisci l'importo ");
    scanf("%f",&importo);
    
    
    // Calculating the discount based on the amount
    if(importo<=500){
    	sconto=10;
        totale=(importo*sconto)/100;
    }else if(importo>=501 && importo<=1000){
    	sconto=20;
        totale=(importo*sconto)/100;
    }else if(importo>=1001){
    	sconto=30;
        totale=(importo*sconto)/100;
    }
    
    // Calculation of the amount to be paid after the discount
    daPagare=importo-totale;
    
    // Print the total amount to be paid
    printf("IL TOTALE e'': >>> %.2f",daPagare);
    
    //Request to enter another amount
    printf("\nVuoi inserire un'altro importo?");
    scanf("%s",&scelta);
    
    }while(scelta!='N' || scelta!='n');
    return 0;
}