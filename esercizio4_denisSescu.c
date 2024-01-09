#include <stdio.h>

int main()
{
    
    
    int N, somma=0, num=2, cont=0, primo=0;

    //Verification cycle to verify the entered value
    do
    {
        printf("Inserisci un numero: \n");
        scanf("%d",&N);

        if (N<=0)
            printf("Il numero non è positivo. Reinserisci\n");
        
    } while (N<=0);

    //Calculation of the sum of the first alternating numbers up to N
    while (num<=N)
    {
        primo=1;

        for (int i=2; i<num; i++)
        {
            if (num%i==0)
            {
                primo=0;
                break;
            }
        }
        
        //If 'num' is prime, print and add to sum only if it is the first alternate prime
        if (primo==1)
        {
            cont++;
            if (cont%2==1)
            {
                printf("Numero primo alternato: %d\n", num);
                somma+=num;
            }
        }

        num++; //move on to the next issue
    }

    //output somma
    printf("La somma dei primi numeri primi alternati fino a %d e': %d\n", N, somma);

    return 0;
}