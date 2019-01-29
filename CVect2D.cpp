#include "CVect2D.h"
#include <math.h>

//On récupère X
float CVect2D::getVectX() const
{
	return this->Vecteur_fltX;
}

//On set X
void CVect2D::setVectX(float fltX)
{
	this->Vecteur_fltX = fltX;
}

//On récupère Y
float CVect2D::getVectY() const
{
	return this->Vecteur_fltY;
}

//On set Y
void CVect2D::setVectY(float fltY)
{
	this->Vecteur_fltY = fltY;
}

//Addition de vecteurs
CVect2D CVect2D::operator+(CVect2D &a) const {

	CVect2D Vect;
	Vect.Vecteur_fltX = Vecteur_fltX + a.Vecteur_fltX; //Addition en X
	Vect.Vecteur_fltY = Vecteur_fltY + a.Vecteur_fltY; //Addition en Y
	return Vect;
}


//Soustraction de vecteurs
CVect2D CVect2D::operator-(CVect2D &a) const {

	CVect2D Vect;
	Vect.Vecteur_fltX = Vecteur_fltX - a.Vecteur_fltX; //Soustraction en X
	Vect.Vecteur_fltY = Vecteur_fltY - a.Vecteur_fltY; //Soustraction en Y
	return Vect;
}


//Multiplication de vecteurs
CVect2D CVect2D::operator*(CVect2D &a) const {

	CVect2D Vect;
	Vect.Vecteur_fltX = Vecteur_fltX * a.Vecteur_fltX; //Multiplication en X
	Vect.Vecteur_fltY = Vecteur_fltY * a.Vecteur_fltY; //Multiplication en X
	return Vect;
}

//Vecteurs Egaux
bool CVect2D::operator==(CVect2D &a) const {

	if (Vecteur_fltX == a.Vecteur_fltX && Vecteur_fltY == a.Vecteur_fltY) //Comparaison des vecteurs en X et Y
		return true;
	else
		return false;
}

//Vecteurs Différents
bool CVect2D::operator!=(CVect2D &a) const {

	if (Vecteur_fltX != a.Vecteur_fltX || Vecteur_fltY != a.Vecteur_fltY) //Comparaison des vecteurs en X et Y
		return true;
	else
		return false;
}

//Produit scalaire
void CVect2D::produitScalaire(CVect2D &Scalaire, float produit)
{
	Scalaire.Vecteur_fltX = Scalaire.getVectX() * produit;
	Scalaire.Vecteur_fltY = Scalaire.getVectY() * produit;
}

//Norme
float CVect2D::normeVecteur(CVect2D Vect1, CVect2D Vect2, CVect2D &Vect3)
{
	return sqrt(pow(Vect2.getVectX() - Vect1.getVectX(), 2) + pow(Vect2.getVectY() - Vect1.getVectY(), 2));
}

//Constructeur sans paramètres
CVect2D::CVect2D()
{
	this->Vecteur_fltX = this->Vecteur_fltY = 0.0f;
}

//Constructeur avec paramètres
CVect2D::CVect2D(float fltX, float fltY)
{
	this->Vecteur_fltX = fltX;
	this->Vecteur_fltY = fltY;
}


//Constructeur avec paramètres par défaut
/*
CVect2D::CVect2D(float fltX, float fltY)
{
	this->fltX = fltX;
	this->fltY = fltY;
}
*/
CVect2D::~CVect2D()
{

}