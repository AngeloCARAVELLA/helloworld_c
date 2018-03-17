/* maggiore2.c */
/* chiede due interi all'utente e stampa il maggiore tra i due */
#include <stdio.h>
int main ()
{ 
	/* dichiarazione di due numeri interi */
	int a , b ;
	/* lettura in input dei due numeri interi */ 
	/*  definizione della variabile M che rappresenta il massimo tra i due */
	int M ;
	/* stampa del primo messaggio */
	printf (" inserisci il primo numero ");
	/* input da tastiera del primo numero */ 
	scanf ( "%d", &a );

	/* stampa del secondo  messaggio */
	printf (" inserisci il secondo  numero ");
	/* input da tastiera del secondo numero */
	scanf ( "%d", &b );
	/* controllo del maggiore  */
	       M = a ;	
	if ( M  < b ) {
	M = b ; 
	printf("Il maggiore e' %d\n", M);
	}
	/* caso in cui a é maggiore di b , rappresentato dall' else */
	else 
	{
	printf("Il maggiore e' %d\n", M);
	}
        }
