//---------------------------------------------------------------------------

#ifndef ImagoH
#define ImagoH
#include<string>
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
     Pixel *pixels;
     int numPixels;
     Imago(string text=" ");
     ~Imago();
};
//---------------------------------------------------------------------------
#endif
