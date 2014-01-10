//---------------------------------------------------------------------------

#pragma hdrstop

#include "GEllipse.h"

GEllipse::GEllipse(TForm* f) : GPrimitive(f)
{
}

GEllipse::~GEllipse()
{
}

void GEllipse::paint()
{
    form->Canvas->Ellipse(position[0], position[1], position[2], position[3]);
}

//---------------------------------------------------------------------------
#pragma package(smart_init)
