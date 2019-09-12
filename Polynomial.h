//
// Created by ruben on 9/12/2019.
//

#ifndef POLINOMIO_POLINOMIO_H
#define POLINOMIO_POLINOMIO_H

#include <vector>
#include <ostream>
#include <iostream>
using namespace std;

class Polynomial {
private:
    vector<double> vector_coeficientes;
    vector <int> vector_exponentes;
    double coeficiente;
    unsigned int grado;
public:
    Polynomial();
    friend Polynomial operator+(const Polynomial &,const Polynomial &);
    friend void operator+=(Polynomial &,const Polynomial &);
    friend Polynomial operator+(const Polynomial &,const int &);
    friend Polynomial operator+=(const Polynomial &,const int &);
    friend Polynomial operator+(const int &,const Polynomial &);
    friend Polynomial operator+=(const int &,const Polynomial &);
    friend Polynomial operator*(const Polynomial &,const Polynomial &);
    friend Polynomial operator*(const int &,const Polynomial &);
    friend Polynomial operator*(const Polynomial &,const int &);
    friend Polynomial operator^(const Polynomial &,const int &);
    friend ostream operator<<(const stringstream &,const Polynomial&);
    void add(const int &,const int &);
    unsigned int degree();

;    ~Polynomial();

};

#endif //POLINOMIO_POLINOMIO_H
