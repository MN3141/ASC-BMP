//---------------------------------------------------------------------------


#pragma hdrstop

#include "Imago.h"
Imago ::Imago(int size)
{
   this->numPixels=size;
   this->pixels=new Pixel[size];
}
Imago::~Imago()
{
 delete this->pixels;
}
//---------------------------------------------------------------------------

#pragma package(smart_init)
