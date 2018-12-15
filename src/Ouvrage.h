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
    Ouvrage(string titre , string dateCreation , bool existe);
    Ouvrage();
    string getTitre();
    bool getStatue();
    void setStatue(bool e);
};



#endif /* OUVRAGE_H */

