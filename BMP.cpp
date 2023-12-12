//---------------------------------------------------------------------------
//fisierele *.bmp stocheaza pixelii de jos in sus,de la stanga la dreapta
#pragma hdrstop

#include "BMP.h"
BMP::BMP(AnsiString fileName,AnsiString text):Imago(text)
{
            this->fileName=fileName;
       /*if(FileExists(this->fileName) )
                {
                 ShowMessage("Exista deja");
                }
       else
       {
       ShowMessage(this->fileName+"nu exista");
        this->imageFile=new TFileStream( this->fileName,fmCreate);
       } */
       this->imageFile=new TFileStream( this->fileName,fmCreate);
       if(this->fileName=="imagini\\default.txt") //pt a preveni o potentiala eroare privind citirea fisierului
        { char *tempBuffer="ACESTA ESTE UN TEST.";
          this->imageFile->WriteBuffer(tempBuffer,20);
        }
}
void BMP:: createImage() //OBS:EM(end of medium) are codul ASCII x19

{       //OBS:WriteBuffer ia buffer-ul de la indicele 0
        //dar string-ul pleaca de la indicele 1!!
        //\n linie noua
       this->imageFile->WriteBuffer(this->pixels+1,this->numPixels*3);
}
AnsiString BMP::createText(AnsiString fileName)
{
   AnsiString text;
   this->fileName=fileName;
   if(FileExists(this->fileName) )
   {
        char *temp="Balgrad, imamo problem";
       //  this->imageFile=new TFileStream( this->fileName,fmOpenRead);
         //this->imageFile->ReadBuffer(temp,30);
         text=temp;

   }
   else{

    ShowMessage(this->fileName +" NU EXISTA!");
    text="FFFFFFFF";
   }
   return text;
}
BMP::~BMP()//necesar dezalocarii memoriei
{
    delete this->imageFile;
}

//---------------------------------------------------------------------------

#pragma package(smart_init)
