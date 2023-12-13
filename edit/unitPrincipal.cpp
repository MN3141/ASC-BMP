//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "unitPrincipal.h"
#include "unitImagineGenerata.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

TfPrincipal *fPrincipal;
//---------------------------------------------------------------------------
__fastcall TfPrincipal::TfPrincipal(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TfPrincipal::btnGenImagineClick(TObject *Sender)
{
         static int counter=0;//variabila pseudoglobala
        AnsiString fileName="imagini\\image"+IntToStr(counter)+".txt";//OBS:Indexarea se face de la 1 pentru string-uri!!
        counter++;
        BMP test(fileName);
        test.createImage();
        //fImage->Show();
        //fPrincipal->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TfPrincipal::btnGenTextClick(TObject *Sender)
{
             //  BMP test;
             //  inputMemo->Text=test.createText("imagini\\image0.txt");
}
//---------------------------------------------------------------------------


void __fastcall TfPrincipal::btnLoadClick(TObject *Sender)
{
        ODFiles->Execute();
        if(ODFiles->FileName != "")
        {

                imgOriginal->Picture->LoadFromFile(ODFiles->FileName);
                imgOriginal->Stretch = true;
                fisierBMP = new BMP( ODFiles->FileName);
        }
}
//---------------------------------------------------------------------------

void __fastcall TfPrincipal::btnCodificareClick(TObject *Sender)
{
   fisierBMP->Codificare(eMesaj->Text);
   imgCodificat->Picture->LoadFromFile("d:\\test.bmp");
   imgCodificat->Stretch = true;
   //fisierBMP = new BMP( ODFiles->FileName);
}
//---------------------------------------------------------------------------

