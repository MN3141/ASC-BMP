//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "unitImagineGenerata.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfImage *fImage;
//---------------------------------------------------------------------------
__fastcall TfImage::TfImage(TComponent* Owner)
        : TForm(Owner)
{          TImage * imgHolder = new TImage(fImage);
         imgHolder->Parent = fImage;
        Graphics::TBitmap * bmpPicture = new Graphics::TBitmap;
       // bmpPicture->LoadFromFile("C:\\Arhiva_ULBS\\Proiecte\\Anul_II\\ASC-BMP\\logo.bmp");
        imgHolder->Picture->Graphic = bmpPicture;
        //definire de mana a unei alte imagini
        //Tools->Image Editor pt a creea/edita imagini
}
//---------------------------------------------------------------------------
