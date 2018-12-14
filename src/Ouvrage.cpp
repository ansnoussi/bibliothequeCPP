#include <iostream>
#include "Ouvrage.h"
#include <cstring>
using namespace std;

    Ouvrage::Ouvrage(string title , string creDate , bool exi){
        titre = title;
        dateCreation = creDate;
        existe = exi;
    }

    Ouvrage::~Ouvrage(){
        cout << "Object Ouvrage deleted !" << endl;
    }
    string Ouvrage::getTitre(){
        return titre;
    }