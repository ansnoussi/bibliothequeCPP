#include <iostream>
#include "Video.h"
#include <cstring>
using namespace std;

    Video::Video(string titre , string dateCreation , bool existe, string editeur , double duree){
        this->titre = titre;
        this->dateCreation = dateCreation;
        this->existe = existe;
        this->editeur = editeur;
        this->duree = duree;
    }