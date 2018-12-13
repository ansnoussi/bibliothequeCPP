
#ifndef LIVRE_H
#define LIVRE_H
#include <string>
#include "Ouvrage.h"
using namespace std;

class Livre : public Ouvrage{
private:
    string auteur;
public:
    Livre(string title, string creDate , bool exi , string author);
    ~Livre();
};


#endif /* LIVRE_H */