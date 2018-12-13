#include <iostream>
#include "Video.h"
#include <cstring>
using namespace std;

    Video::Video(string title, string creDate , bool exi , string editor , double length){
        titre = title;
        dateCreation = creDate;
        existe = exi;
        editeur = editor;
        duree = length;
    }

    Video::~Video(){
        cout << "Object Video deleted !" << endl;
    }