//---------------------------------------------------------------------------

#ifndef ImagoH
#define ImagoH
#include <vcl.h>
using namespace std;
typedef unsigned char byte;
class Imago{
     protected:
     AnsiString text;
     byte bmpHeader[14];
     byte dibHeader[40];
     int imageWidth;
     int imageHeight;
     int numPixels;
     Imago();
     ~Imago();
};
//---------------------------------------------------------------------------
#endif
