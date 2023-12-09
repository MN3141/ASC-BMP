//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "unitPrincipal.h"
#include "unitImagineGenerata.h"
#include "BMP.h"
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
        BMP test(fileName,inputMemo->Text);
        test.createImage();
        //fImage->Show();
        //fPrincipal->Hide();
}
//---------------------------------------------------------------------------
