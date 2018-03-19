/* maggiore2.c */
/* chiede due interi all'utente e stampa il maggiore tra i due */

#include <stdio.h>

int main ()
{ 
  /* dichiarazione di due numeri interi */
  int a, b;

  /* M rappresenta il massimo tra i due */
  int M;

  /* lettura in input dei due numeri interi */ 
  printf("inserisci il primo numero: ");
  /* input da tastiera del primo numero */ 
  scanf("%d", &a);
  printf("inserisci il secondo numero: ");
  /* input da tastiera del secondo numero */
  scanf("%d", &b);

  /* controllo del maggiore  */
  M = a ;	
  if ( M  < b ) {
    M = b; 
  }

  printf("Il maggiore e' %d\n", M);

  return 0;
}
