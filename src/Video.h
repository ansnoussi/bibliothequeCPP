#ifndef VIDEO_H
#define VIDEO_H
#include <string>
#include "Ouvrage.h"
using namespace std;

class Video : public Ouvrage{
private:
    string editeur;
    double duree;
public:
    Video(string titre , string dateCreation , bool existe, string editeur , double duree);
};


#endif /* VIDEO_H */

