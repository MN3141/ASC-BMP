//---------------------------------------------------------------------------
//fisierele *.bmp stocheaza pixelii de jos in sus,de la stanga la dreapta
#pragma hdrstop

#include "BMP.h"
BMP::BMP(AnsiString fileName,AnsiString text):Imago(text)
{
        this->fileName=fileName;
       this->imageFile=new TFileStream( this->fileName,fmCreate);
}
void BMP:: createImage() //OBS:EM(end of medium) are codul ASCII x19

{       //OBS:WriteBuffer ia buffer-ul de la indicele 0
        //dar string-ul pleaca de la indicele 1!!
        //\n linie noua
        char *test="TEST";
       this->imageFile->WriteBuffer(this->pixels+1,this->numPixels*3);
       this->imageFile->WriteBuffer(test,4);
}
AnsiString BMP::createText(AnsiString fileName)
{
   this->imageFile=new TFileStream(fileName,fmOpenRead);
   char *buffer=" ";
   int startIndex=0;
   int imageSize=0;
   this->imageFile->Seek(10,soFromBeginning);//setare pozitie cursor
   this->imageFile->ReadBuffer(buffer,1);
   startIndex=*buffer ;
   this->imageFile->Seek(2,soFromBeginning);
   this->imageFile->ReadBuffer(buffer,4);
   for(int i=0;i<4;i++) //*.bmp foloseste notatie little endian
   {
      imageSize=imageSize+ *(buffer+i);
      imageSize=imageSize<<(8*(i+1));
   }
   ShowMessage(startIndex);
   ShowMessage(imageSize);
   return text;
}
BMP::~BMP()//necesar dezalocarii memoriei
{
    delete this->imageFile;
}

//---------------------------------------------------------------------------

#pragma package(smart_init)
