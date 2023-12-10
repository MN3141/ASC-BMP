//---------------------------------------------------------------------------

#ifndef ImagoH
#define ImagoH
#include <vcl.h>
using namespace std;
typedef unsigned char byte;
struct Pixel{
//cod RGB
   byte r;
   byte g;
   byte b;
};
class Imago{
     protected:
     AnsiString text;
     int imageWidth;
     int imageHeight;
     Pixel *pixels;
     int numPixels;
     Imago(AnsiString text=" ");
     ~Imago();
};
//---------------------------------------------------------------------------
#endif
