/*
* Crée une classe Rectangle avec les attributs largeur et hauteur. 
* Écris un constructeur qui initialise ces attributs. Ajoute une méthode pour calculer et afficher la surface du rectangle.
*/

#include <iostream>
using namespace std;

class Rectangle {
private:
	double largeur;
	double hauteur;
public:
	Rectangle(double largeur_rectangle, double hauteur_rectangle) {
		largeur = largeur_rectangle;
		hauteur = hauteur_rectangle;
	}

	void setLargeur(double largeur_rectangle) {
		largeur = largeur_rectangle;
	}

	double getLargeur() {
		return largeur;
	}

	void setHauteur(double hauteur_rectangle) {
		hauteur = hauteur_rectangle;
	}

	double getHauteur() {
		return hauteur;
	}

	double getSurface() {
		return largeur * hauteur;
	}

};

/*
int main() {
	Rectangle rectangle1(50, 50);

	cout << "La surface est : " << rectangle1.getSurface() << endl;
}
*/