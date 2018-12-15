#ifndef LIVRE_H
#define LIVRE_H
#include <string>
#include "Ouvrage.h"
using namespace std;

class Livre : public Ouvrage{
private:
    string auteur;
public:
    Livre(string titre , string dateCreation , bool existe, string auteur);
};



#endif /* LIVRE_H */

