#include "Cercle.h"
#include <iostream>
#include <cmath>

const double Cercle::PI = 3.14;

// Constructeur avec agrégation
Cercle::Cercle(int id, double r, Point* p) : id(id), Rayon(r), Centre(p) {}

// Affiche les informations du cercle
void Cercle::Afficher() const {
    std::cout << "id: " << this->id << std::endl;
    std::cout << "Rayon: " << this->Rayon << std::endl;
    std::cout << "Centre: ";
    Centre->Afficher();  // Appel via pointeur
}

// Met à jour le rayon
void Cercle::updateraduis(double dr) {
    this->Rayon = dr;
}

// Translate le centre du cercle
void Cercle::translate(double dx, double dy) {
    Centre->translate(dx, dy);  // Appel via pointeur
}

// Compare deux cercles
bool Cercle::operator==(const Cercle& c) const {
    return *(this->Centre) == *(c.Centre) && this->Rayon == c.Rayon;
}

// Vérifie si un point appartient au cercle
bool Cercle::appart(const Point& p) const {
    return Centre->distance(p) <= this->Rayon;
}

// Calcule la surface
double Cercle::surface() const {
    return pow(this->Rayon, 2) * PI;
}

// Calcule le périmètre
double Cercle::perimetre() const {
    return 2 * this->Rayon * PI;
}

// Destructeur
Cercle::~Cercle() {
    std::cout << "Destructeur de la classe Cercle" << std::endl;
    // Pas de delete ici, car Centre n’est pas alloué dynamiquement dans ce code
}
