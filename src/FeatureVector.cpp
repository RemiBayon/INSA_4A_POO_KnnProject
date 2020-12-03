#include <iostream>
#include <vector>
#include <cmath>
#include "FeatureVector.h"

using namespace std;

FeatureVector::FeatureVector(double* tab_coordinates, int nb_coordinates)
{
    // copy coordinates in tab into _vector :
    for(int i=0; i<nb_coordinates; i++){
        _vector.push_back(*(tab_coordinates+i));   // push_back -> add element at the end of array
    }
}

double FeatureVector::operator*(const FeatureVector& vect1)
{
    double res = 0.0;
    int n = _vector.size();

    for(int i=0;i<n;i++)
    {
        //res=sqrt(x1*y1 + x2*y2 + ... + xn*yn);
        res+= _vector[i]*vect1._vector[i];
    }

    return res;
}

double FeatureVector::norme()
{
    // la norme d'un vecteur est �gale � la racine carr�e du produit scalaire de ce vecteur avec lui-m�me
    double value = this->operator*this;
    return sqrt(value);
}
