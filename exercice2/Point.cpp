#include "Point.h"  // Inclusion du fichier d'en-t�te de la classe Point
#include <iostream> // Pour l'affichage avec std::cout
#include <cmath>    // Pour utiliser sqrt() et pow()

/*Prototype :
 Constructeur de la classe Point
 Entr�e : deux doubles repr�sentant les coordonn�es x et y (valeurs par d�faut 0.0)
 Sortie : initialise un objet Point avec ces coordonn�es
*/ 
Point::Point(double x, double y) : x(x), y(y) {}

/*Prototype:
 Fonction d'affichage des coordonn�es du point
 Entr�e : aucune
 Sortie : affiche les valeurs x et y du point*/
void Point::Afficher() const
{
    std::cout << "x: " << this->x << std::endl;
    std::cout << "y: " << this->y << std::endl;
}

/*Prototype:
 Calcul de la distance entre deux points
 Entr�e : un objet Point en param�tre (r�f�rence constante)
 Sortie : la distance (double) entre le point courant et celui donn�
 */
double Point::distance(const Point& p) const
{
    return sqrt(pow(this->x - p.x, 2) + pow(this->y - p.y, 2));
}

/* Prototype:
 Translation du point selon des d�calages dx et dy
 Entr�e : deux doubles repr�sentant les d�calages sur les axes x et y
 Sortie : aucune (modifie l��tat de l�objet)
*/
void Point::translate(double dx, double dy)
{
    this->x += dx;
    this->y += dy;
}

/*Prototype:
 Surcharge de l'op�rateur == pour comparer deux points
 Entr�e : un objet Point (r�f�rence constante)
 Sortie : bool�en, true si les points ont les m�mes coordonn�es, false sinon
*/
bool Point::operator==(const Point& p) const
{
    return (this->x == p.x && this->y == p.y);
}

/* Prototype:
 Destructeur de la classe Point
 Entr�e : aucune
 Sortie : affiche un message indiquant que le destructeur est appel�
*/
Point::~Point()
{
    std::cout << "Destructeur de la classe Point" << std::endl;
}
