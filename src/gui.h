///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct  8 2012)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __GUI_H__
#define __GUI_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/sizer.h>
#include <wx/checkbox.h>
#include <wx/radiobox.h>
#include <wx/statbox.h>
#include <wx/panel.h>
#include <wx/button.h>
#include <wx/notebook.h>
#include <wx/statusbr.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////

#define ID_MAIN 1000
#define ID_NEW_PROJECT 1001
#define ID_SAVE_AS 1002
#define idMenuQuit 1003
#define ID_IMPORT_DATCOM_DATA 1004
#define ID_GENERATE_DATCOM_OUTPUT 1005
#define ID_RUN_DATCOM 1006
#define ID_VISUALIZE_AIRCRAFT 1007
#define ID_PLOT_RESULTS 1008
#define ID_SELECT_DATA_FOR_PLOT 1009
#define idMenuAbout 1010
#define ID_NT_WXDATCOM 1011
#define ID_NT_PROJECT 1012
#define ID_M_CASEID 1013
#define ID_SBSIZER_COMMON_OPTS 1014
#define ID_M_RADIO_UNIT 1015
#define ID_NT_SYNTHS 1016
#define ID_NT_GEOMETRY 1017
#define ID_PANEL_BODY 1018
#define ID_PANEL_WING 1019
#define ID_PANEL_HTAIL 1020
#define ID_PANEL_VTAIL 1021
#define ID_PANEL_LOG 1022
#define ID_M_LOG 1023

///////////////////////////////////////////////////////////////////////////////
/// Class GUI_MainFrame
///////////////////////////////////////////////////////////////////////////////
class GUI_MainFrame : public wxFrame 
{
	private:
	
	protected:
		wxMenuBar* mbar;
		wxMenu* fileMenu;
		wxMenu* tools;
		wxMenu* visualize;
		wxMenu* helpMenu;
		wxPanel* main_pane;
		wxNotebook* nt_wxDatcom;
		wxPanel* project_pane;
		wxStaticText* m_staticText23;
		wxStaticText* m_staticText13;
		wxStaticText* m_staticText130;
		wxTextCtrl* _sref;
		wxStaticText* m_staticText131;
		wxTextCtrl* _cbarr;
		wxStaticText* m_staticText133;
		wxTextCtrl* _blref;
		wxStaticText* m_staticText138;
		wxTextCtrl* _rougfc;
		wxPanel* flight_conditions_pane;
		wxStaticText* m_staticText41;
		wxStaticText* m_staticText48;
		wxTextCtrl* _mach;
		wxStaticText* m_staticText42;
		wxStaticText* m_staticText43;
		wxStaticText* m_staticText44;
		wxStaticText* m_staticText45;
		wxStaticText* m_staticText115;
		wxTextCtrl* _rnnub;
		wxStaticText* m_staticText47;
		wxPanel* synths_pane;
		wxStaticText* m_staticText17;
		wxStaticText* m_staticText20;
		wxStaticText* m_staticText21;
		wxStaticText* m_staticText22;
		wxStaticText* m_staticText231;
		wxStaticText* m_staticText241;
		wxStaticText* m_staticText25;
		wxStaticText* m_staticText26;
		wxStaticText* m_staticText27;
		wxStaticText* m_staticText50;
		wxStaticText* m_staticText116;
		wxTextCtrl* _scale;
		wxPanel* geometry_pane;
		wxNotebook* nt_geometry;
		wxPanel* panel_body;
		wxStaticText* m_staticText30;
		wxStaticText* m_staticText32;
		wxStaticText* m_staticText140;
		wxTextCtrl* _r;
		wxStaticText* m_staticText33;
		wxStaticText* m_staticText141;
		wxTextCtrl* _p;
		wxStaticText* m_staticText102;
		wxTextCtrl* _bnose;
		wxStaticText* m_staticText103;
		wxTextCtrl* _bln;
		wxStaticText* m_staticText104;
		wxTextCtrl* _bla;
		wxStaticText* m_staticText134;
		wxTextCtrl* _zu;
		wxStaticText* m_staticText135;
		wxTextCtrl* _zl;
		wxStaticText* m_staticText136;
		wxTextCtrl* _ds;
		wxStaticText* m_staticText139;
		wxTextCtrl* _method;
		wxPanel* panel_wing;
		wxStaticText* l_w_type;
		wxStaticText* l_w_chrdr;
		wxStaticText* l_w_chrdbp;
		wxStaticText* l_w_chrdtp;
		wxStaticText* l_w_sspnop;
		wxStaticText* l_w_sspn;
		wxStaticText* l_w_sspne;
		wxStaticText* l_w_savsi;
		wxStaticText* l_w_savso;
		wxStaticText* l_w_chstat;
		wxStaticText* l_w_sspndd;
		wxTextCtrl* w_sspndd;
		wxStaticText* l_w_twista;
		wxStaticText* l_w_dhdadi;
		wxStaticText* l_w_dhdado;
		wxTextCtrl* w_dhdado;
		wxStaticText* m_staticText431;
		wxPanel* panel_htail;
		wxStaticText* L_H_TYPE;
		wxTextCtrl* h_type;
		wxStaticText* L_H_CHRDR;
		wxTextCtrl* h_chrdr;
		wxStaticText* L_H_CHRDBP;
		wxTextCtrl* h_chrdbp;
		wxStaticText* L_H_CHRDTP;
		wxTextCtrl* h_chrdtp;
		wxStaticText* L_H_SSPNOP;
		wxTextCtrl* h_sspnop;
		wxStaticText* L_H_SSPN;
		wxTextCtrl* h_sspn;
		wxStaticText* L_H_SSPNE;
		wxTextCtrl* h_sspne;
		wxStaticText* L_H_SAVSI;
		wxTextCtrl* h_savsi;
		wxStaticText* L_H_CHSTAT;
		wxTextCtrl* h_chstat;
		wxStaticText* L_H_SSPNDD;
		wxTextCtrl* h_sspndd;
		wxStaticText* L_H_TWISTA;
		wxTextCtrl* h_twista;
		wxStaticText* L_H_DHDADI;
		wxTextCtrl* h_dhdadi;
		wxStaticText* L_H_SHB;
		wxTextCtrl* h_shb;
		wxStaticText* L_H_SEXT;
		wxTextCtrl* h_sext;
		wxStaticText* L_H_RLPH;
		wxTextCtrl* h_rlph;
		wxStaticText* m_staticText432;
		wxPanel* panel_vtail;
		wxStaticText* L_V_TYPE;
		wxTextCtrl* v_type;
		wxStaticText* L_V_CHRDR;
		wxTextCtrl* v_chrdr;
		wxStaticText* L_V_CHRDBP;
		wxTextCtrl* v_chrdbp;
		wxStaticText* L_V_CHRDTP;
		wxTextCtrl* v_chrdtp;
		wxStaticText* L_V_SSPNOP;
		wxTextCtrl* v_sspnop;
		wxStaticText* V_SSPN;
		wxTextCtrl* v_sspn;
		wxStaticText* L_V_SSPNE;
		wxTextCtrl* v_sspne;
		wxStaticText* L_V_SAVSI;
		wxTextCtrl* v_savsi;
		wxStaticText* L_V_SAVSO;
		wxTextCtrl* v_savso;
		wxStaticText* V_CHSTAT;
		wxTextCtrl* v_chstat;
		wxStaticText* L_V_SVWB;
		wxTextCtrl* v_svwb;
		wxStaticText* L_V_SVB;
		wxTextCtrl* v_svb;
		wxStaticText* L_V_SVHB;
		wxTextCtrl* v_svhb;
		wxStaticText* m_staticText433;
		wxPanel* flaps_pane;
		wxPanel* elevator_pane;
		wxPanel* panel_jet;
		wxPanel* panel_log;
		wxStatusBar* statusBar;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnClose( wxCloseEvent& event ) { event.Skip(); }
		virtual void OnClear( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSave( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnQuit( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnImport( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnGenerateDat( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnRunDatcom( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnPlotAircraft( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnPlotResults( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnPlotData( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnAbout( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		wxTextCtrl* _caseid;
		wxTextCtrl* _wt;
		wxCheckBox* _build;
		wxCheckBox* _plot;
		wxCheckBox* _dump;
		wxRadioBox* _derivs;
		wxRadioBox* _working_units;
		wxTextCtrl* _nmach;
		wxTextCtrl* _nalpha;
		wxTextCtrl* _alschd;
		wxTextCtrl* _nalt;
		wxTextCtrl* _alt;
		wxTextCtrl* _loop;
		wxTextCtrl* _xcg;
		wxTextCtrl* _zcg;
		wxTextCtrl* _xw;
		wxTextCtrl* _zw;
		wxTextCtrl* _aliw;
		wxTextCtrl* _xh;
		wxTextCtrl* _zh;
		wxTextCtrl* _alih;
		wxTextCtrl* _xv;
		wxTextCtrl* _zv;
		wxTextCtrl* _nx;
		wxTextCtrl* _x;
		wxTextCtrl* _s;
		wxTextCtrl* w_type;
		wxTextCtrl* w_chrdr;
		wxTextCtrl* w_chrdbp;
		wxTextCtrl* w_chrdtp;
		wxTextCtrl* w_sspnop;
		wxTextCtrl* w_sspn;
		wxTextCtrl* w_sspne;
		wxTextCtrl* w_savsi;
		wxTextCtrl* w_savso;
		wxTextCtrl* w_chstat;
		wxTextCtrl* w_twista;
		wxTextCtrl* w_dhdadi;
		wxTextCtrl* w_airfoil_name;
		wxRadioBox* w_naca_series;
		wxButton* w_cmd_import_airfoil;
		wxTextCtrl* h_airfoil_name;
		wxRadioBox* h_naca_series;
		wxButton* h_cmd_import_airfoil;
		wxTextCtrl* v_airfoil_name;
		wxRadioBox* v_naca_series;
		wxButton* v_cmd_import_airfoil;
		wxTextCtrl* m_log_txt;
		
		GUI_MainFrame( wxWindow* parent, wxWindowID id = ID_MAIN, const wxString& title = _("Ahmed Şeref GÜNEYSU | DATCOM için kolay kullanım arayüzü"), const wxPoint& pos = wxPoint( 0,0 ), const wxSize& size = wxSize( 800,700 ), long style = wxCAPTION|wxMAXIMIZE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER|wxSYSTEM_MENU, const wxString& name = wxT("WINDOW NAME") );
		
		~GUI_MainFrame();
	
};

#endif //__GUI_H__
