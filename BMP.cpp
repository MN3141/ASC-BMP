//---------------------------------------------------------------------------


#pragma hdrstop

#include "BMP.h"
using namespace std;
BMP::BMP(char *fileName,string text):Imago(text)
{
        this->fileName=fileName;
        this->imageFile.open(this->fileName);
}
BMP::~BMP()//necesar dezalocarii memoriei
{

}

//---------------------------------------------------------------------------

#pragma package(smart_init)
