#include <iostream>
#include "Abonne.h"
#include <cstring>
#include "Bibliotheque.h"
using namespace std;

    Abonne::Abonne(int id , string nom , int numAbonnement){
        this->ID = id;
        this->nom = nom;
        this->numAbonnement = numAbonnement;
        ouvragePris = NULL;
    }

    Abonne::~Abonne(){
    }
    int Abonne::getID() {
        return ID;
}
    Ouvrage* Abonne::getOuvrageEnCours() {
        return ouvragePris;
}
    void Abonne::setOuvrage(Ouvrage* O) {
        ouvragePris = O;
}




