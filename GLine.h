//---------------------------------------------------------------------------

#ifndef GLineH
#define GLineH

#include <vcl.h>
#include "GPrimitive.h"

class GLine : public GPrimitive
{
    public:
        GLine(TForm* f);
        ~GLine();
        virtual void paint();
};

//---------------------------------------------------------------------------
#endif
