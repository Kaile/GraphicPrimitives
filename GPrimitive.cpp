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
}

GPrimitive::~GPrimitive()
{
}

void GPrimitive::setPosition(int x, ...)
{
    int *p = &x;
    int count = 0;
    while (*p && count < 5)
    {
        position[count++] = *p++;
    }
}

void GPrimitive::setColor(TColor clr)
{
    color = clr;
}

TColor GPrimitive::getColor()
{
    return color;
}

void GPrimitive::move(int x_shift, int y_shift)
{
	position[0] = position[0] + x_shift;
	position[1] = position[1] + y_shift;
	position[2] = position[2] + x_shift;
	position[3] = position[3] + y_shift;
	show();
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

void GPrimitive::setWidth(int value)
{
    width = value;
}

int GPrimitive::getWidth()
{
    return width;
}

