//---------------------------------------------------------------------------

#ifndef BMPH
#define BMPH
#include<string>
#include "Imago.h"
#include<fstream>
using namespace std;
class BMP:public Imago{
        char* fileName;
        fstream imageFile;
        public:
        BMP(char *fileName=" ",string text=" ");
        ~BMP();
        open();
};
//---------------------------------------------------------------------------
#endif
