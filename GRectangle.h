/*
* Класс GRectangle, наследуется от класса GPrimitive и реализует
* метод paint для рисования прямоугольника.
*/
//---------------------------------------------------------------------------

#ifndef GRectangleH
#define GRectangleH

#include "GPrimitive.h"
class GRectangle : public GPrimitive
{
	public:
		// Конструктор
		GRectangle(TForm* f);
		// Деструктор
		~GRectangle();
		// Реализуемый метод рисования родительского класса
		virtual void paint();
};

//---------------------------------------------------------------------------
#endif
