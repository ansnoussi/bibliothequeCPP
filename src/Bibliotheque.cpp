#include <iostream>
#include "Bibliotheque.h"
#include <cstring>
using namespace std;
#define NBR_OUV 100
#define NBR_ABON 50

    Bibliotheque::Bibliotheque(){
        nbrAbonne =0;
        nbrOuvrages =0;
    }

    Bibliotheque::~Bibliotheque(){
        cout << "Object Bibliotheque deleted !" << endl;
    }

    bool ouvrExiste(string title){
        for(int i =0 ; i< nbrOuvrages ; i++){
            if(ouv[i]->getTitre()==title){
                return true;
            }
        }
        return false;
    }

    int Bibliotheque::ajoutOuvrage(Ouvrage &ouvr){
        if(nbrOuvrages == NBR_OUV){
            //on ne peut plus ajouter des ouvrages
            return 0;
        }
        if(ouvrExiste(ouvr->getTitre())){
            //l'ouvrage existe deja dans bibliotheque
            return 0;
        }
        ouv[nbrOuvrages] = ouvr;
        nbrOuvrages ++;
        //l'ajout est effectué avec success
        return 1;
    };