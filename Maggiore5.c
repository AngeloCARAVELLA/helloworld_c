/* Maggiore5.c */
/* Programma che chiede 5 numeri interi all'utente e cerca il maggiore */

#include <stdio.h>

int main() 
{
  /* variabili in ingresso  */
  int num1, num2, num3, num4, num5;
  
  /* variabili di uscita */
  int maggiore;
  
  /* input di 5 numeri */
  printf("Inserisci cinque numeri interi: ");
  scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
  
  /* determiniamo il massimo */
  maggiore = num1;
  if (num2 > maggiore) maggiore = num2;
  if (num3 > maggiore) maggiore = num3;
  if (num4 > maggiore) maggiore = num4;
  if (num5 > maggiore) maggiore = num5;
  
  /* output del massimo  */
  printf("Il massimo e' %d\n", maggiore);
  
  return 0;
}
