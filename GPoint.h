//---------------------------------------------------------------------------

#ifndef GPointH
#define GPointH

#include "GPrimitive.h"

class GPoint : public GPrimitive
{
    public:
        GPoint(TForm* f);
        ~GPoint();
        void paint();
};

//---------------------------------------------------------------------------
#endif
