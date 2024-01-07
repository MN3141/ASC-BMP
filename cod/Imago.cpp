//---------------------------------------------------------------------------

//+++++
//+++++
//imaginile vor fi dreptunghiuri cu latimea 2
#pragma hdrstop
#include "Imago.h"
Imago :: Imago()
{
     this->text="IPRS";
     this->numPixels=text.Length();
     this->imageHeight=0;
     if(this->numPixels %2==0)
           {
            this->pixels=new Pixel[numPixels+1];
            this->imageWidth=this->numPixels/2;
           }
     else
     {
       this->pixels=new Pixel[numPixels+2]; //pt pixelul de compensatie
       this->imageWidth=this->numPixels/2+1;
     }
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