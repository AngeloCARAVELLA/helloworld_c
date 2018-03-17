/* cerchio.c */
/* programma che stampa circonferenza e superficie di un cerchio dato il raggio */

#include <stdio.h>
#include <math.h>

int main()
{ 
	/* dichiarazione delle variabili */      
       	int r ;
	double c , s ; 

	/*lettura in input del raggio */ 
	printf (" inserisci il raggio ");
	scanf ("%d", &r);

	/* calcoli*/
	s = M_PI * r * r ; 
	c = M_PI * 2.0 * r ;

	/* stampa */
	printf (" la circonferenza e' %f\n" , c );
	printf (" la superficie e' ' %f " , s);

	return 0 ;
}	












