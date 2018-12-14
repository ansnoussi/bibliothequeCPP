
#ifndef OUVRAGE_H
#define OUVRAGE_H
#include <string>
using namespace std;

class Ouvrage{
protected:
    string titre;
    string dateCreation;
    bool existe;
public:
    Ouvrage(string title , string creDate , bool exi);
    Ouvrage();
    ~Ouvrage();
    string getTitre();
};


#endif /* OUVRAGE_H */