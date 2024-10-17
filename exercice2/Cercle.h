#pragma once
#include "Point.h"

class Cercle {
private:
    const static double PI;   // Constante PI
    int id;                   // Identifiant du cercle
    Point* Centre;            // Agr�gation : Pointeur vers un Point
    double Rayon;             // Rayon du cercle

public:
    Cercle(int id, double r, Point* p);  // Constructeur
    void Afficher() const;               // Afficher les informations du cercle
    void updateraduis(double dr);        // Met � jour le rayon
    void translate(double dx, double dy);// Translate le centre du cercle
    bool operator==(const Cercle& c) const; // Compare deux cercles
    bool appart(const Point& p) const;   // V�rifie si un point appartient au cercle
    double surface() const;              // Calcule la surface du cercle
    double perimetre() const;            // Calcule le p�rim�tre du cercle
    ~Cercle();                           // Destructeur
};
