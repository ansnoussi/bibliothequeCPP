
#ifndef LIVRE_H
#define LIVRE_H
#include <string>
#include "Ouvrage.h"
using namespace std;

class Livre : public Ouvrage{
private:
    string auteur;
public:
    Livre();
    ~Livre();
};


#endif /* LIVRE_H */