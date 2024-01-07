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
     byte bmpHeader[14];
     byte dibHeader[40];
     int imageWidth;
     int imageHeight;
     Pixel *pixels;
     int numPixels;
     Imago();
     ~Imago();
};
//---------------------------------------------------------------------------
#endif
