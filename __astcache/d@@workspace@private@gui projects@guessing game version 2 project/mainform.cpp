//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "MainForm.h"
#include "VsComputerForm.h"
#include "TwoPlayersForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TMyMainForm *MyMainForm;
//---------------------------------------------------------------------------
__fastcall TMyMainForm::TMyMainForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

void __fastcall TMyMainForm::VsComputerButtonClick(TObject *Sender)
{
	MyVsComputerForm->Show();
}
//---------------------------------------------------------------------------

void __fastcall TMyMainForm::TwoPlayersButtonClick(TObject *Sender)
{
	MyTwoPlayersForm->Show();
}
//---------------------------------------------------------------------------

