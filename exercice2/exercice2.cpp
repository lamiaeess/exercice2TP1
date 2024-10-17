// exercice2.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
#include "Cercle.h"
#include "Point.h"

int main() {
    // Création d'un point indépendant
    Point p1(2.0, 3.0);

    // Création d'un cercle en utilisant un pointeur vers le point
    Cercle c1(1, 5.0, &p1);

    // Affichage des informations du cercle
    c1.Afficher();

    // Translation du centre du cercle
    c1.translate(1.0, 1.0);
    c1.Afficher();

    return 0;
}



