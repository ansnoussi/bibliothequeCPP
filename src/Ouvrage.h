
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
    Ouvrage();
    ~Ouvrage();
};


#endif /* OUVRAGE_H */