#pragma once


class CVect2D {

	//donnée membre
private:
	float Vecteur_fltX;
	float Vecteur_fltY;

	//fonction membre
public:

	//On récupère X
	float getVectX()const;
	//On récupère Y
	float getVectY()const;
	//On set X
	void setVectX(float fltX);
	//On set Y
	void setVectY(float fltY);
	//Addition de vecteurs
	CVect2D operator+(CVect2D&) const;
	//Soustraction de vecteurs
	CVect2D operator-(CVect2D&) const;
	//Multiplication de vecteurs
	CVect2D operator*(CVect2D &a) const;
	//Vecteurs égaux
	bool operator==(CVect2D &a) const;
	//Vecteurs Différents
	bool operator!=(CVect2D &a) const;
	//Produit scalaire
	void produitScalaire(CVect2D &Scalaire, float produit);
	//Norme
	float normeVecteur(CVect2D Vect1, CVect2D Vect2, CVect2D &Vect3);
	


	//Contructeur sans paramètres
	CVect2D();
	//Constructeur avec paramètres
	CVect2D(float fltX, float fltY = 0.0);
	//Constructeur avec paramètres par défaut
	//CVect2D(float fltX = 0.0, float fltY = 0.0);

	//Destructeur
	~CVect2D();
};