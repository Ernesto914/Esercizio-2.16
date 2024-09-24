#include <stdio.h>

int main(void)
{
    float provvigione, prezzodelbiglietto, prezzofinale;
    printf("Inserisci il prezzo del biglietto: ");
    scanf("%f", &prezzodelbiglietto);
    provvigione = prezzodelbiglietto * 0.15;
    prezzofinale = prezzodelbiglietto + provvigione;
    printf("La provvigione è di: %.2f euro\n", provvigione);
    printf("Il prezzo finale del biglietto è di: %.2f euro", prezzofinale );
    return 0;
}
