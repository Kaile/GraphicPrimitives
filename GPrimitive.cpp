//---------------------------------------------------------------------------


#pragma hdrstop

#include "GPrimitive.h"
//---------------------------------------------------------------------------

#pragma package(smart_init)

GPrimitive::GPrimitive(TForm* f)
{
    form = f;
    position[0] = 0;
    position[1] = 0;
    position[2] = 0;
    position[3] = 0;
    position[4] = 0;
    form->Canvas->Pen->Color = color = (TColor)RGB(255, 0, 0);
    style = psSolid;
    form->Canvas->Pen->Width = 1;
    strName = "Graphic Primitive";
}

GPrimitive::~GPrimitive()
{
}

bool GPrimitive::setPosition(int x, ...)
{
    int *p = &x;
    if (*p <= 0 || *(p + 1) <= 0)
        return false;
    int count = 0;
    while (*p && count < 4)
    {
        position[count++] = *p++;
    }
    return true;
}

void GPrimitive::setColor(TColor clr)
{
    color = clr;
}

TColor GPrimitive::getColor()
{
    return color;
}

bool GPrimitive::move(int x_shift, int y_shift)
{
    if ((position[0] + x_shift < 0) || (position[1] + y_shift < 0))
        return false;
	position[0] = position[0] + x_shift;
	position[1] = position[1] + y_shift;
	position[2] = position[2] + x_shift;
	position[3] = position[3] + y_shift;
	show();
    return true;
}

void GPrimitive::show()
{
    // Сохраняем значения канвы в временные переменные
    TColor tmpColor = form->Canvas->Pen->Color;
    TPenStyle tmpStyle = form->Canvas->Pen->Style;
    int tmpWidth = form->Canvas->Pen->Width;
    
    // Присваиваем канве новые значения для ричования элемента
    form->Canvas->Pen->Color = color;
    form->Canvas->Pen->Style = style;
    form->Canvas->Pen->Width = width;

    // Рисуем элемент
    paint();

    // Возвращаем старые значения канве
    form->Canvas->Pen->Color = tmpColor;
    form->Canvas->Pen->Style = tmpStyle;
    form->Canvas->Pen->Width = tmpWidth;
}

void GPrimitive::setStyle(TPenStyle value)
{
    style = value;
}

TPenStyle GPrimitive::getStyle()
{
    return style;
}

bool GPrimitive::setWidth(int value)
{
    if (value < 1 || value > 11)
        return false;
    width = value;
    return true;
}

int GPrimitive::getWidth()
{
    return width;
}

String GPrimitive::getStringName()
{
    return strName;
}
