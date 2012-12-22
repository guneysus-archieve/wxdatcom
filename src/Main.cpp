#include "wx/wxprec.h"
#include <wx/app.h>
#include "mainframe.h"


class MyApp : public wxApp
{
	public:
		bool OnInit();
};

IMPLEMENT_APP (MyApp)

bool MyApp::OnInit()
{
	MainFrame *frame = new MainFrame(NULL);
    frame->SetIcon(wxICON(datcom)); // To Set App Icon
    frame->Show();
	return true;
}
