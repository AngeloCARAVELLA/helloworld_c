/*cerchio.c*/
/* programma che stampa circonferenza e superficie di un cerchio dato il raggio */

#include <stdio.h>
#include <math.h>
int main()

{/* dichiarazione delle variabili */      
       	int r , c , s ;
/*lettura in input del raggio */ 
	printf (" inserisci il raggio ");
	scanf ( "%d" , &r);
/* calcoli*/
		c = M_PI * r * r ; 
                s = M_PI * 2 * r ;
		/* stampa */
		printf (" la circonferenza e' %d " , c );
			 printf (" la superficie e' ' %d " , s);
return 0 ;
}	












