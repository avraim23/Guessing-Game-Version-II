//---------------------------------------------------------------------------

#include <fmx.h>
#ifdef _WIN32
#include <tchar.h>
#endif
#pragma hdrstop
#include <System.StartUpCopy.hpp>
//---------------------------------------------------------------------------
USEFORM("MainForm.cpp", MyMainForm);
USEFORM("VsComputerForm.cpp", MyVsComputerForm);
USEFORM("TwoPlayersForm.cpp", MyTwoPlayersForm);
//---------------------------------------------------------------------------
extern "C" int FMXmain()
{
	try
	{
		Application->Initialize();
		Application->CreateForm(__classid(TMyMainForm), &MyMainForm);
		Application->CreateForm(__classid(TMyVsComputerForm), &MyVsComputerForm);
		Application->CreateForm(__classid(TMyTwoPlayersForm), &MyTwoPlayersForm);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
