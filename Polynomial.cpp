//
// Created by rudri on 9/12/2019.
//

#include <stdexcept>
#include <iostream>
#include "Polynomial.h"

Polynomial::Polynomial():grado(0){
}

Polynomial::~Polynomial() {

}

Polynomial operator+(const Polynomial &P1, const Polynomial &P2) {
    Polynomial temp;
    int val=0;
   for (int i=0;i<P1.vector_exponentes.size();i++) {
        for (int j = 0; j < P2.vector_exponentes.size(); j++) {
            if (P1.vector_exponentes[i] == P2.vector_exponentes[j]) {
                temp.vector_exponentes.push_back(P1.vector_exponentes[i]);
                temp.vector_coeficientes.push_back(P1.vector_coeficientes[i] + P2.vector_coeficientes[i]);
                val=1;
            }
            if (j<P2.vector_exponentes.size()-1 && val==0) {
                temp.vector_exponentes.push_back(P1.vector_exponentes[i]);
                temp.vector_coeficientes.push_back(P1.vector_coeficientes[i]);
            }
        }
    }
    return temp;
}

void operator+=(Polynomial &P1, const Polynomial &P2) {
    int val=0;
    for (int i=0;i<P2.vector_exponentes.size();i++) {
        for (int j = 0; j < P1.vector_exponentes.size(); j++) {
            if (P1.vector_exponentes[j] == P2.vector_exponentes[i]) {
                P1.vector_coeficientes[j]=P1.vector_coeficientes[j]+P2.vector_coeficientes[i];
                val=1;
            }
            if (j<P1.vector_exponentes.size()-1 && val==0) {
                P1.vector_coeficientes.push_back(P2.vector_coeficientes[i]);
                P1.vector_exponentes.push_back(P2.vector_exponentes[i]);
            }
        }
    }
}

Polynomial operator+(const Polynomial &pol, const int &number) {
    Polynomial temp;
    for (int i:pol.vector_exponentes) {
        if (i == 0)
            i += number;
    }
    for (int i:pol.vector_exponentes){
        temp.vector_exponentes.push_back(i);
    }
    for (int i:pol.vector_coeficientes){
        temp.vector_coeficientes.push_back(i);
    }
    return pol;
}

Polynomial operator+=(const Polynomial &pol, const int &number) {

    return Polynomial();
}

Polynomial operator+(const int &, const Polynomial &) {
    return Polynomial();
}

Polynomial operator+=(const int &, const Polynomial &) {
    return Polynomial();
}

Polynomial operator*(const Polynomial &, const Polynomial &) {
    return Polynomial();
}

Polynomial operator*(const int &, const Polynomial &) {
    return Polynomial();
}

Polynomial operator*(const Polynomial &, const int &) {
    return Polynomial();
}

Polynomial operator^(const Polynomial &, const int &) {
    return Polynomial();
}

void Polynomial::add(const int &coeficiente, const int &exponente) {
    vector_coeficientes.push_back(coeficiente);
    vector_exponentes.push_back(exponente);
}

unsigned int Polynomial::degree(){
    for (int i:vector_exponentes){
        if (i>grado)
        grado=i;}
    return grado;
}

ostream operator<<(const stringstream &ss, const Polynomial &pol) {
    string str_pol;

for (int i=0;i,pol.vector_exponentes.size();i++){
    for (int j=0;j<pol.vector_exponentes.size();i++){
        if (pol.vector_exponentes[j]==i && i>0)
            str_pol+=to_string(showpos(pol.vector_coeficientes[j])+"x^2"+to_string(pol.vector_exponentes[j])+" ";
        if (pol.vector_exponentes[j]==i && i==0)
            str_pol+=to_string(pol.vector_coeficientes[j])+" ";
    }
return
}
}

