//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "TwoPlayersForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TMyTwoPlayersForm *MyTwoPlayersForm;
//---------------------------------------------------------------------------
bool isEnteredNumber = false ;
int guessingNumber ;
int AttempsNumbers = 0 ;
__fastcall TMyTwoPlayersForm::TMyTwoPlayersForm(TComponent* Owner)
	: TForm(Owner)
{
	InstructionLabel->Text = "Player One : Enter Your Number " ;
	WrongAttempsLabel->Text = "" ;
	NumofWrongAttempsLabel->Text = "" ;
}
//---------------------------------------------------------------------------
void __fastcall TMyTwoPlayersForm::ConfirmButtonClick(TObject *Sender)
{
	if(!isEnteredNumber)
	{
		guessingNumber = NumbersEdit->Text.ToInt() ;
		isEnteredNumber = true ;
		InstructionLabel->Text = "Player Two : Now Guess The Number " ;
		WrongAttempsLabel->Text = "Wrong Attemps" ;
		NumbersEdit->Text= "" ;
	}
	else
	{
	   int guessedNumber = NumbersEdit->Text.ToInt() ;
	   if (guessedNumber == guessingNumber)
	   {
		   MessageLabel->Text = "YOU WON ! CONGRATULATIONS !" ;
		   ConfirmButton->Enabled = false ;
	   }
	   else if (guessedNumber > guessingNumber)
	{
		MessageLabel->Text = "Too Big Number" ;
		AttempsNumbers++;
		NumofWrongAttempsLabel->Text = AttempsNumbers ;
	}
	else
	{
		MessageLabel->Text = "Too Small Number" ;
		AttempsNumbers++;
		NumofWrongAttempsLabel->Text = AttempsNumbers ;
	}
	}
}
//---------------------------------------------------------------------------


