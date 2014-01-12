/*
* Класс GEllipse, наследуется от класса GPrimitive и реализует
* метод paint для рисования эллипса.
*/
//---------------------------------------------------------------------------

#ifndef GEllipseH
#define GEllipseH

#include "GPrimitive.h"

class GEllipse : public GPrimitive
{
	public:
		// Конструктор
		GEllipse(TForm* f);
		// Деструктор
		~GEllipse();
		// Реализуемый метод рисования родительского класса
		virtual void paint();
};

//---------------------------------------------------------------------------
#endif