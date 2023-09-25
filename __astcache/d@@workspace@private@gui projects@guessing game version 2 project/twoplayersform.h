//---------------------------------------------------------------------------

#ifndef TwoPlayersFormH
#define TwoPlayersFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FMX.Edit.hpp>
//---------------------------------------------------------------------------
class TMyTwoPlayersForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *InstructionLabel;
	TEdit *NumbersEdit;
	TButton *ConfirmButton;
	TLabel *WrongAttempsLabel;
	TLabel *NumofWrongAttempsLabel;
	TLabel *MessageLabel;
	void __fastcall ConfirmButtonClick(TObject *Sender);


private:	// User declarations
public:		// User declarations
	__fastcall TMyTwoPlayersForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMyTwoPlayersForm *MyTwoPlayersForm;
//---------------------------------------------------------------------------
#endif
