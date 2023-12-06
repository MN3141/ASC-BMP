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
        fImage->Show();
        fPrincipal->Hide();
}
//---------------------------------------------------------------------------
