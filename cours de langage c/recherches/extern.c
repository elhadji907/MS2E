	
#include <stdio.h>

#include "Common.h"     // Entre double guillemets, car ce fichier est défini dans le projet.

// On réserve la mémoire pour la variable globale et on l'initialise.
int globalCounter = 0;

// On implémente la fonction doSomething
void doSomething() {
    globalCounter ++;
    printf( "doSomething invoked\n" );
}