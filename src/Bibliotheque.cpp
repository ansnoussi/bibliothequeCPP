#include <iostream>
#include "Bibliotheque.h"
#include "Abonne.h"
#include <cstring>
#include <vector>

using namespace std;

    Bibliotheque::Bibliotheque(){
    
    }

    Bibliotheque::~Bibliotheque(){
    }
void Bibliotheque::ajoutAbonne(Abonne A) {
    LesAbonnes.push_back(A);
}

void Bibliotheque::ajoutOuvrage(Ouvrage O) {
    LesOuvrages.push_back(O);
}

Abonne* Bibliotheque::getAbonne(int id) {
    for(int i=0;i<LesAbonnes.size();i++){
        if (LesAbonnes[i].getID() == id)
            return &LesAbonnes[i];
    }
    return NULL;
}

Ouvrage* Bibliotheque::getOuvrage(string nom) {
    for(int i=0;i<LesOuvrages.size();i++){
        if(LesOuvrages[i].getTitre() == nom)
            return &LesOuvrages[i];
    }
    return NULL;
        
}

bool Bibliotheque::testExistenceAbo(int id) {
    for (int i=0;i<LesAbonnes.size();i++){
        if(LesAbonnes[i].getID()==id)
                return true ;
    }
    return false;
}

bool Bibliotheque::testExistenceOuv(string title) {
    for(int i=0;i<LesOuvrages.size();i++){
        if(LesOuvrages[i].getTitre() == title)
            return true;
    }
    return false;
}

void Bibliotheque::info() {
    cout << "**** Liste de ouvrages disponibles dans la bibliotheque ****" << endl;
    for(int i=0;i<LesOuvrages.size();i++){
        if(LesOuvrages[i].getStatue())
            cout << LesOuvrages[i].getTitre() << endl;
    }
    cout << endl;
    cout << "**** Liste de abonnes ayant un emprunt en cours ****" << endl;
    for(int i=0;i<LesAbonnes.size();i++){
        if(LesAbonnes[i].getOuvrageEnCours() != NULL)
            cout << LesAbonnes[i].getID() << "   " << LesAbonnes[i].getOuvrageEnCours()->getTitre() << endl;
    }
    cout << endl;
}

void Bibliotheque::emprunt(int id, string nom) {
    Ouvrage* O;
    for(int i=0;i<LesOuvrages.size();i++){
        if(LesOuvrages[i].getTitre() == nom){
            if(! LesOuvrages[i].getStatue())
                cout << "Le livre est indisponible" << endl;
            else{
            LesOuvrages[i].setStatue(false);
            O = &(LesOuvrages[i]);
            }
        }
    }
    
        if(! testExistenceAbo(id))
            cout << "Abonne introuvable !" << endl;
        else{
    for(int i=0;i<LesAbonnes.size();i++){
        if(LesAbonnes[i].getID() == id){
            // Si l'abonne a un emprunt un cours il sera automatiquement annulé(livre rendu) avant le nouveau emprunt
            if(LesAbonnes[i].getOuvrageEnCours())
            LesAbonnes[i].getOuvrageEnCours()->setStatue(true);
            LesAbonnes[i].setOuvrage(O);
        }
    }
        }
    
}

void Bibliotheque::rendre(int id) {
    for(int i=0;i<LesAbonnes.size();i++){
        if(LesAbonnes[i].getID() == id){
           LesAbonnes[i].getOuvrageEnCours()->setStatue(true);
           LesAbonnes[i].setOuvrage(NULL);
           break;
        }
    }
}