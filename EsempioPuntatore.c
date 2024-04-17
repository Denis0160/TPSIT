#include<stdio.h>

int main(){
    int numero = 5;
    int* puntatore=&numero;
    
    (*puntatore)++;
    
    printf("Valore della variabile: %d\n", *puntatore);
    
    
    char* puntatore2;
    char stringa[]="ciao Mondo";
    puntatore2=stringa;
    
    printf("Stringa: %s\n", puntatore2);
    
    float array[]={2.5,3.7,1.2,5.9,4.3};
    float* puntatore3=array;
    float somma=0;
    
    for(int i=0;i<5;i++){
        somma=somma+*(puntatore3+1);
        
    }
    printf("La somma è:%f\n",somma);
    
    
    return 0;
    
    
    
}