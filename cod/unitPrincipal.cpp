 //---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "unitPrincipal.h"
#include "BMP.h"


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
        AnsiString fileName="..\\imagini_generate\\image"+IntToStr(counter)+".bmp";//OBS:Indexarea se face de la 1 pentru string-uri!!
        bmpFile.setOutputFileName(fileName);
        bmpFile.setText(editInput->Text);
        if(!checkBoxMode->Checked)
                bmpFile.createImageHidden();
        else bmpFile.createImageCreative();
         imgOutput->Picture->LoadFromFile(fileName);
         imgOutput->Stretch = true;
        counter++;
}
//---------------------------------------------------------------------------

void __fastcall TfPrincipal::btnGenTextClick(TObject *Sender)
{
          openPicDialogText->Execute();
          if(openPicDialogText->FileName != "")
               {
                imgOutput->Picture->LoadFromFile(openPicDialogText->FileName);
                imgOutput->Stretch = true;
                bmpFile.setInputFileName(openPicDialogText->FileName);
                editInput->Text=bmpFile.createText();
                 }

}
//---------------------------------------------------------------------------


void __fastcall TfPrincipal::btnSablonClick(TObject *Sender)
{
             openPicDialog->Execute();
             if(openPicDialog->FileName != "")
               {
                imgInput->Picture->LoadFromFile(openPicDialog->FileName);
                imgInput->Stretch = true;
                bmpFile.setInputFileName(openPicDialog->FileName);
                 }

}

void __fastcall TfPrincipal::btnExitClick(TObject *Sender)
{
        exit(0);
}
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

