//---------------------------------------------------------------------------


#pragma hdrstop
#include "Imago.h"
#include<iostream>
using namespace std;
Imago :: Imago(string text)
{
     this->numPixels=text.length();
     this->pixels=new Pixel[numPixels];
     for(int i=0;i<numPixels;i++)
     {
      (pixels+i)->b=text.operator[](i);
     }
}
Imago::~Imago()
{
 delete this->pixels;
}
//---------------------------------------------------------------------------

#pragma package(smart_init)
