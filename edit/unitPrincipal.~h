//---------------------------------------------------------------------------

#ifndef unitPrincipalH
#define unitPrincipalH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Dialogs.hpp>
#include "BMP.h"
//---------------------------------------------------------------------------
class TfPrincipal : public TForm
{
__published:	// IDE-managed Components
        TLabel *titleLabel;
        TButton *btnGenImagine;
        TButton *btnGenText;
        TImage *imgOriginal;
        TButton *btnLoad;
        TOpenDialog *ODFiles;
        TButton *btnCodificare;
        TEdit *eMesaj;
        TImage *imgCodificat;
        void __fastcall btnGenImagineClick(TObject *Sender);
        void __fastcall btnGenTextClick(TObject *Sender);
        void __fastcall btnLoadClick(TObject *Sender);
        void __fastcall btnCodificareClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        BMP *fisierBMP;
        __fastcall TfPrincipal(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfPrincipal *fPrincipal;
//---------------------------------------------------------------------------
#endif
 