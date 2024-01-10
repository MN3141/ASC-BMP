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
         delete[] temp;
}
void BMP:: createImageCreative()
{
//Fie num=nr simboluri citite
//Vom crea imagini patratice de latura n:
//n=((1+num+k)/2)
//unde,1 reprezinta stocarea nr de simboluri la adresa 36h
//     k=(1+num)%2,pentru a obtine o valoare para
 int n=(1+this->text.Length()+(( 1+this->text.Length() )%2) )/2;
//Pentru a respecta standardul BMP vom adauga la nevoie octetii de padding
 int padding=(4-(n*3)%4)%4;//inmultim cu 3 deoarece 1 pixel necesita 3 octeti
 int bitmapDataSize=n*n*3+padding*n;
 int fileSize=54+bitmapDataSize;//54=dimensiunea celor 2 antete
 this->bmpHeader[2]=fileSize;
 this->bmpHeader[3]=fileSize>>8;
 this->bmpHeader[4]=fileSize>>16;
 this->bmpHeader[5]=fileSize>>16;
 this->dibHeader[4]=n;//lungime imagine
 this->dibHeader[5]=n>>8;
 this->dibHeader[6]=n>>16;
 this->dibHeader[7]=n>>24;
 this->dibHeader[8]=n;//latime imagine
 this->dibHeader[9]=n>>8;
 this->dibHeader[10]=n>>16;
 this->dibHeader[11]=n>>24;
 this->dibHeader[20]=bitmapDataSize;//dimensiune pixeli+padding
 this->dibHeader[21]=bitmapDataSize>>8;
 this->dibHeader[22]=bitmapDataSize>>16;
 this->dibHeader[23]=bitmapDataSize>>24;
 byte *bitmapData=new byte[bitmapDataSize];
 bitmapData[0]=this->text.Length();
 for(int i=1;i<=this->text.Length();i++)
        bitmapData[i]=this->text.operator [](i);
 for(int i=this->text.Length()+1;i<bitmapDataSize;i++)
        bitmapData[i]=0;
 std::ofstream fout(this->outputFileName.c_str(),std::ios::binary);
 fout.write(this->bmpHeader,14);
 fout.write(this->dibHeader,40);
 fout.write(bitmapData,bitmapDataSize);
 fout.close();
 delete[] bitmapData;
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

BMP::~BMP()
{

}
//---------------------------------------------------------------------------

#pragma package(smart_init)
