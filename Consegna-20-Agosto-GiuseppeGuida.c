#include <stdio.h>

int main(){
    int a;
    int b;

printf("--------------------------\n\n");    
printf("Inserisci il primo numero:\n\n");
    scanf("%d", &a);

printf("--------------------------\n\n");
printf("Inserisci il secondo numero:\n\n");
    scanf("%d", &b);

    int ris = a * b;
    int media = (a + b) / 2;

printf("\n***********************\n\n");
printf("Il prodotto e' : %d\n\n", ris);
printf("La media e' : %d\n\n\n", media);

return 0;

    }       


    