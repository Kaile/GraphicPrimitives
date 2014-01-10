//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
    primitive = new vector<GPrimitive*>;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::EditX1Click(TObject *Sender)
{
	this->EditX1->SelectAll();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButtonLineClick(TObject *Sender)
{
    showElement(new GLine(Form2));
    Form2->Refresh();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormDestroy(TObject *Sender)
{
    if (primitive)
    {
        while (!primitive->empty())
        {
            delete primitive->back();
            primitive->pop_back();
        }
        delete primitive;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButtonEllipseClick(TObject *Sender)
{
    showElement(new GEllipse(Form2));
    Form2->Refresh();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButtonPointClick(TObject *Sender)
{
    showElement(new GPoint(Form2));
    Form2->Refresh();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButtonRectangleClick(TObject *Sender)
{
    showElement(new GRectangle(Form2));
    Form2->Refresh();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::showElement(GPrimitive* p)
{
    primitive->push_back(p);
    primitive->back()->setPosition( 
                                    EditX1->Text.ToInt(), 
                                    EditY1->Text.ToInt(), 
                                    EditX2->Text.ToInt(), 
                                    EditY2->Text.ToInt()
                                  );
    primitive->back()->setColor(ColorBoxElement->Selected);
    primitive->back()->setWidth(EditWidth->Text.ToInt());
    primitive->back()->setStyle((LineStyle->ItemIndex == 0) ? psSolid : (LineStyle->ItemIndex == 1) ? psDash : psDot);
    Refresh();
}

//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
    Close();    
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button1Click(TObject *Sender)
{
    if (primitive) 
    {
        while (!primitive->empty())
        {
            delete primitive->back();
            primitive->pop_back();
        }
    }
    Form2->Refresh();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::EditX2Click(TObject *Sender)
{
    this->EditX2->SelectAll();  
}
//---------------------------------------------------------------------------

void __fastcall TForm1::EditY1Click(TObject *Sender)
{
    this->EditY1->SelectAll();    
}
//---------------------------------------------------------------------------

void __fastcall TForm1::EditY2Click(TObject *Sender)
{
    this->EditY2->SelectAll();    
}
//---------------------------------------------------------------------------

