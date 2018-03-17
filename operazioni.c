/* programma che chiede in input due interi dall' utente */
/* e stampa il risultato delle operazioni elementari */
#include <stdio.h>
int main()
{ int  a , b , somma , differenza , divisione , moltiplicazione , resto ;
printf (" inserisci il primo  numero ");
scanf ("%d", &a) ;
printf (" inserisci il secondo  numero ");
scanf ("%d", &b) ;
somma = a + b ;
printf (" la somma e' %d " , somma  );
differenza = a - b ;
printf (" la differenza e' %d " , differenza   );
divisione = a / b ;
printf (" la divisione e' %d " , divisione   );
moltiplicazione = a * b ;
printf (" la moltiplicazione  e' %d " , moltiplicazione );
resto = a % b ;
printf (" il modulo  e' %d " , resto  );

return 0;


}
