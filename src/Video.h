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
    Video(string title, string creDate , bool exi , string editor , double length);
    ~Video();
};


#endif /* VIDEO_H */