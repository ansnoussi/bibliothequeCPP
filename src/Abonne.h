#ifndef ABONNE_H
#define ABONNE_H
#include <string>
#include "Ouvrage.h"
using namespace std;

class Abonne{
private:
    int ID;
    string nom;
    int numAbonnement;
    Ouvrage ouvragePris;
public:
    Abonne(int id , string nom , int numAbonnement , Ouvrage ouvragePris );
    ~Abonne();
    int getID();
    Ouvrage getOuvrageEnCours();
    
    void setOuvrage(Ouvrage O);
};


#endif /* ABONNE_H */

