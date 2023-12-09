//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "unitPrincipal.h"
#include "unitImagineGenerata.h"
#include<fstream>
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
         TFileStream *fout;
        AnsiString fileName="imagini\\image"+IntToStr(counter)+".txt";
        ShowMessage(fileName);
        fout=new TFileStream(fileName,fmCreate);
        int size=inputMemo->Text.Length();//OBS:Indexarea se face de la 1 pentru string-uri!!
        counter++;
        //fImage->Show();
        //fPrincipal->Hide();
}
//---------------------------------------------------------------------------
