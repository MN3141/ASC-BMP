//---------------------------------------------------------------------------

#ifndef BMPH
#define BMPH
#include<string>
#include "Imago.h"
#include<fstream>
using namespace std;
class BMP:public Imago{
        string fileName;
        public:
        BMP(string fileName=" ",int size=0);
        ~BMP();
        open();
};
//---------------------------------------------------------------------------
#endif
