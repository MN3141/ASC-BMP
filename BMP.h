//---------------------------------------------------------------------------

#ifndef BMPH
#define BMPH
#include "Imago.h"
class BMP:public Imago{
        AnsiString fileName;
        TFileStream *imageFile;
        public:
        BMP(AnsiString fileName="imagini\\default.txt",AnsiString text=" ");
        void createImage();
        ~BMP();

};
//---------------------------------------------------------------------------
#endif
