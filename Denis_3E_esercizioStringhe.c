//Autho:Sescu Denis
//Data:19/03/2024

/*Scrivere un programma in C che dopo aver inserito una stringa a piacere determini e o verifichi:
1) Il numero di consonanti e vocali contenute;
2) Che contenga solo lettere;
3) Il conteggio di una lettera (se presente) scelta dall’utente;
4) Crei 2 ulteriori stringhe che contengano 1 le lettere di posizione pari; la 2° le lettere di posizione
dispari;
5) Verifichi se contiene doppie.
Inserita una 2° stringa determinare:
1) Quale delle 2 è più lunga e più corta;
2) Quale delle 2 stringhe contiene più vocali;
3) Quale delle 2 stringhe contiene più consonanti;
4) Quali sono le lettere contenute in ambedue le stringhe;*/

#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<ctype.h>

int main(){
    
    char stringa[20];
    bool controllo=true, doppie=false;
    
    printf("Inserisci la stringa\n");
    scanf("%s",stringa);
    
    for(int i=0; i<strlen(stringa);i++){
        
        //trasforma la stringa da caratteri maiuscoli a minuscoli
        if(isupper(stringa[i])){
            stringa[i]=tolower(stringa[i]);
        }
        if(stringa[i]<'a' || stringa[i]>'z'){
            controllo=false;
        }
        
    }
    
    //controlla se ci sono caratteri diversi da quelli alfabetici 
    if(controllo=false){
        printf("Ci sono caratteri diversi da quelli alfabetici\n");
    }
    
    
    int vocali1=0, consonanti1=0;
    
    //Conta quanti vocali e consonanti ci sono
    for(int i=0; i<strlen(stringa);i++){
        if(stringa[i]=='a' || stringa[i]=='e' || stringa[i]=='i' || stringa[i]=='o' || stringa[i]=='u'){
            vocali1++;
        }else{
            consonanti1++;
        }
    }
    
    printf("Ci sono %d vocali\n",vocali1);
    printf("Ci sono %d consonanti\n",consonanti1);
    
    char lettera;
    int contLet=0;
    printf("Quale lettera vuoi verificare se è presente?");
    scanf("%s",&lettera);
    
    //Ciclo per contare quante volte è presente la lettera che sta cercando
    for(int i=0;i<strlen(stringa);i++){
        if(stringa[i]==lettera){
            contLet++;
        }
    }
    
    if(contLet>0){
        printf("La lettera che stai cercando è presente %d volte\n", contLet);
    }else{
        printf("La lettera non è presente\n");
    }
    
    char stringaP[20]="", stringaD[20]="";
    int g=0, f=0;
    
    for(int i=0; i<strlen(stringa);i++){
        if(i%2==0){
            stringaP[g]=stringa[i];
            g++;
        }else{
            stringaD[f]=stringa[i];
            f++;
        }
    }
    
    //separa i caratteri delle posizioni pari da quelli dispari
    printf("Stringa pari : %s\n",stringaP);
    printf("Stringa dispari: %s\n",stringaD);
    
    
    //verifica se ci sono doppie 
    for(int i=0;i<strlen(stringa);i++){
        for(int j=0;j<strlen(stringa);j++){
            if(i!=j && stringa[i]==stringa[j]){
                doppie=true;
            }
        }
    }
    
    if(doppie){
        printf("Sono presenti doppie\n");
    }else{
        printf("Non sono presenti doppie\n");
    }
    
    char stringa2[20];
    
    printf("Riempi la seconda stringa\n");
    scanf("%s",stringa2);
    
    if(strlen(stringa2)>strlen(stringa)){
        printf("la seconda stringa è piu lunga\n");
    }else if(strlen(stringa2)==strlen(stringa)){
        printf("Le stringhe sono uguali\n");
    }else{
        printf("la prima stringa è piu lunga\n");
    }
    
    int vocali2=0,consonanti2=0;
    
    for(int i=0; i<strlen(stringa2);i++){
        if(stringa[i]=='a' || stringa[i]=='e' || stringa[i]=='i' || stringa[i]=='o' || stringa[i]=='u'){
            vocali2++;
        }else{
            consonanti2++;
        }
    }
    
    printf("Ci sono %d vocali\n",vocali2);
    printf("Ci sono %d consonanti\n",consonanti2);
    
    if(vocali1>vocali2){
        printf("la prima stringa contiene piu vocali\n");
    }else if(vocali1==vocali2){
        printf("Contengono lo stesso numero di vocali\n");
    }else{
        printf("La seconda stringa contiene piu vocali\n");
    }
    
    char uguali[strlen(stringa)];
    int k=0;
    for(int i=0;i<strlen(uguali);i++){
        for(int j=0;j<strlen(uguali);j++){
            if(stringa[i]==stringa2[j]){
                uguali[k]=stringa[i];
                k++;
            }
        }
    }
    
    
    printf("I caratteri uguali sono:  %s",uguali);
}