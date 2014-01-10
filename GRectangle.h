//---------------------------------------------------------------------------

#ifndef GRectangleH
#define GRectangleH

#include "GPrimitive.h"
class GRectangle : public GPrimitive
{
	public:
		GRectangle(TForm* f);
		~GRectangle();
		virtual void paint();
};

//---------------------------------------------------------------------------
#endif
