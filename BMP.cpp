//---------------------------------------------------------------------------
/*fisierele *.bmp stocheaza pixelii de jos in sus,de la stanga la dreapta
  fisierele *.bmp folosesc notatia little endian*/
#pragma hdrstop

#include "BMP.h"
BMP::BMP(AnsiString fileName,AnsiString text):Imago(text)
{
        this->fileName=fileName;
       this->imageFile=new TFileStream( this->fileName,fmCreate);
}
void BMP:: createImage() //OBS:EM(end of medium) are codul ASCII x19
{
       this->imageFile->WriteBuffer(this->pixels+1,this->numPixels*3);  //OBS:WriteBuffer ia buffer-ul de la indicele 0
                                                                      //dar string-ul pleaca de la indicele 1!!!                                                  
}
void BMP::createText()
{

}
BMP::~BMP()//necesar dezalocarii memoriei
{
    delete this->imageFile;
}

//---------------------------------------------------------------------------

#pragma package(smart_init)
