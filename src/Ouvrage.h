#ifndef OUVRAGE_H
#define OUVRAGE_H
#include <string>

class Ouvrage{
protected:
    std::string titre;
    std::string dateCreation;
    bool existe;
public:
    Ouvrage(std::string titre , std::string dateCreation , bool existe);
    Ouvrage();
    std::string getTitre();
    bool getStatue();
    void setStatue(bool e);
};



#endif /* OUVRAGE_H */

