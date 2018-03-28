/* Programma che che chiede all' utente numero di tre cifre */ 
/* E che stampa la somma delle cifre stesse */
#include <stdio.h>
int main ()
{
  /* dichiarazione di un numero intero a 3 cifre */
  int n ; 
  /* dichiarazione delle cifre prima estratte e poi sommate */
  int  c1 , c2 , c3 ;
  /* dichiarazione della variabile somma */
  int somma ;

  /* messaggio in output e lettura del numero */
  printf("inserisci un numero di tre cifre");
  scanf("%d", &n );

  /* condizione */ 
  if (n < 0 || n > 999) 
  {
    printf("non ha inserito un numero di tre cifre. Bye\n");
  }
  else {
  /* estraiamo le cifre */ 
  c3 = n % 10;
  n = n / 10;
  c2 = n % 10;
  n = n / 10;
  c1 = n % 10;
  somma = c1 + c2 + c3;
  /* output */
  printf("La somma delle cifre e' %d\n", somma);  
  }
  return 0;
}
