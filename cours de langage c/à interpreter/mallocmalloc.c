# include <stdio.h>

int main () {
int taille ; double * Tab ;
printf (" Combien de valeurs dé sirez vous ?\n");
scanf (" %d", & taille );
Tab = malloc ( taille * sizeof ( double ));
if ( Tab == NULL ) {
printf (" Erreur d’allocation mé moire \n");
return 1;
}
for ( int i=0; i< taille ; i ++)
scanf (" %lg", & Tab[i ]);
printf (" Voici votre tableau : \n");
for ( int i=0; i< taille ; i ++)
printf ("%lg\n", Tab[i ]);
free ( Tab );
}
