#include<iostream>
#include<math.h>
#include"Header.h"

using namespace std;

//constructeur par défaut
complexe::complexe()
{
	this->re = 0;
	this->im = 0;
}

//constructeur avec paramètres
complexe::complexe(double x, double y)
{
	this->re = x;
	this->im = y;
}

//constructeur de copie
complexe::complexe(complexe const& C2)
{
	this->re = C2.re;
	this->im = C2.im;
}

//affichage de la fonction
void complexe::affichage()
{
	if (this->im >= 0)
	{
		cout << this->re << " + i" << this->im << endl;
	}
	else {
		cout << this->re << " - i" << -this->im << endl;
	}
}

//calcul module
double complexe::module()
{
	double res;
	res = sqrt(pow(this->re, 2) + pow(this->im, 2));
	return res;
}

//calcul conjugué
complexe complexe::conjugue()
{
	this->im = -(this->im);
	return *this;
}

//surcharge de l'operateur +
complexe complexe::operator+(const complexe& C)
{
	complexe res;
	res.re = this->re + C.re;
	res.im = this->im + C.im;
	return res;
}
complexe complexe::operator+(double x)const
{
	complexe res;
	res.re = this->re + x;
	res.im = this->im;
	return res;

}

//surcharge de l'operateur -
complexe complexe::operator-(const complexe& C)
{
	complexe res;
	res.re = this->re - C.re;
	res.im = this->im - C.im;
	return res;
}

//surcharge de l'operateur *
complexe complexe::operator*(const complexe& C)
{
	complexe res;
	res.re = (this->re * C.re) - (this->im * C.im);
	res.im = (this->re * C.im) + (this->im * C.im);
	return res;
}

