#include <iostream>
#include "Livre.h"
#include <cstring>
using namespace std;

    Livre::Livre(string titre , string dateCreation , bool existe, string auteur){
        this->titre = titre;
        this->dateCreation = dateCreation;
        this->existe = existe;
        this->auteur = auteur;
    }