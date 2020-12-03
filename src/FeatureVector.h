
#ifndef DEF_FEATUREVECTOR
#define DEF_FEATUREVECTOR

#include <iostream>
#include <vector>
#include <cmath>


class FeatureVector
{
    public:
        FeatureVector(double* tab_coordinates, int nb_coordinates);
        //~FeatureVector(); // -> TO DO
        double norme();

        double operator*(const FeatureVector& vect1);  // produit scalaire
        //friend double operator*(const FeatureVector& vect1, const FeatureVector& vect2);  // produit scalaire
        // L’opérateur * a été déclaré « friend » afin de lui permettre d’accéder aux données « private » de la classe « FeatureVector ».

        void affiche();

    private:
        int _norme;
        std::vector<double> _vector = {}; // -> empty vector
        //std::vector<double> _vector{std::vector<double>(2)}; // -> empty vector with 2 elements

        /*
        documentation for std::vector elements :
        https://en.cppreference.com/w/cpp/container/vector
        */
};






#endif
