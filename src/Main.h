/****************************************************************
 * Name:      Main.h
 * Purpose:   Defines Application Frame
 * Author:    Ahmed Seref (info@teknikprogramlama.net)
 * Created:   2012-10-30
 * Copyright: Ahmed Seref (www.teknikprogramlama.com/en)
 * License:
 **************************************************************/

#ifndef MAIN_H
#define MAIN_H



#include "App.h"


#include "GUIFrame.h"

//helper functions



class MainFrame: public GUIFrame
{
public:
    MainFrame(wxFrame *frame);
    ~MainFrame();
private:

    // virtual void OnInitial( wxActivateEvent& event );
};

#endif // WXEMMAIN_H
