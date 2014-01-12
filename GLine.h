/*
* Класс GLine, наследуется от класса GPrimitive и реализует
* метод paint для рисования линии.
*/
//---------------------------------------------------------------------------

#ifndef GLineH
#define GLineH

#include <vcl.h>
#include "GPrimitive.h"

class GLine : public GPrimitive
{
    public:
		// Конструктор
        GLine(TForm* f);
		// Деструктор
        ~GLine();
		// Реализуемый метод рисования родительского класса
        virtual void paint();
};

//---------------------------------------------------------------------------
#endif
