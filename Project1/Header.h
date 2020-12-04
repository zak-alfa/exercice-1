#pragma once

class complexe
{
private:
	double re;
	double im;
public:
	complexe();                          //constructeur par défaut
	complexe(const complexe&);           //constructeur avec paramètres
	complexe(double, double);            //constructeur de copie

	void affichage();                    //affichage de la fonction
	double module();                     //calcul module
	complexe conjugue();                 //calcul conjugué
	complexe operator+(const complexe&); //surcharge de l'operateur +
	complexe operator+(double)const;
	complexe operator-(const complexe&); //surcharge de l'operateur -
	complexe operator*(const complexe&); //surcharge de l'operateur *



};