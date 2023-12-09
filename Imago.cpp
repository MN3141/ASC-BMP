//---------------------------------------------------------------------------


#pragma hdrstop
#include "Imago.h"
Imago :: Imago(AnsiString text)
{
     this->numPixels=text.Length();
     this->pixels=new Pixel[numPixels+1];
     for(int i=1;i<=numPixels;i++) //OBS:Indexarea se face de la 1 pentru string-uri!!
     {
     (pixels+i)->r=0;
     (pixels+i)->g=0;
      (pixels+i)->b=text.operator[](i);
     }
}
Imago::~Imago()
{
 delete this->pixels;
}
//---------------------------------------------------------------------------

#pragma package(smart_init)
