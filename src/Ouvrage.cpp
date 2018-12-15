
#include <iostream>
#include "Ouvrage.h"
#include <cstring>
using namespace std;

    Ouvrage::Ouvrage(string titre , string dateCreation , bool existe){
        this->titre = titre;
        this->dateCreation = dateCreation;
        this->existe = existe;
    }
    Ouvrage::Ouvrage() {

}



    string Ouvrage::getTitre(){
        return titre;
    }
    
    
    bool Ouvrage::getStatue() {
        return existe;
}
    void Ouvrage::setStatue(bool e) {
        existe = e;
}
    


