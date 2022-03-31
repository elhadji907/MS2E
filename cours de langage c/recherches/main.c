#include <stdio.h>
#include <stdlib.h>

#include "Common.h"     // Entre double guillemets, car ce fichier est défini dans le projet.

int main() {

    // On connait la variable grâce à la déclaration externe définie dans le .h
    // On peut donc y avoir accès.
    printf( "Counter == %d\n", globalCounter );         // Affiche 0
    doSomething();
    printf( "Counter == %d\n", globalCounter );         // Affiche 1    

    return EXIT_SUCCESS;

}