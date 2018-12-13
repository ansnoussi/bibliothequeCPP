#include <iostream>
#include "Abonne.h"
#include <cstring>
using namespace std;

    Abonne::Abonne(int identificateur , string name , int abon , Ouvrage &ouvr){
        id = identificateur;
        nom = name;
        numAbon = abon;
        ouvrPris = ouvr;

    }

    Abonne::~Abonne(){
        cout << "Object Abonne deleted !" << endl;
    }