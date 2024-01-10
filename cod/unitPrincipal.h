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
#include <ExtDlgs.hpp>
#include "BMP.h"
//---------------------------------------------------------------------------
class TfPrincipal : public TForm
{
__published:	// IDE-managed Components
        TButton *btnGenImagine;
        TButton *btnGenText;
        TButton *btnSablon;
        TCheckBox *checkBoxMode;
        TImage *imgInput;
        TImage *imgOutput;
        TOpenPictureDialog *openPicDialogText;
        TOpenPictureDialog *openPicDialog;
        TMemo *editInput;
        TButton *btnExit;
        void __fastcall btnGenImagineClick(TObject *Sender);
        void __fastcall btnGenTextClick(TObject *Sender);
        void __fastcall btnSablonClick(TObject *Sender);
        void __fastcall btnExitClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        BMP bmpFile;
        __fastcall TfPrincipal(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfPrincipal *fPrincipal;
//---------------------------------------------------------------------------
#endif
 