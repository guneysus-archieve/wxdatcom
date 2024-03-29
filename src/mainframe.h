#ifndef __mainframe__
#define __mainframe__

/**
@file
Subclass of GUI_MainFrame, which is generated by wxFormBuilder.
*/

#include "gui.h"

//// end generated include

/** Implementing GUI_MainFrame */
class MainFrame : public GUI_MainFrame
{
protected:
    // Handlers for GUI_MainFrame events.
    void OnClose( wxCloseEvent& event );
    void OnQuit( wxCommandEvent& event );
    void OnAbout( wxCommandEvent& event );
    void OnImport( wxCommandEvent& event );
    void OnGenerateDat( wxCommandEvent& event );
    void OnCompare( wxCommandEvent& event );
    void OnPlotAircraft( wxCommandEvent& event );
    void OnRunDatcom( wxCommandEvent& event );
    void OnPlotResults( wxCommandEvent& event );
    void OnPlotData( wxCommandEvent& event );

    void OnSave( wxCommandEvent& event );
    void OnClear( wxCommandEvent& event );
    void W_OnRadioButtons( wxCommandEvent& event );
    void append_text( wxString tmp1, wxString tmp2,wxString tmp3 );

public:
    /** Constructor */
    MainFrame( wxWindow* parent );

    //// end generated class members

};

#endif // __mainframe__
