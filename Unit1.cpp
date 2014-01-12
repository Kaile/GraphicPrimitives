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
void __fastcall TForm1::FormCreate(TObject *Sender)
{
    Label2->Hide();
    Label4->Hide();
    EditX2->Hide();
    EditY2->Hide();
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
    Form2->Refresh();
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
void __fastcall TForm1::EditX1Click(TObject *Sender)
{
	this->EditX1->SelectAll();
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

void __fastcall TForm1::ButtonPaintClick(TObject *Sender)
{
    switch (ComboBoxSelectPrimitive->ItemIndex)
    {
      case 0: showElement(new GPoint(Form2));
      break;
      case 1: showElement(new GLine(Form2));
      break;
      case 2: showElement(new GRectangle(Form2));
      break;
      case 3: showElement(new GEllipse(Form2));
      break;
      case 4: ;
    }


}
//---------------------------------------------------------------------------
void __fastcall TForm1::ComboBoxSelectPrimitiveChange(TObject *Sender)
{
    if (ComboBoxSelectPrimitive->ItemIndex == 0)
    {
        Label2->Hide();
        Label4->Hide();
        EditX2->Hide();
        EditY2->Hide();
    }
    else
    {
        Label2->Show();
        Label4->Show();
        EditX2->Show();
        EditY2->Show();
    }
}
//---------------------------------------------------------------------------

