#include <iostream>
#include "Livre.h"
#include <cstring>
using namespace std;

    Livre::Livre(string title, string creDate , bool exi , string author){
        titre = title;
        dateCreation = creDate;
        existe = exi;
        auteur = author;
    }

    Livre::~Livre(){
        cout << "Object Livre deleted !" << endl;
    }