#ifndef BIBLIOTHEQUE_H
#define BIBLIOTHEQUE_H
#include <string>
#include <vector>
#include "Ouvrage.h"
#include "Abonne.h"
#include "Livre.h"

using namespace std;

class Bibliotheque{
private:
    vector <Abonne> LesAbonnes;
    vector <Ouvrage> LesOuvrages;

public:
    Bibliotheque();
    ~Bibliotheque();
    void ajoutOuvrage(Ouvrage O);
    Ouvrage getOuvrage(string nom);
    void ajoutAbonne(Abonne A);
    Abonne getAbonne(int id);
    void emprunt(int id,string nom);
    void rendre(int id);
    bool testExistenceOuv(string title);
    bool testExistenceAbo(int id);
    void info();
};


#endif /* BIBLIOTHEQUE_H */

