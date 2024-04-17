#include<stdio.h>

int main(){
    int codice[12],somma=0, cifra=0;
    
    printf("inserisci il codice a barre");
    for(int i=0;i<12;i++){
        scanf("%d",&codice[i]);
        if(i%2==0)
        somma+=codice[i]*3;
        else
        somma+=codice[i];
        
    }
    cifra=somma%10;
    printf("lA SOMMA E': %d\n",somma);
    printf("La cifra di controllo e': %d\n",cifra);
    
    return 0;
    
}