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
    updateCheckListPrimitiveElements();
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
    updateCheckListPrimitiveElements();
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
void __fastcall TForm1::updateCheckListPrimitiveElements()
{
    CheckListPrimitiveElements->Items->Clear();
    for (vector<GPrimitive*>::iterator i = primitive->begin(); i != primitive->end(); ++i)
    {
        CheckListPrimitiveElements->Items->Add(  
                                            IntToStr(CheckListPrimitiveElements->Items->Count) + 
                                            " " + 
                                            (*i)->getStringName()
                                          );
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ButtonDeleteClick(TObject *Sender)
{
    for (int i = CheckListPrimitiveElements->Items->Count - 1; i >= 0 ; --i)
    {
        if (CheckListPrimitiveElements->Checked[i])
        {
            deletePrimitiveElement(i);
        }
    }
    updateCheckListPrimitiveElements();
    Form2->Refresh();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::deletePrimitiveElement(int i)
{
    delete primitive->at(i);
    primitive->erase(primitive->begin() + i);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ButtonMoveClick(TObject *Sender)
{
    for (int i = CheckListPrimitiveElements->Items->Count - 1; i >= 0 ; --i)
    {
        if (CheckListPrimitiveElements->Checked[i])
        {
            movePrimitiveElement(i);
        }
    }
    Form2->Refresh(); 
}
//---------------------------------------------------------------------------
void __fastcall TForm1::movePrimitiveElement(int i)
{
    primitive->at(i)->move(
                            LabeledEditMoveX->Text.ToInt(),
                            LabeledEditMoveY->Text.ToInt()
                          );
}
//---------------------------------------------------------------------------
void __fastcall TForm1::LabeledEditMoveYClick(TObject *Sender)
{
    LabeledEditMoveX->SelectAll();    
}
//---------------------------------------------------------------------------

void __fastcall TForm1::LabeledEditMoveXClick(TObject *Sender)
{
    LabeledEditMoveY->SelectAll();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButtonTestingClick(TObject *Sender)
{
    MemoTestMsg->Clear();
    Button1->Click();
    Label5->Show();
    MemoTestMsg->Show();
    Form1->Height = 500;
    MemoTestMsg->Lines->Add("Тестирование методов класса GPrimitive:");
    MemoTestMsg->Lines->Add("---------------------------------------");
    
    int test_count   = 0;
    int test_success = 0;
    int test_fault   = 0;
    String test_real = "";
    
    MemoTestMsg->Lines->Add("Создаем объект класса GLine");
    showElement(new GLine(Form2));

    // Тестирование метода setPosition
    bool tmp_bool = primitive->at(0)->setPosition(100, 100, 200, 200);
    test_real = (tmp_bool) ? "true" : "false";
    testMethod("setPosition(100, 100, 200, 200)", "true", test_real, test_count, test_success, test_fault);

    tmp_bool = primitive->at(0)->setPosition(-100, -100, 200, 200);
    test_real = (tmp_bool) ? "true" : "false";
    testMethod("setPosition(-100, -100, 200, 200)", "false", test_real, test_count, test_success, test_fault);

    // Тестирование метода move
    tmp_bool = primitive->at(0)->move(10, 10);
    test_real = (tmp_bool) ? "true" : "false";
    testMethod("move(10, 10)", "true", test_real, test_count, test_success, test_fault);

    tmp_bool = primitive->at(0)->move(-10000, 10);
    test_real = (tmp_bool) ? "true" : "false";
    testMethod("move(-10000, 10)", "false", test_real, test_count, test_success, test_fault);

    // Тестирование метода setWidth
    tmp_bool = primitive->at(0)->setWidth(7);
    test_real = (tmp_bool) ? "true" : "false";
    testMethod("setWidth(7)", "true", test_real, test_count, test_success, test_fault);

    tmp_bool = primitive->at(0)->setWidth(-1);
    test_real = (tmp_bool) ? "true" : "false";
    testMethod("setWidth(-1)", "false", test_real, test_count, test_success, test_fault);

    // Тестирование метода setColor
    primitive->at(0)->setColor(clRed);
    TColor tmp_color = primitive->at(0)->getColor();
    test_real = (tmp_color == clRed) ? "clRed" : "error";
    testMethod("setColor(clRed)", "clRed", test_real, test_count, test_success, test_fault);

    // Тустирование метода setStyle
    primitive->at(0)->setStyle(psDash);
    TPenStyle tmp_style = primitive->at(0)->getStyle();
    test_real = (tmp_style == psDash) ? "psDash" : "error";
    testMethod("setStyle(psDash)", "psDash", test_real, test_count, test_success, test_fault);

    // Подведение итогов
    MemoTestMsg->Lines->Add("---------------------------------------");
    MemoTestMsg->Lines->Add("ИТОГИ ТЕСТИРОВАНИЯ:");
    MemoTestMsg->Lines->Add("   Количество выполненных тестов: " + IntToStr(test_count));
    MemoTestMsg->Lines->Add("   Количество успешных тестов   : " + IntToStr(test_success));
    MemoTestMsg->Lines->Add("   Количество неверных тестов   : " + IntToStr(test_fault));
}
//---------------------------------------------------------------------------
void __fastcall TForm1::testMethod(String m_name, String res_exp, String res_real, int &t_c, int &t_s, int &t_f)
{
    MemoTestMsg->Lines->Add("   Тестирование метода " + m_name);
    MemoTestMsg->Lines->Add("       Ожидаемый результат = " + res_exp);
    MemoTestMsg->Lines->Add("       Результат тестирования = " + res_real);
    ++t_c;
    (res_exp == res_real) ? ++t_s : ++t_f;
    Form2->Refresh();
}

