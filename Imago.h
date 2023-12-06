//---------------------------------------------------------------------------

#ifndef ImagoH
#define ImagoH
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
     Imago(int size=0);
     ~Imago();
};
//---------------------------------------------------------------------------
#endif
