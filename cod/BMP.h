//---------------------------------------------------------------------------

#ifndef BMPH
#define BMPH
#include "Imago.h"
class BMP:public Imago{
        AnsiString inputFileName;
        AnsiString outputFileName;
        public:
        BMP();
        void setInputFileName(AnsiString inputFileName);
        void setOutputFileName(AnsiString outputFileName);
        void setText(AnsiString text);
        void createImageHidden();
        void createImageCreative();
        AnsiString createText();
        ~BMP();

};
//---------------------------------------------------------------------------
#endif
