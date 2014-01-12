//---------------------------------------------------------------------------


#pragma hdrstop

#include "GPoint.h"

GPoint::GPoint(TForm* f) : GPrimitive(f)
{
    strName = "Point";
}

GPoint::~GPoint()
{
}

void GPoint::paint()
{
    TRect rect;
    rect.Left = position[0];
    rect.Top = position[1];
	rect.Right = position[0] + 2;
	rect.Bottom = position[1] - 2;
	TColor tmp_color = form->Canvas->Brush->Color;
	form->Canvas->Brush->Color = color;
	form->Canvas->FillRect(rect);
	form->Canvas->Brush->Color = tmp_color;
}

//---------------------------------------------------------------------------

#pragma package(smart_init)
