/*
*
*/
//---------------------------------------------------------------------------

#ifndef GEllipseH
#define GEllipseH

#include "GPrimitive.h"

class GEllipse : public GPrimitive
{
	public:
		GEllipse(TForm* f);
		~GEllipse();
		virtual void paint();
};

//---------------------------------------------------------------------------
#endif