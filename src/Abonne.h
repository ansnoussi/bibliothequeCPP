
#ifndef ABONNE_H
#define ABONNE_H
#include <string>
#include "Ouvrage.h"
using namespace std;

class Abonne{
private:
    int id;
    string nom;
    int numAbon;
    Ouvrage ouvrPris;
public:
    Abonne(int identificateur , string name , int abon , Ouvrage &ouvr );
    ~Abonne();
};


#endif /* ABONNE_H */