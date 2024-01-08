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
  this->bmpHeader[10]=54; //offset pixeli
  this->bmpHeader[11]=0;
  this->bmpHeader[12]=0;
  this->bmpHeader[13]=0;
//==================================================
//Al doilea antet
//==================================================
   this->dibHeader[0]=40; //marime antet DIB
   this->dibHeader[1]=0;
   this->dibHeader[2]=0;
   this->dibHeader[3]=0;
   this->dibHeader[12]=1;//nr planuri culoare;
   this->dibHeader[13]=0;
   this->dibHeader[14]=24;//nr biti per pixel
   this->dibHeader[15]=0;
   this->dibHeader[16]=0;//lipsa compresiei
   this->dibHeader[17]=0;
   this->dibHeader[18]=0;
   this->dibHeader[19]=0;
   for(int i=24;i<=39;i++)//setare paleta culori
      this->dibHeader[i]=0;
}
Imago::~Imago()
{

}
//---------------------------------------------------------------------------

#pragma package(smart_init)
