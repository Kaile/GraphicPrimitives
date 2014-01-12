//---------------------------------------------------------------------------

#pragma hdrstop

#include "GRectangle.h"

GRectangle::GRectangle(TForm* f) : GPrimitive(f)
{
    strName = "Rectangle";
}

GRectangle::~GRectangle()
{
}

void GRectangle::paint()
{
	form->Canvas->Rectangle(position[0], position[1], position[2], position[3]);
}

//---------------------------------------------------------------------------
#pragma package(smart_init)
