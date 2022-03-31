#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    /* Cherchons à dupliquer une chaîne de caractères en mémoire */
    char * original = "Chaine originale";
    char * copy = NULL;

    /* Calcul de la taille à allouer */
    size_t l = strlen( original ) + 1;

    /* Allocation de la mémoire */
    copy = (char *) malloc( l * sizeof(char) );
    assert( copy != NULL );

    /* On duplique la chaine originale */
    strcpy( copy, original );

    /* On test que ca marche */
    printf( "La copie contient : %s\n", copy );

    /* Toujours libérer la mémoire après utilisation */
    free( copy );

    return 0;
}