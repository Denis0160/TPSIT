#include <stdio.h>

int main() {
    int N;
    printf("Inserisci la dimensione del vettore: ");
    scanf("%d",&N);

    float vettore[N];

    printf("Inserisci gli elementi del vettore:\n");
    for (int i=0;i<N;i++) {
        scanf("%f", &vettore[i]);
    }

    float somma=0.0;
    float massimo=vettore[0];
    float minimo=vettore[0];

    for (int i=0;i<N;i++) {
        somma+=vettore[i];
        if(vettore[i]>massimo) {
            massimo=vettore[i];
        }
        if(vettore[i]<minimo) {
            minimo=vettore[i];
        }
    }

    float media=somma/N;

    printf("Media:%.2f\n",media);
    printf("Massimo: %.2f\n",massimo);
    printf("Minimo: %.2f\n",minimo);

    return 0;
}
