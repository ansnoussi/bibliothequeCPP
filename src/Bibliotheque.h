
#ifndef BIBLIOTHEQUE_H
#define BIBLIOTHEQUE_H
#include <string>
#include "Ouvrage.h"
#include "Abonne.h"
#define NBR_OUV 100
#define NBR_ABON 50
using namespace std;

class Bibliotheque{
private:
    Ouvrage ouv[NBR_OUV];
    Abonne abon[NBR_ABON];
    int nbrOuvrages = NBR_OUV;
    int nbrAbonne = NBR_ABON;

public:
    Bibliotheque();
    ~Bibliotheque();
    int ajoutOuvrage(Ouvrage &ouvr);
    bool ouvrExiste(string title);
};


#endif /* BIBLIOTHEQUE_H */