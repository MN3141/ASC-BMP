//---------------------------------------------------------------------------
//fisierele *.bmp stocheaza pixelii de jos in sus,de la stanga la dreapta
#pragma hdrstop
#include "BMP.h"
#include <fstream.h>
BMP::BMP() :Imago()
{
   this->text="Acesta este un test.";
   this->inputFileName="..\\imagini_sablon\\default.bmp";
   this->outputFileName="..\\imagini_generate\\defaultOutput.bmp";
}
void BMP:: setInputFileName(AnsiString inputFileName)
{
        this->inputFileName=inputFileName;
}
void BMP:: setOutputFileName(AnsiString outputFileName)
{
        this->outputFileName=outputFileName;
}
void BMP:: setText(AnsiString text)
{
        this->text=text;
}
void BMP:: createImageHidden()
//OBS:EM(end of medium) are codul ASCII x19
//PROBLEMA:Alegerea unei imagini generate drept sablon distruge imaginea originala

{       //OBS:WriteBuffer ia buffer-ul de la indicele 0
        //dar string-ul pleaca de la indicele 1!!
        //\n linie noua
        std::ifstream fin(this->inputFileName.c_str(),ios::binary);
        std::ofstream fout(this->outputFileName.c_str(),std::ios::binary);
        int index=1;
        byte *temp=new byte;
        for(int i=0;i<54;i++)//copiere portiune imagine;
        {
         fin.read(temp,1);
         fout.write(temp,1);
        }
        int size=this->text.Length();
        if(size>255)
           size=255;//codificam maxim 256 litere per imagine
        *temp=size;
         fout.write(temp,1);
         while(index<=size)
         {
            fin.read(temp,1);
            *temp=this->text.operator[](index);
            fout.write(temp,1);
            index++;
         }
         while(!fin.eof())
         {
             fin.read(temp,1);
         fout.write(temp,1);
         }
         fin.close();
         fout.close();
         delete temp;
}
void BMP:: createImageCreative()
{


}
AnsiString BMP::createText()
{
     AnsiString message="";
      std::ifstream fin(this->inputFileName.c_str(),ios::binary);
      fin.seekg(54,ios::beg);
      byte *temp=new byte;
      fin.read(temp,1);
      int size=*temp;
      temp=new byte[size];
      fin.read(temp,size);
      for(int i=0;i<size;i++)
      {
       message=message+(char)(*(temp+i));
      }
      delete temp;
      fin.close();
      return message;

}
BMP::~BMP()//necesar dezalocarii memoriei
{
    //delete this->imageFile;
}

//---------------------------------------------------------------------------

#pragma package(smart_init)
