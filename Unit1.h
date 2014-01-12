//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
#include <Classes.hpp>
#include <ComCtrls.hpp>
#include <Controls.hpp>
#include <ExtCtrls.hpp>
#include <StdCtrls.hpp>
//---------------------------------------------------------------------------
#include "GPoint.h"
#include "GLine.h"
#include "GRectangle.h"
#include "GEllipse.h"
#include <vector.h>
#include "Unit2.h"
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TEdit *EditY1;
	TEdit *EditX2;
	TEdit *EditY2;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
    TColorBox *ColorBoxElement;
	TLabel *Label6;
    TMemo *MemoStatMsg;
    TLabel *Label5;
    TEdit *EditWidth;
    TLabel *Label7;
    TUpDown *UpDown1;
    TButton *Button1;
    TButton *Button2;
    TComboBox *LineStyle;
    TLabel *Label8;
    TEdit *EditX1;
    TButton *ButtonPaint;
    TComboBox *ComboBoxSelectPrimitive;
    TListBox *ListPrimitiveElements;
    TLabel *Label9;
	void __fastcall EditX1Click(TObject *Sender);
    void __fastcall FormDestroy(TObject *Sender);
    void __fastcall Button2Click(TObject *Sender);
    void __fastcall Button1Click(TObject *Sender);
    void __fastcall EditX2Click(TObject *Sender);
    void __fastcall EditY1Click(TObject *Sender);
    void __fastcall EditY2Click(TObject *Sender);
    void __fastcall ButtonPaintClick(TObject *Sender);
    void __fastcall ComboBoxSelectPrimitiveChange(TObject *Sender);
    void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
	vector<GPrimitive*>* primitive;
private:
    void __fastcall showElement(GPrimitive* p);
    void __fastcall updateListPrimitivesElements();
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);

    friend class TForm2;
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
