#include <iostream>
#include "Abonne.h"
#include <cstring>
using namespace std;

    Abonne::Abonne(int id , string nom , int numAbonnement , Ouvrage ouvragePris){
        this->ID = id;
        this->nom = nom;
        this->numAbonnement = numAbonnement;
        this->ouvragePris = ouvragePris;

    }

    Abonne::~Abonne(){
        cout << "Object Abonne deleted !" << endl;
    }
    int Abonne::getID() {
        return ID;
}
    Ouvrage Abonne::getOuvrageEnCours() {
        return ouvragePris;
}
    void Abonne::setOuvrage(Ouvrage O) {
        ouvragePris = O;
}




