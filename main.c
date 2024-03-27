/*Scrivere un programma in C che dopo aver inserito una stringa a piacere permetta di:
   1) Eliminare 1 carattere scelto dall’utente ( o   più di 1 se si ripetono);   
   2) Eliminare 1 carattere scelto dall’utente in  base alla sua posizione;   
   3) Aggiungere 1  carattere scelto dall’utente alla fine della stringa;
   */
   
#include<stdio.h>
#include<string.h>


int main(){
    
    char stringa[20];
    char stringa2[20];
    
    printf("Inserisci una stringa\n");
    scanf("%s",stringa);
    
    char carattere;
    int j=0;
    
    //Eliminazione carattere dato il carattere da eliminare
    
    printf("Quale carattere vuoi Eliminare?");
    printf("\n");
    scanf(" %c",&carattere);

    
    for(int i=0;i<strlen(stringa);i++){
        if(stringa[i]!=carattere){
            stringa2[j++]=stringa[i];
        }    
    }
    
    printf("la stringa rimanente è: %s\n",stringa2);
    
    
    //Eliminazione carattere data la posizione
    int p=0;
    printf("Da quale posizione vuoi eliminare il carattere?\n");
    scanf("%d",&p);
    
    char stringa3[20];
    
    for(int i=p-1;stringa[i]!='\0';i++){
        stringa3[i]=stringa[i+1];
    }
    
    printf("Eliminazione da posizione %s\n",stringa3);
    
    //Carattere da aggiungere +
    
    char aggiunta;
    
    
    printf("Che carattere vuoi aggiungere?\n");
    scanf(" %c",&aggiunta);
    
    stringa[strlen(stringa)]=aggiunta;
    printf("La stringa con il carattere aggiunto è %s\n",stringa);
    
    
}