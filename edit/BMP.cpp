//---------------------------------------------------------------------------
//fisierele *.bmp stocheaza pixelii de jos in sus,de la stanga la dreapta
#pragma hdrstop
#include <fstream.h>
#include "BMP.h"




BMP::BMP(AnsiString fileName)//:Imago(text)
{
   this->fileName = fileName;

      /*      this->fileName=fileName;
       if(FileExists(this->fileName) )
                {
                 ShowMessage("Exista deja");
                 this->imageFile=new TFileStream( this->fileName,fmWrite);

                }

       //this->imageFile=new TFileStream( this->fileName,fmCreate);
       if(this->fileName=="imagini\\default.txt") //pt a preveni o potentiala eroare privind citirea fisierului
        { char *tempBuffer[]="ACESTA ESTE UN TEST.";
          this->imageFile->WriteBuffer(tempBuffer,20);
        }
        */
}
void BMP::Codificare(AnsiString mesaj)
{
    message = mesaj;
     //stocare temporara a lungimii textului ?
     //static len(cheie ?)
    std::ifstream fin(this->fileName.c_str(),std::ios::binary);
    fin.seekg( 0, std::ios::end );
    int dimension = fin.tellg();
    fin.seekg( 0, std::ios::beg );
    std::ofstream fout("d:\\test.bmp",std::ios::binary);
    unsigned char o[1];
    int i = 0;
    for (i=0;i<100;i++)
    {
        fin.read((char*)o,1);
        fout.write((char*)o,1);
    }
    while( !fin.eof())
    {
        fin.read((char*)o,1);
        o[0] = o[0] & 0xC0;
        fout.write((char*)o,1);
        i++;
    };
    fin.close();
    fout.close();

}

void BMP:: createImage() //OBS:EM(end of medium) are codul ASCII x19

{       //OBS:WriteBuffer ia buffer-ul de la indicele 0
        //dar string-ul pleaca de la indicele 1!!
        //\n linie noua
  //     this->imageFile->WriteBuffer(this->pixels+1,this->numPixels*3);
}
AnsiString BMP::createText(AnsiString fileName)
{
 /*  AnsiString text;
   this->fileName=fileName;
   if(FileExists(this->fileName) )
   {
        char *temp[]="Balgrad, imamo problem";
       //  this->imageFile=new TFileStream( this->fileName,fmOpenRead);
         //this->imageFile->ReadBuffer(temp,30);
         text=temp;

   }
   else{

    ShowMessage(this->fileName +" NU EXISTA!");
    text="FFFFFFFF";
   }
   return text;  */
}
BMP::~BMP()//necesar dezalocarii memoriei
{
  //  delete this->imageFile;
}

//---------------------------------------------------------------------------

#pragma package(smart_init)
