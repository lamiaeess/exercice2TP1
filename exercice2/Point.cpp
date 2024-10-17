#include "Point.h"  // Inclusion du fichier d'en-tête de la classe Point
#include <iostream> // Pour l'affichage avec std::cout
#include <cmath>    // Pour utiliser sqrt() et pow()

/*Prototype :
 Constructeur de la classe Point
 Entrée : deux doubles représentant les coordonnées x et y (valeurs par défaut 0.0)
 Sortie : initialise un objet Point avec ces coordonnées
*/ 
Point::Point(double x, double y) : x(x), y(y) {}

/*Prototype:
 Fonction d'affichage des coordonnées du point
 Entrée : aucune
 Sortie : affiche les valeurs x et y du point*/
void Point::Afficher() const
{
    std::cout << "x: " << this->x << std::endl;
    std::cout << "y: " << this->y << std::endl;
}

/*Prototype:
 Calcul de la distance entre deux points
 Entrée : un objet Point en paramètre (référence constante)
 Sortie : la distance (double) entre le point courant et celui donné
 */
double Point::distance(const Point& p) const
{
    return sqrt(pow(this->x - p.x, 2) + pow(this->y - p.y, 2));
}

/* Prototype:
 Translation du point selon des décalages dx et dy
 Entrée : deux doubles représentant les décalages sur les axes x et y
 Sortie : aucune (modifie l’état de l’objet)
*/
void Point::translate(double dx, double dy)
{
    this->x += dx;
    this->y += dy;
}

/*Prototype:
 Surcharge de l'opérateur == pour comparer deux points
 Entrée : un objet Point (référence constante)
 Sortie : booléen, true si les points ont les mêmes coordonnées, false sinon
*/
bool Point::operator==(const Point& p) const
{
    return (this->x == p.x && this->y == p.y);
}

/* Prototype:
 Destructeur de la classe Point
 Entrée : aucune
 Sortie : affiche un message indiquant que le destructeur est appelé
*/
Point::~Point()
{
    std::cout << "Destructeur de la classe Point" << std::endl;
}
