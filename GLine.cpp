//---------------------------------------------------------------------------


#pragma hdrstop

#include "GLine.h"

GLine::GLine(TForm* f) : GPrimitive(f)
{
    strName = "Line";
}

GLine::~GLine()
{
}

void GLine::paint()
{
	form->Canvas->MoveTo(position[0], position[1]);
	form->Canvas->LineTo(position[2], position[3]);
}

//---------------------------------------------------------------------------

#pragma package(smart_init)
