#include <iostream>
#include <cstdlib>
#include <cstring>
#include "Abonne.h"
#include "Bibliotheque.h"
#include "Livre.h"
#include "Ouvrage.h"
#include "Video.h"

using namespace std;
int main() {
    Bibliotheque Bib;
    Abonne A(1,"Yassine",30);
    Abonne B(2,"Lamine",1458);
    Abonne C(3,"Nesrine",9452);
    Bib.ajoutAbonne(A);
    Bib.ajoutAbonne(B);
    Bib.ajoutAbonne(C);
    Ouvrage O("ABC","1002",true);
    Ouvrage O2("Physique","2018",true);
    Ouvrage O3("Mathematiques","0",true);
    Ouvrage O4("C++","1987",true);
    Ouvrage O5("SQL","1974",true);
    Bib.ajoutOuvrage(O);
    Bib.ajoutOuvrage(O2);
    Bib.ajoutOuvrage(O3);
    Bib.ajoutOuvrage(O4);
    Bib.ajoutOuvrage(O5);
    Bib.emprunt(A.getID(),O.getTitre());
    Bib.emprunt(B.getID(),O2.getTitre());
    Bib.info();
    system("pause");
    // l'abonne A va changer emprunter un autre Livre
    Bib.emprunt(A.getID(),O5.getTitre());
    Bib.info();
    system("pause");
    // l'abonne A va rendre le livre emprunté
    Bib.rendre(A.getID());
    Bib.info();
    return 0;
}

