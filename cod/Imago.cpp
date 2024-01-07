//---------------------------------------------------------------------------

//+++++
//+++++
//imaginile vor fi dreptunghiuri cu latimea 2
#pragma hdrstop
#include "Imago.h"
Imago :: Imago()
{
//Primul antet
//==================================================
  this->bmpHeader[0]='B';
  this->bmpHeader[1]='M';
  for(int i=6;i<=9;i++)
    this->bmpHeader[i]=0;
  this->bmpHeader[10]=36; //offset pixeli
  this->bmpHeader[11]=0;
  this->bmpHeader[12]=0;
  this->bmpHeader[13]=0;
//==================================================
//Al doilea antet
//==================================================
   this->dibHeader[0]=28; //marime antet DIB
   this->dibHeader[1]=0;
   this->dibHeader[2]=0;
   this->dibHeader[3]=0;
   this->dibHeader[12]=1;//nr planuri culoare;
   this->dibHeader[13]=0;
   this->dibHeader[14]=18;//nr biti per pixel
   this->dibHeader[15]=0;
   this->dibHeader[16]=0;//lipsa compresiei
   this->dibHeader[17]=0;
   this->dibHeader[18]=0;
   this->dibHeader[19]=0;
   for(int i=32;i<=39;i++)//setare paleta culori
      this->dibHeader[i]=0
//==================================================
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
