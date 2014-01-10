//---------------------------------------------------------------------------

#ifndef GPrimitiveH
#define GPrimitiveH

#include <vcl.h>

class GPrimitive
{
protected:
    int position[5];
    TColor color;
    TForm* form;
    TPenStyle style;
    int width;
public:
    GPrimitive(TForm* f);
    ~GPrimitive();
	void setPosition(int x, ...);
    void setColor(TColor clr);
    TColor getColor();
    void move(int x_shift, int y_shift);
    void show();
    void setStyle(TPenStyle value);
    TPenStyle getStyle();
    void setWidth(int width);
    int getWidth();
protected:
    virtual void paint() = 0;
};

//---------------------------------------------------------------------------
#endif
