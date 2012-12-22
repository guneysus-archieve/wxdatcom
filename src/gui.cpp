///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct  8 2012)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "gui.h"

///////////////////////////////////////////////////////////////////////////

GUI_MainFrame::GUI_MainFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxFrame( parent, id, title, pos, size, style, name )
{
	this->SetSizeHints( wxSize( -1,-1 ), wxDefaultSize );
	this->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), 70, 90, 90, false, wxEmptyString ) );
	
	mbar = new wxMenuBar( 0 );
	fileMenu = new wxMenu();
	wxMenuItem* newProject;
	newProject = new wxMenuItem( fileMenu, ID_NEW_PROJECT, wxString( _("New Project") ) + wxT('\t') + wxT("Ctrl+N"), wxEmptyString, wxITEM_NORMAL );
	#ifdef __WXMSW__
	newProject->SetBitmaps( wxArtProvider::GetBitmap( wxART_NEW, wxART_MENU ) );
	#elif defined( __WXGTK__ )
	newProject->SetBitmap( wxArtProvider::GetBitmap( wxART_NEW, wxART_MENU ) );
	#endif
	fileMenu->Append( newProject );
	
	wxMenuItem* saveAs;
	saveAs = new wxMenuItem( fileMenu, ID_SAVE_AS, wxString( _("Save As") ) + wxT('\t') + wxT("Ctrl+S"), wxEmptyString, wxITEM_NORMAL );
	#ifdef __WXMSW__
	saveAs->SetBitmaps( wxArtProvider::GetBitmap( wxART_FILE_SAVE_AS, wxART_MENU ) );
	#elif defined( __WXGTK__ )
	saveAs->SetBitmap( wxArtProvider::GetBitmap( wxART_FILE_SAVE_AS, wxART_MENU ) );
	#endif
	fileMenu->Append( saveAs );
	
	fileMenu->AppendSeparator();
	
	wxMenuItem* menuFileQuit;
	menuFileQuit = new wxMenuItem( fileMenu, idMenuQuit, wxString( _("&Quit") ) + wxT('\t') + wxT("Ctrl+Q"), _("Quit the application"), wxITEM_NORMAL );
	#ifdef __WXMSW__
	menuFileQuit->SetBitmaps( wxArtProvider::GetBitmap( wxART_QUIT, wxART_MENU ), wxArtProvider::GetBitmap( wxART_QUIT, wxART_MENU ) );
	#elif defined( __WXGTK__ )
	menuFileQuit->SetBitmap( wxArtProvider::GetBitmap( wxART_QUIT, wxART_MENU ) );
	#endif
	fileMenu->Append( menuFileQuit );
	
	mbar->Append( fileMenu, _("&File") ); 
	
	tools = new wxMenu();
	wxMenuItem* importDatcomData;
	importDatcomData = new wxMenuItem( tools, ID_IMPORT_DATCOM_DATA, wxString( _("Import Datcom Data") ) + wxT('\t') + wxT("Ctrl+O"), wxEmptyString, wxITEM_NORMAL );
	#ifdef __WXMSW__
	importDatcomData->SetBitmaps( wxArtProvider::GetBitmap( wxART_FILE_OPEN, wxART_OTHER ), wxNullBitmap );
	#elif defined( __WXGTK__ )
	importDatcomData->SetBitmap( wxArtProvider::GetBitmap( wxART_FILE_OPEN, wxART_OTHER ) );
	#endif
	tools->Append( importDatcomData );
	
	wxMenuItem* generateDatcomOutput;
	generateDatcomOutput = new wxMenuItem( tools, ID_GENERATE_DATCOM_OUTPUT, wxString( _("Generate Datcom Output") ) + wxT('\t') + wxT("Alt+G"), wxEmptyString, wxITEM_NORMAL );
	#ifdef __WXMSW__
	generateDatcomOutput->SetBitmaps( wxArtProvider::GetBitmap( wxART_REPORT_VIEW, wxART_MENU ), wxICON( aircraft ) );
	#elif defined( __WXGTK__ )
	generateDatcomOutput->SetBitmap( wxArtProvider::GetBitmap( wxART_REPORT_VIEW, wxART_MENU ) );
	#endif
	tools->Append( generateDatcomOutput );
	
	wxMenuItem* runDatcom;
	runDatcom = new wxMenuItem( tools, ID_RUN_DATCOM, wxString( _("Run Datcom") ) + wxT('\t') + wxT("F5"), wxEmptyString, wxITEM_NORMAL );
	#ifdef __WXMSW__
	runDatcom->SetBitmaps( wxICON( datcom ) );
	#elif defined( __WXGTK__ )
	runDatcom->SetBitmap( wxICON( datcom ) );
	#endif
	tools->Append( runDatcom );
	
	mbar->Append( tools, _("Tools") ); 
	
	visualize = new wxMenu();
	wxMenuItem* visualizeAircraft;
	visualizeAircraft = new wxMenuItem( visualize, ID_VISUALIZE_AIRCRAFT, wxString( _("Visualize Aircraft") ) + wxT('\t') + wxT("F3"), wxEmptyString, wxITEM_NORMAL );
	#ifdef __WXMSW__
	visualizeAircraft->SetBitmaps( wxArtProvider::GetBitmap( wxART_PRINT, wxART_MENU ) );
	#elif defined( __WXGTK__ )
	visualizeAircraft->SetBitmap( wxArtProvider::GetBitmap( wxART_PRINT, wxART_MENU ) );
	#endif
	visualize->Append( visualizeAircraft );
	
	wxMenuItem* plotResults;
	plotResults = new wxMenuItem( visualize, ID_PLOT_RESULTS, wxString( _("Plot Results") ) + wxT('\t') + wxT("F2"), wxEmptyString, wxITEM_NORMAL );
	#ifdef __WXMSW__
	plotResults->SetBitmaps( wxICON( jiff ) );
	#elif defined( __WXGTK__ )
	plotResults->SetBitmap( wxICON( jiff ) );
	#endif
	visualize->Append( plotResults );
	
	wxMenuItem* selectDataForPlot;
	selectDataForPlot = new wxMenuItem( visualize, ID_SELECT_DATA_FOR_PLOT, wxString( _("Select Data for Plot") ) + wxT('\t') + wxT("Ctrl+I"), wxEmptyString, wxITEM_NORMAL );
	#ifdef __WXMSW__
	selectDataForPlot->SetBitmaps( wxICON( gnu ) );
	#elif defined( __WXGTK__ )
	selectDataForPlot->SetBitmap( wxICON( gnu ) );
	#endif
	visualize->Append( selectDataForPlot );
	
	mbar->Append( visualize, _("Visualize") ); 
	
	helpMenu = new wxMenu();
	wxMenuItem* menuHelpAbout;
	menuHelpAbout = new wxMenuItem( helpMenu, idMenuAbout, wxString( _("&About") ) + wxT('\t') + wxT("F1"), _("Show info about this application"), wxITEM_NORMAL );
	#ifdef __WXMSW__
	menuHelpAbout->SetBitmaps( wxArtProvider::GetBitmap( wxART_HELP, wxART_MENU ) );
	#elif defined( __WXGTK__ )
	menuHelpAbout->SetBitmap( wxArtProvider::GetBitmap( wxART_HELP, wxART_MENU ) );
	#endif
	helpMenu->Append( menuHelpAbout );
	
	mbar->Append( helpMenu, _("&Help") ); 
	
	this->SetMenuBar( mbar );
	
	wxBoxSizer* bsizer_main;
	bsizer_main = new wxBoxSizer( wxVERTICAL );
	
	main_pane = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bsizer_child;
	bsizer_child = new wxBoxSizer( wxVERTICAL );
	
	wxGridSizer* gsizer_notebook;
	gsizer_notebook = new wxGridSizer( 0, 2, 0, 0 );
	
	nt_wxDatcom = new wxNotebook( main_pane, ID_NT_WXDATCOM, wxDefaultPosition, wxDefaultSize, wxNB_BOTTOM );
	project_pane = new wxPanel( nt_wxDatcom, ID_NT_PROJECT, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bsizer_project_pane;
	bsizer_project_pane = new wxBoxSizer( wxVERTICAL );
	
	wxFlexGridSizer* fgsizer_project_pane;
	fgsizer_project_pane = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgsizer_project_pane->AddGrowableCol( 1 );
	fgsizer_project_pane->SetFlexibleDirection( wxBOTH );
	fgsizer_project_pane->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText23 = new wxStaticText( project_pane, wxID_ANY, _("CASE ID"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText23->Wrap( -1 );
	fgsizer_project_pane->Add( m_staticText23, 0, wxALL, 5 );
	
	_caseid = new wxTextCtrl( project_pane, ID_M_CASEID, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	_caseid->SetMaxLength( 0 ); 
	fgsizer_project_pane->Add( _caseid, 1, wxEXPAND|wxALL, 5 );
	
	m_staticText13 = new wxStaticText( project_pane, wxID_ANY, _("WT"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13->Wrap( -1 );
	fgsizer_project_pane->Add( m_staticText13, 0, wxALL, 5 );
	
	_wt = new wxTextCtrl( project_pane, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	_wt->SetMaxLength( 0 ); 
	fgsizer_project_pane->Add( _wt, 0, wxALL|wxEXPAND, 5 );
	
	wxGridSizer* spacer_1;
	spacer_1 = new wxGridSizer( 0, 2, 0, 0 );
	
	
	fgsizer_project_pane->Add( spacer_1, 1, wxEXPAND, 5 );
	
	wxBoxSizer* options_container_sizer;
	options_container_sizer = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer35;
	bSizer35 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* common_opts_bSizer;
	common_opts_bSizer = new wxStaticBoxSizer( new wxStaticBox( project_pane, ID_SBSIZER_COMMON_OPTS, _("Common Controls") ), wxVERTICAL );
	
	_build = new wxCheckBox( project_pane, wxID_ANY, _("Build"), wxDefaultPosition, wxDefaultSize, 0 );
	_build->SetValue(true); 
	_build->Enable( false );
	
	common_opts_bSizer->Add( _build, 0, wxALL, 5 );
	
	_plot = new wxCheckBox( project_pane, wxID_ANY, _("Plot"), wxDefaultPosition, wxDefaultSize, 0 );
	_plot->SetValue(true); 
	_plot->Enable( false );
	
	common_opts_bSizer->Add( _plot, 0, wxALL, 5 );
	
	_dump = new wxCheckBox( project_pane, wxID_ANY, _("Dump Case"), wxDefaultPosition, wxDefaultSize, 0 );
	_dump->SetValue(true); 
	common_opts_bSizer->Add( _dump, 0, wxALL, 5 );
	
	wxString _derivsChoices[] = { _("RAD"), _("DEG") };
	int _derivsNChoices = sizeof( _derivsChoices ) / sizeof( wxString );
	_derivs = new wxRadioBox( project_pane, wxID_ANY, _("Derivatives"), wxDefaultPosition, wxDefaultSize, _derivsNChoices, _derivsChoices, 1, wxRA_SPECIFY_COLS );
	_derivs->SetSelection( 0 );
	common_opts_bSizer->Add( _derivs, 0, wxALL|wxEXPAND, 5 );
	
	
	bSizer35->Add( common_opts_bSizer, 1, wxEXPAND|wxRIGHT|wxLEFT, 5 );
	
	wxGridSizer* units_gsizer;
	units_gsizer = new wxGridSizer( 0, 1, 0, 0 );
	
	wxString _working_unitsChoices[] = { _("FT"), _("IN"), _("M"), _("CM") };
	int _working_unitsNChoices = sizeof( _working_unitsChoices ) / sizeof( wxString );
	_working_units = new wxRadioBox( project_pane, ID_M_RADIO_UNIT, _("Working Unit System"), wxDefaultPosition, wxDefaultSize, _working_unitsNChoices, _working_unitsChoices, 1, wxRA_SPECIFY_COLS );
	_working_units->SetSelection( 0 );
	units_gsizer->Add( _working_units, 1, wxALL|wxEXPAND, 5 );
	
	
	bSizer35->Add( units_gsizer, 1, wxEXPAND, 5 );
	
	
	options_container_sizer->Add( bSizer35, 1, wxEXPAND|wxTOP, 5 );
	
	wxStaticBoxSizer* sbSizer16;
	sbSizer16 = new wxStaticBoxSizer( new wxStaticBox( project_pane, wxID_ANY, _("OTHER OPTIONS") ), wxVERTICAL );
	
	wxFlexGridSizer* fgSizer14;
	fgSizer14 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer14->SetFlexibleDirection( wxBOTH );
	fgSizer14->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText130 = new wxStaticText( project_pane, wxID_ANY, _("SREF"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText130->Wrap( -1 );
	fgSizer14->Add( m_staticText130, 0, wxALL, 5 );
	
	_sref = new wxTextCtrl( project_pane, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer14->Add( _sref, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText131 = new wxStaticText( project_pane, wxID_ANY, _("CBARR"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText131->Wrap( -1 );
	fgSizer14->Add( m_staticText131, 0, wxALL, 5 );
	
	_cbarr = new wxTextCtrl( project_pane, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer14->Add( _cbarr, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText133 = new wxStaticText( project_pane, wxID_ANY, _("BLREF"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText133->Wrap( -1 );
	fgSizer14->Add( m_staticText133, 0, wxALL, 5 );
	
	_blref = new wxTextCtrl( project_pane, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer14->Add( _blref, 0, wxALL, 5 );
	
	m_staticText138 = new wxStaticText( project_pane, wxID_ANY, _("ROUGFC"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText138->Wrap( -1 );
	fgSizer14->Add( m_staticText138, 0, wxALL, 5 );
	
	_rougfc = new wxTextCtrl( project_pane, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer14->Add( _rougfc, 0, wxALL, 5 );
	
	
	sbSizer16->Add( fgSizer14, 1, wxEXPAND, 5 );
	
	
	options_container_sizer->Add( sbSizer16, 1, wxEXPAND, 5 );
	
	
	fgsizer_project_pane->Add( options_container_sizer, 1, wxEXPAND, 5 );
	
	
	bsizer_project_pane->Add( fgsizer_project_pane, 1, wxEXPAND, 5 );
	
	
	project_pane->SetSizer( bsizer_project_pane );
	project_pane->Layout();
	bsizer_project_pane->Fit( project_pane );
	nt_wxDatcom->AddPage( project_pane, _("PROJECT"), false );
	flight_conditions_pane = new wxPanel( nt_wxDatcom, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bsizer_flight;
	bsizer_flight = new wxBoxSizer( wxVERTICAL );
	
	wxFlexGridSizer* fgsizer_flight;
	fgsizer_flight = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgsizer_flight->AddGrowableCol( 1 );
	fgsizer_flight->SetFlexibleDirection( wxBOTH );
	fgsizer_flight->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText41 = new wxStaticText( flight_conditions_pane, wxID_ANY, _("NMACH"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText41->Wrap( -1 );
	fgsizer_flight->Add( m_staticText41, 0, wxALL, 5 );
	
	_nmach = new wxTextCtrl( flight_conditions_pane, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgsizer_flight->Add( _nmach, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText48 = new wxStaticText( flight_conditions_pane, wxID_ANY, _("MACH(1)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText48->Wrap( -1 );
	fgsizer_flight->Add( m_staticText48, 0, wxALL, 5 );
	
	_mach = new wxTextCtrl( flight_conditions_pane, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgsizer_flight->Add( _mach, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText42 = new wxStaticText( flight_conditions_pane, wxID_ANY, _("NALPHA"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText42->Wrap( -1 );
	fgsizer_flight->Add( m_staticText42, 0, wxALL, 5 );
	
	_nalpha = new wxTextCtrl( flight_conditions_pane, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgsizer_flight->Add( _nalpha, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText43 = new wxStaticText( flight_conditions_pane, wxID_ANY, _("ALSCHD(1)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText43->Wrap( -1 );
	fgsizer_flight->Add( m_staticText43, 0, wxALL, 5 );
	
	_alschd = new wxTextCtrl( flight_conditions_pane, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgsizer_flight->Add( _alschd, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText44 = new wxStaticText( flight_conditions_pane, wxID_ANY, _("NALT"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText44->Wrap( -1 );
	fgsizer_flight->Add( m_staticText44, 0, wxALL, 5 );
	
	_nalt = new wxTextCtrl( flight_conditions_pane, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgsizer_flight->Add( _nalt, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText45 = new wxStaticText( flight_conditions_pane, wxID_ANY, _("ALT"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText45->Wrap( -1 );
	fgsizer_flight->Add( m_staticText45, 0, wxALL, 5 );
	
	_alt = new wxTextCtrl( flight_conditions_pane, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgsizer_flight->Add( _alt, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText115 = new wxStaticText( flight_conditions_pane, wxID_ANY, _("RNNUB"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText115->Wrap( -1 );
	fgsizer_flight->Add( m_staticText115, 0, wxALL, 5 );
	
	_rnnub = new wxTextCtrl( flight_conditions_pane, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgsizer_flight->Add( _rnnub, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText47 = new wxStaticText( flight_conditions_pane, wxID_ANY, _("LOOP"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText47->Wrap( -1 );
	fgsizer_flight->Add( m_staticText47, 0, wxALL, 5 );
	
	_loop = new wxTextCtrl( flight_conditions_pane, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgsizer_flight->Add( _loop, 0, wxALL|wxEXPAND, 5 );
	
	
	bsizer_flight->Add( fgsizer_flight, 1, wxEXPAND|wxALL, 5 );
	
	
	flight_conditions_pane->SetSizer( bsizer_flight );
	flight_conditions_pane->Layout();
	bsizer_flight->Fit( flight_conditions_pane );
	nt_wxDatcom->AddPage( flight_conditions_pane, _("FLIGHT CONDITIONS"), false );
	synths_pane = new wxPanel( nt_wxDatcom, ID_NT_SYNTHS, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxStaticBoxSizer* sbsizer_synths;
	sbsizer_synths = new wxStaticBoxSizer( new wxStaticBox( synths_pane, wxID_ANY, _("SYNTHESIS") ), wxVERTICAL );
	
	wxFlexGridSizer* fgsizer_synths;
	fgsizer_synths = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgsizer_synths->AddGrowableCol( 1 );
	fgsizer_synths->SetFlexibleDirection( wxBOTH );
	fgsizer_synths->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText17 = new wxStaticText( synths_pane, wxID_ANY, _("XCG"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText17->Wrap( -1 );
	fgsizer_synths->Add( m_staticText17, 0, wxALL, 5 );
	
	_xcg = new wxTextCtrl( synths_pane, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	_xcg->SetMaxLength( 0 ); 
	fgsizer_synths->Add( _xcg, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText20 = new wxStaticText( synths_pane, wxID_ANY, _("ZCG"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText20->Wrap( -1 );
	fgsizer_synths->Add( m_staticText20, 0, wxALL, 5 );
	
	_zcg = new wxTextCtrl( synths_pane, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	_zcg->SetMaxLength( 0 ); 
	fgsizer_synths->Add( _zcg, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText21 = new wxStaticText( synths_pane, wxID_ANY, _("XW"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText21->Wrap( -1 );
	fgsizer_synths->Add( m_staticText21, 0, wxALL, 5 );
	
	_xw = new wxTextCtrl( synths_pane, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	_xw->SetMaxLength( 0 ); 
	fgsizer_synths->Add( _xw, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText22 = new wxStaticText( synths_pane, wxID_ANY, _("ZW"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText22->Wrap( -1 );
	fgsizer_synths->Add( m_staticText22, 0, wxALL, 5 );
	
	_zw = new wxTextCtrl( synths_pane, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	_zw->SetMaxLength( 0 ); 
	fgsizer_synths->Add( _zw, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText231 = new wxStaticText( synths_pane, wxID_ANY, _("ALIW"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText231->Wrap( -1 );
	fgsizer_synths->Add( m_staticText231, 0, wxALL, 5 );
	
	_aliw = new wxTextCtrl( synths_pane, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	_aliw->SetMaxLength( 0 ); 
	fgsizer_synths->Add( _aliw, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText241 = new wxStaticText( synths_pane, wxID_ANY, _("XH"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText241->Wrap( -1 );
	fgsizer_synths->Add( m_staticText241, 0, wxALL, 5 );
	
	_xh = new wxTextCtrl( synths_pane, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	_xh->SetMaxLength( 0 ); 
	fgsizer_synths->Add( _xh, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText25 = new wxStaticText( synths_pane, wxID_ANY, _("ZH"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText25->Wrap( -1 );
	fgsizer_synths->Add( m_staticText25, 0, wxALL, 5 );
	
	_zh = new wxTextCtrl( synths_pane, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	_zh->SetMaxLength( 0 ); 
	fgsizer_synths->Add( _zh, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText26 = new wxStaticText( synths_pane, wxID_ANY, _("ALIH"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText26->Wrap( -1 );
	fgsizer_synths->Add( m_staticText26, 0, wxALL, 5 );
	
	_alih = new wxTextCtrl( synths_pane, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	_alih->SetMaxLength( 0 ); 
	fgsizer_synths->Add( _alih, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText27 = new wxStaticText( synths_pane, wxID_ANY, _("XV"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText27->Wrap( -1 );
	fgsizer_synths->Add( m_staticText27, 0, wxALL, 5 );
	
	_xv = new wxTextCtrl( synths_pane, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	_xv->SetMaxLength( 0 ); 
	fgsizer_synths->Add( _xv, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText50 = new wxStaticText( synths_pane, wxID_ANY, _("ZV"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText50->Wrap( -1 );
	fgsizer_synths->Add( m_staticText50, 0, wxALL, 5 );
	
	_zv = new wxTextCtrl( synths_pane, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgsizer_synths->Add( _zv, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText116 = new wxStaticText( synths_pane, wxID_ANY, _("SCALE"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText116->Wrap( -1 );
	fgsizer_synths->Add( m_staticText116, 0, wxALL, 5 );
	
	_scale = new wxTextCtrl( synths_pane, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgsizer_synths->Add( _scale, 0, wxALL|wxEXPAND, 5 );
	
	
	sbsizer_synths->Add( fgsizer_synths, 1, wxEXPAND, 5 );
	
	
	synths_pane->SetSizer( sbsizer_synths );
	synths_pane->Layout();
	sbsizer_synths->Fit( synths_pane );
	nt_wxDatcom->AddPage( synths_pane, _("SYNTHS"), false );
	geometry_pane = new wxPanel( nt_wxDatcom, ID_NT_GEOMETRY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bsizer_geom;
	bsizer_geom = new wxBoxSizer( wxVERTICAL );
	
	nt_geometry = new wxNotebook( geometry_pane, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxNB_TOP );
	panel_body = new wxPanel( nt_geometry, ID_PANEL_BODY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxStaticBoxSizer* sbsizer_body;
	sbsizer_body = new wxStaticBoxSizer( new wxStaticBox( panel_body, wxID_ANY, _("BODY GEOMETRY") ), wxVERTICAL );
	
	wxFlexGridSizer* fgsizer_body;
	fgsizer_body = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgsizer_body->AddGrowableCol( 1 );
	fgsizer_body->SetFlexibleDirection( wxBOTH );
	fgsizer_body->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText30 = new wxStaticText( panel_body, wxID_ANY, _("NX"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText30->Wrap( -1 );
	fgsizer_body->Add( m_staticText30, 0, wxALL|wxEXPAND, 5 );
	
	_nx = new wxTextCtrl( panel_body, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	_nx->SetMaxLength( 0 ); 
	fgsizer_body->Add( _nx, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText32 = new wxStaticText( panel_body, wxID_ANY, _("X(1)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText32->Wrap( -1 );
	fgsizer_body->Add( m_staticText32, 0, wxALL|wxEXPAND, 5 );
	
	_x = new wxTextCtrl( panel_body, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	_x->SetMaxLength( 0 ); 
	fgsizer_body->Add( _x, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText140 = new wxStaticText( panel_body, wxID_ANY, _("R(1)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText140->Wrap( -1 );
	fgsizer_body->Add( m_staticText140, 0, wxALL, 5 );
	
	_r = new wxTextCtrl( panel_body, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgsizer_body->Add( _r, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText33 = new wxStaticText( panel_body, wxID_ANY, _("S(1)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText33->Wrap( -1 );
	fgsizer_body->Add( m_staticText33, 0, wxALL, 5 );
	
	_s = new wxTextCtrl( panel_body, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	_s->SetMaxLength( 0 ); 
	fgsizer_body->Add( _s, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText141 = new wxStaticText( panel_body, wxID_ANY, _("P(1)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText141->Wrap( -1 );
	fgsizer_body->Add( m_staticText141, 0, wxALL, 5 );
	
	_p = new wxTextCtrl( panel_body, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgsizer_body->Add( _p, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText102 = new wxStaticText( panel_body, wxID_ANY, _("BNOSE"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText102->Wrap( -1 );
	fgsizer_body->Add( m_staticText102, 0, wxALL, 5 );
	
	_bnose = new wxTextCtrl( panel_body, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgsizer_body->Add( _bnose, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText103 = new wxStaticText( panel_body, wxID_ANY, _("BLN"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText103->Wrap( -1 );
	fgsizer_body->Add( m_staticText103, 0, wxALL, 5 );
	
	_bln = new wxTextCtrl( panel_body, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgsizer_body->Add( _bln, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText104 = new wxStaticText( panel_body, wxID_ANY, _("BLA"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText104->Wrap( -1 );
	fgsizer_body->Add( m_staticText104, 0, wxALL, 5 );
	
	_bla = new wxTextCtrl( panel_body, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgsizer_body->Add( _bla, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText134 = new wxStaticText( panel_body, wxID_ANY, _("ZU(1)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText134->Wrap( -1 );
	fgsizer_body->Add( m_staticText134, 0, wxALL, 5 );
	
	_zu = new wxTextCtrl( panel_body, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgsizer_body->Add( _zu, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText135 = new wxStaticText( panel_body, wxID_ANY, _("ZL(1)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText135->Wrap( -1 );
	fgsizer_body->Add( m_staticText135, 0, wxALL, 5 );
	
	_zl = new wxTextCtrl( panel_body, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgsizer_body->Add( _zl, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText136 = new wxStaticText( panel_body, wxID_ANY, _("DS"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText136->Wrap( -1 );
	fgsizer_body->Add( m_staticText136, 0, wxALL, 5 );
	
	_ds = new wxTextCtrl( panel_body, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgsizer_body->Add( _ds, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText139 = new wxStaticText( panel_body, wxID_ANY, _("METHOD"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText139->Wrap( -1 );
	fgsizer_body->Add( m_staticText139, 0, wxALL, 5 );
	
	_method = new wxTextCtrl( panel_body, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgsizer_body->Add( _method, 0, wxALL|wxEXPAND, 5 );
	
	
	sbsizer_body->Add( fgsizer_body, 1, wxEXPAND|wxTOP|wxBOTTOM|wxLEFT, 5 );
	
	
	panel_body->SetSizer( sbsizer_body );
	panel_body->Layout();
	sbsizer_body->Fit( panel_body );
	nt_geometry->AddPage( panel_body, _("BODY"), true );
	panel_wing = new wxPanel( nt_geometry, ID_PANEL_WING, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer23;
	bSizer23 = new wxBoxSizer( wxVERTICAL );
	
	bSizer23->SetMinSize( wxSize( 600,-1 ) ); 
	wxBoxSizer* bSizer28;
	bSizer28 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbsizer_wing_geom;
	sbsizer_wing_geom = new wxStaticBoxSizer( new wxStaticBox( panel_wing, wxID_ANY, _("WING GEOMETRY") ), wxVERTICAL );
	
	wxBoxSizer* bsizer_planform;
	bsizer_planform = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bsizer_planform_child;
	bsizer_planform_child = new wxBoxSizer( wxVERTICAL );
	
	wxFlexGridSizer* fgsizer_planform;
	fgsizer_planform = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgsizer_planform->AddGrowableCol( 1 );
	fgsizer_planform->SetFlexibleDirection( wxBOTH );
	fgsizer_planform->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	l_w_type = new wxStaticText( panel_wing, wxID_ANY, _("TYPE"), wxDefaultPosition, wxDefaultSize, 0 );
	l_w_type->Wrap( -1 );
	fgsizer_planform->Add( l_w_type, 0, wxALL, 5 );
	
	w_type = new wxTextCtrl( panel_wing, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	w_type->SetMaxLength( 0 ); 
	fgsizer_planform->Add( w_type, 0, wxALL|wxEXPAND, 5 );
	
	l_w_chrdr = new wxStaticText( panel_wing, wxID_ANY, _("CHRDR"), wxDefaultPosition, wxDefaultSize, 0 );
	l_w_chrdr->Wrap( -1 );
	fgsizer_planform->Add( l_w_chrdr, 0, wxALL, 5 );
	
	w_chrdr = new wxTextCtrl( panel_wing, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	w_chrdr->SetMaxLength( 0 ); 
	fgsizer_planform->Add( w_chrdr, 0, wxALL|wxEXPAND, 5 );
	
	l_w_chrdbp = new wxStaticText( panel_wing, wxID_ANY, _("CHRDBP"), wxDefaultPosition, wxDefaultSize, 0 );
	l_w_chrdbp->Wrap( -1 );
	fgsizer_planform->Add( l_w_chrdbp, 0, wxALL, 5 );
	
	w_chrdbp = new wxTextCtrl( panel_wing, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	w_chrdbp->SetMaxLength( 0 ); 
	fgsizer_planform->Add( w_chrdbp, 0, wxALL|wxEXPAND, 5 );
	
	l_w_chrdtp = new wxStaticText( panel_wing, wxID_ANY, _("CHRDTP"), wxDefaultPosition, wxDefaultSize, 0 );
	l_w_chrdtp->Wrap( -1 );
	fgsizer_planform->Add( l_w_chrdtp, 0, wxALL, 5 );
	
	w_chrdtp = new wxTextCtrl( panel_wing, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	w_chrdtp->SetMaxLength( 0 ); 
	fgsizer_planform->Add( w_chrdtp, 0, wxALL|wxEXPAND, 5 );
	
	l_w_sspnop = new wxStaticText( panel_wing, wxID_ANY, _("SSPNOP"), wxDefaultPosition, wxDefaultSize, 0 );
	l_w_sspnop->Wrap( -1 );
	fgsizer_planform->Add( l_w_sspnop, 0, wxALL, 5 );
	
	w_sspnop = new wxTextCtrl( panel_wing, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	w_sspnop->SetMaxLength( 0 ); 
	fgsizer_planform->Add( w_sspnop, 0, wxALL|wxEXPAND, 5 );
	
	l_w_sspn = new wxStaticText( panel_wing, wxID_ANY, _("SSPN"), wxDefaultPosition, wxDefaultSize, 0 );
	l_w_sspn->Wrap( -1 );
	fgsizer_planform->Add( l_w_sspn, 0, wxALL, 5 );
	
	w_sspn = new wxTextCtrl( panel_wing, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	w_sspn->SetMaxLength( 0 ); 
	fgsizer_planform->Add( w_sspn, 0, wxALL|wxEXPAND, 5 );
	
	l_w_sspne = new wxStaticText( panel_wing, wxID_ANY, _("SSPNE"), wxDefaultPosition, wxDefaultSize, 0 );
	l_w_sspne->Wrap( -1 );
	fgsizer_planform->Add( l_w_sspne, 0, wxALL, 5 );
	
	w_sspne = new wxTextCtrl( panel_wing, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	w_sspne->SetMaxLength( 0 ); 
	fgsizer_planform->Add( w_sspne, 0, wxALL|wxEXPAND, 5 );
	
	l_w_savsi = new wxStaticText( panel_wing, wxID_ANY, _("SAVSI"), wxDefaultPosition, wxDefaultSize, 0 );
	l_w_savsi->Wrap( -1 );
	fgsizer_planform->Add( l_w_savsi, 0, wxALL, 5 );
	
	w_savsi = new wxTextCtrl( panel_wing, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	w_savsi->SetMaxLength( 0 ); 
	fgsizer_planform->Add( w_savsi, 0, wxALL|wxEXPAND, 5 );
	
	l_w_savso = new wxStaticText( panel_wing, wxID_ANY, _("SAVSO"), wxDefaultPosition, wxDefaultSize, 0 );
	l_w_savso->Wrap( -1 );
	fgsizer_planform->Add( l_w_savso, 0, wxALL, 5 );
	
	w_savso = new wxTextCtrl( panel_wing, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	w_savso->SetMaxLength( 0 ); 
	fgsizer_planform->Add( w_savso, 0, wxALL|wxEXPAND, 5 );
	
	l_w_chstat = new wxStaticText( panel_wing, wxID_ANY, _("CHSTAT"), wxDefaultPosition, wxDefaultSize, 0 );
	l_w_chstat->Wrap( -1 );
	fgsizer_planform->Add( l_w_chstat, 0, wxALL, 5 );
	
	w_chstat = new wxTextCtrl( panel_wing, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	w_chstat->SetMaxLength( 0 ); 
	fgsizer_planform->Add( w_chstat, 0, wxALL|wxEXPAND, 5 );
	
	l_w_sspndd = new wxStaticText( panel_wing, wxID_ANY, _("SSPNDD"), wxDefaultPosition, wxDefaultSize, 0 );
	l_w_sspndd->Wrap( -1 );
	fgsizer_planform->Add( l_w_sspndd, 0, wxALL|wxEXPAND, 5 );
	
	w_sspndd = new wxTextCtrl( panel_wing, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgsizer_planform->Add( w_sspndd, 0, wxALL|wxEXPAND, 5 );
	
	l_w_twista = new wxStaticText( panel_wing, wxID_ANY, _("TWISTA"), wxDefaultPosition, wxDefaultSize, 0 );
	l_w_twista->Wrap( -1 );
	fgsizer_planform->Add( l_w_twista, 0, wxALL, 5 );
	
	w_twista = new wxTextCtrl( panel_wing, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	w_twista->SetMaxLength( 0 ); 
	fgsizer_planform->Add( w_twista, 0, wxALL|wxEXPAND, 5 );
	
	l_w_dhdadi = new wxStaticText( panel_wing, wxID_ANY, _("DHDADI"), wxDefaultPosition, wxDefaultSize, 0 );
	l_w_dhdadi->Wrap( -1 );
	fgsizer_planform->Add( l_w_dhdadi, 0, wxALL, 5 );
	
	w_dhdadi = new wxTextCtrl( panel_wing, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	w_dhdadi->SetMaxLength( 0 ); 
	fgsizer_planform->Add( w_dhdadi, 0, wxALL|wxEXPAND, 5 );
	
	l_w_dhdado = new wxStaticText( panel_wing, wxID_ANY, _("DHDADO"), wxDefaultPosition, wxDefaultSize, 0 );
	l_w_dhdado->Wrap( -1 );
	fgsizer_planform->Add( l_w_dhdado, 0, wxALL|wxEXPAND, 5 );
	
	w_dhdado = new wxTextCtrl( panel_wing, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgsizer_planform->Add( w_dhdado, 0, wxALL|wxEXPAND, 5 );
	
	
	bsizer_planform_child->Add( fgsizer_planform, 1, wxEXPAND, 5 );
	
	
	bsizer_planform->Add( bsizer_planform_child, 1, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbsizer_naca;
	sbsizer_naca = new wxStaticBoxSizer( new wxStaticBox( panel_wing, wxID_ANY, _("AIRFOIL") ), wxVERTICAL );
	
	m_staticText431 = new wxStaticText( panel_wing, wxID_ANY, _("Airfoil Name"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText431->Wrap( -1 );
	sbsizer_naca->Add( m_staticText431, 0, wxALL, 5 );
	
	w_airfoil_name = new wxTextCtrl( panel_wing, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	w_airfoil_name->SetMaxLength( 0 ); 
	sbsizer_naca->Add( w_airfoil_name, 0, wxALL, 5 );
	
	wxString w_naca_seriesChoices[] = { _("NACA 1 Series"), _("NACA 2 Series"), _("NACA 4 Series"), _("NACA 5 Series"), _("NACA 6 Series"), _("Custom Airfoil") };
	int w_naca_seriesNChoices = sizeof( w_naca_seriesChoices ) / sizeof( wxString );
	w_naca_series = new wxRadioBox( panel_wing, wxID_ANY, _("Type"), wxDefaultPosition, wxDefaultSize, w_naca_seriesNChoices, w_naca_seriesChoices, 1, wxRA_SPECIFY_COLS );
	w_naca_series->SetSelection( 2 );
	sbsizer_naca->Add( w_naca_series, 0, wxBOTTOM|wxRIGHT|wxLEFT, 5 );
	
	w_cmd_import_airfoil = new wxButton( panel_wing, wxID_ANY, _("Import Airfoil"), wxDefaultPosition, wxDefaultSize, 0 );
	sbsizer_naca->Add( w_cmd_import_airfoil, 0, wxALL, 5 );
	
	
	bsizer_planform->Add( sbsizer_naca, 0, wxEXPAND, 5 );
	
	
	sbsizer_wing_geom->Add( bsizer_planform, 1, wxEXPAND, 5 );
	
	
	bSizer28->Add( sbsizer_wing_geom, 1, wxEXPAND, 5 );
	
	
	bSizer23->Add( bSizer28, 1, wxEXPAND, 5 );
	
	
	panel_wing->SetSizer( bSizer23 );
	panel_wing->Layout();
	bSizer23->Fit( panel_wing );
	nt_geometry->AddPage( panel_wing, _("WING"), false );
	panel_htail = new wxPanel( nt_geometry, ID_PANEL_HTAIL, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxStaticBoxSizer* sbsizer_ht_geom;
	sbsizer_ht_geom = new wxStaticBoxSizer( new wxStaticBox( panel_htail, wxID_ANY, _("HORIZONTAL TAIL GEOMETRY") ), wxVERTICAL );
	
	wxBoxSizer* bsizer_planform1;
	bsizer_planform1 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bsizer_planform_child1;
	bsizer_planform_child1 = new wxBoxSizer( wxVERTICAL );
	
	wxFlexGridSizer* fgsizer_planform1;
	fgsizer_planform1 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgsizer_planform1->AddGrowableCol( 1 );
	fgsizer_planform1->SetFlexibleDirection( wxBOTH );
	fgsizer_planform1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	L_H_TYPE = new wxStaticText( panel_htail, wxID_ANY, _("TYPE"), wxDefaultPosition, wxDefaultSize, 0 );
	L_H_TYPE->Wrap( -1 );
	fgsizer_planform1->Add( L_H_TYPE, 0, wxALL, 5 );
	
	h_type = new wxTextCtrl( panel_htail, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgsizer_planform1->Add( h_type, 0, wxALL|wxEXPAND, 5 );
	
	L_H_CHRDR = new wxStaticText( panel_htail, wxID_ANY, _("CHRDR"), wxDefaultPosition, wxDefaultSize, 0 );
	L_H_CHRDR->Wrap( -1 );
	fgsizer_planform1->Add( L_H_CHRDR, 0, wxALL, 5 );
	
	h_chrdr = new wxTextCtrl( panel_htail, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgsizer_planform1->Add( h_chrdr, 0, wxALL|wxEXPAND, 5 );
	
	L_H_CHRDBP = new wxStaticText( panel_htail, wxID_ANY, _("CHRDBP"), wxDefaultPosition, wxDefaultSize, 0 );
	L_H_CHRDBP->Wrap( -1 );
	fgsizer_planform1->Add( L_H_CHRDBP, 0, wxALL, 5 );
	
	h_chrdbp = new wxTextCtrl( panel_htail, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgsizer_planform1->Add( h_chrdbp, 0, wxALL|wxEXPAND, 5 );
	
	L_H_CHRDTP = new wxStaticText( panel_htail, wxID_ANY, _("CHRDTP"), wxDefaultPosition, wxDefaultSize, 0 );
	L_H_CHRDTP->Wrap( -1 );
	fgsizer_planform1->Add( L_H_CHRDTP, 0, wxALL, 5 );
	
	h_chrdtp = new wxTextCtrl( panel_htail, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgsizer_planform1->Add( h_chrdtp, 0, wxALL|wxEXPAND, 5 );
	
	L_H_SSPNOP = new wxStaticText( panel_htail, wxID_ANY, _("SSPNOP"), wxDefaultPosition, wxDefaultSize, 0 );
	L_H_SSPNOP->Wrap( -1 );
	fgsizer_planform1->Add( L_H_SSPNOP, 0, wxALL, 5 );
	
	h_sspnop = new wxTextCtrl( panel_htail, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgsizer_planform1->Add( h_sspnop, 0, wxALL|wxEXPAND, 5 );
	
	L_H_SSPN = new wxStaticText( panel_htail, wxID_ANY, _("SSPN"), wxDefaultPosition, wxDefaultSize, 0 );
	L_H_SSPN->Wrap( -1 );
	fgsizer_planform1->Add( L_H_SSPN, 0, wxALL, 5 );
	
	h_sspn = new wxTextCtrl( panel_htail, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgsizer_planform1->Add( h_sspn, 0, wxALL|wxEXPAND, 5 );
	
	L_H_SSPNE = new wxStaticText( panel_htail, wxID_ANY, _("SSPNE"), wxDefaultPosition, wxDefaultSize, 0 );
	L_H_SSPNE->Wrap( -1 );
	fgsizer_planform1->Add( L_H_SSPNE, 0, wxALL, 5 );
	
	h_sspne = new wxTextCtrl( panel_htail, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgsizer_planform1->Add( h_sspne, 0, wxALL|wxEXPAND, 5 );
	
	L_H_SAVSI = new wxStaticText( panel_htail, wxID_ANY, _("SAVSI"), wxDefaultPosition, wxDefaultSize, 0 );
	L_H_SAVSI->Wrap( -1 );
	fgsizer_planform1->Add( L_H_SAVSI, 0, wxALL, 5 );
	
	h_savsi = new wxTextCtrl( panel_htail, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgsizer_planform1->Add( h_savsi, 0, wxALL|wxEXPAND, 5 );
	
	L_H_CHSTAT = new wxStaticText( panel_htail, wxID_ANY, _("CHSTAT"), wxDefaultPosition, wxDefaultSize, 0 );
	L_H_CHSTAT->Wrap( -1 );
	fgsizer_planform1->Add( L_H_CHSTAT, 0, wxALL, 5 );
	
	h_chstat = new wxTextCtrl( panel_htail, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgsizer_planform1->Add( h_chstat, 0, wxALL|wxEXPAND, 5 );
	
	L_H_SSPNDD = new wxStaticText( panel_htail, wxID_ANY, _("SSPNDD"), wxDefaultPosition, wxDefaultSize, 0 );
	L_H_SSPNDD->Wrap( -1 );
	fgsizer_planform1->Add( L_H_SSPNDD, 0, wxALL, 5 );
	
	h_sspndd = new wxTextCtrl( panel_htail, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgsizer_planform1->Add( h_sspndd, 0, wxALL|wxEXPAND, 5 );
	
	L_H_TWISTA = new wxStaticText( panel_htail, wxID_ANY, _("TWISTA"), wxDefaultPosition, wxDefaultSize, 0 );
	L_H_TWISTA->Wrap( -1 );
	fgsizer_planform1->Add( L_H_TWISTA, 0, wxALL, 5 );
	
	h_twista = new wxTextCtrl( panel_htail, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgsizer_planform1->Add( h_twista, 0, wxALL|wxEXPAND, 5 );
	
	L_H_DHDADI = new wxStaticText( panel_htail, wxID_ANY, _("DHDADI"), wxDefaultPosition, wxDefaultSize, 0 );
	L_H_DHDADI->Wrap( -1 );
	fgsizer_planform1->Add( L_H_DHDADI, 0, wxALL, 5 );
	
	h_dhdadi = new wxTextCtrl( panel_htail, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgsizer_planform1->Add( h_dhdadi, 0, wxALL|wxEXPAND, 5 );
	
	L_H_SHB = new wxStaticText( panel_htail, wxID_ANY, _("SHB(1)"), wxDefaultPosition, wxDefaultSize, 0 );
	L_H_SHB->Wrap( -1 );
	fgsizer_planform1->Add( L_H_SHB, 0, wxALL, 5 );
	
	h_shb = new wxTextCtrl( panel_htail, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgsizer_planform1->Add( h_shb, 0, wxALL|wxEXPAND, 5 );
	
	L_H_SEXT = new wxStaticText( panel_htail, wxID_ANY, _("SEXT(1)"), wxDefaultPosition, wxDefaultSize, 0 );
	L_H_SEXT->Wrap( -1 );
	fgsizer_planform1->Add( L_H_SEXT, 0, wxALL, 5 );
	
	h_sext = new wxTextCtrl( panel_htail, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgsizer_planform1->Add( h_sext, 0, wxALL|wxEXPAND, 5 );
	
	L_H_RLPH = new wxStaticText( panel_htail, wxID_ANY, _("RLPH"), wxDefaultPosition, wxDefaultSize, 0 );
	L_H_RLPH->Wrap( -1 );
	fgsizer_planform1->Add( L_H_RLPH, 0, wxALL, 5 );
	
	h_rlph = new wxTextCtrl( panel_htail, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgsizer_planform1->Add( h_rlph, 0, wxALL|wxEXPAND, 5 );
	
	
	bsizer_planform_child1->Add( fgsizer_planform1, 1, wxEXPAND, 5 );
	
	
	bsizer_planform1->Add( bsizer_planform_child1, 1, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbsizer_naca1;
	sbsizer_naca1 = new wxStaticBoxSizer( new wxStaticBox( panel_htail, wxID_ANY, _("AIRFOIL") ), wxVERTICAL );
	
	m_staticText432 = new wxStaticText( panel_htail, wxID_ANY, _("Airfoil Name"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText432->Wrap( -1 );
	sbsizer_naca1->Add( m_staticText432, 0, wxALL, 5 );
	
	h_airfoil_name = new wxTextCtrl( panel_htail, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	h_airfoil_name->SetMaxLength( 0 ); 
	sbsizer_naca1->Add( h_airfoil_name, 0, wxALL, 5 );
	
	wxString h_naca_seriesChoices[] = { _("NACA 1 Series"), _("NACA 2 Series"), _("NACA 4 Series"), _("NACA 5 Series"), _("NACA 6 Series"), _("Custom Airfoil") };
	int h_naca_seriesNChoices = sizeof( h_naca_seriesChoices ) / sizeof( wxString );
	h_naca_series = new wxRadioBox( panel_htail, wxID_ANY, _("Type"), wxDefaultPosition, wxDefaultSize, h_naca_seriesNChoices, h_naca_seriesChoices, 1, wxRA_SPECIFY_COLS );
	h_naca_series->SetSelection( 2 );
	sbsizer_naca1->Add( h_naca_series, 0, wxBOTTOM|wxRIGHT|wxLEFT, 5 );
	
	h_cmd_import_airfoil = new wxButton( panel_htail, wxID_ANY, _("Import Airfoil"), wxDefaultPosition, wxDefaultSize, 0 );
	sbsizer_naca1->Add( h_cmd_import_airfoil, 0, wxALL, 5 );
	
	
	bsizer_planform1->Add( sbsizer_naca1, 0, wxEXPAND, 5 );
	
	
	sbsizer_ht_geom->Add( bsizer_planform1, 1, wxEXPAND, 5 );
	
	
	panel_htail->SetSizer( sbsizer_ht_geom );
	panel_htail->Layout();
	sbsizer_ht_geom->Fit( panel_htail );
	nt_geometry->AddPage( panel_htail, _("HORIZONTAL TAIL"), false );
	panel_vtail = new wxPanel( nt_geometry, ID_PANEL_VTAIL, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxStaticBoxSizer* sbsizer_vtail_geom;
	sbsizer_vtail_geom = new wxStaticBoxSizer( new wxStaticBox( panel_vtail, wxID_ANY, _("VERTICAL TAIL GEOMETRY") ), wxVERTICAL );
	
	wxBoxSizer* bsizer_planform2;
	bsizer_planform2 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bsizer_planform_child2;
	bsizer_planform_child2 = new wxBoxSizer( wxVERTICAL );
	
	wxFlexGridSizer* fgsizer_planform2;
	fgsizer_planform2 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgsizer_planform2->AddGrowableCol( 1 );
	fgsizer_planform2->SetFlexibleDirection( wxBOTH );
	fgsizer_planform2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	L_V_TYPE = new wxStaticText( panel_vtail, wxID_ANY, _("TYPE"), wxDefaultPosition, wxDefaultSize, 0 );
	L_V_TYPE->Wrap( -1 );
	fgsizer_planform2->Add( L_V_TYPE, 0, wxALL, 5 );
	
	v_type = new wxTextCtrl( panel_vtail, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgsizer_planform2->Add( v_type, 0, wxALL|wxEXPAND, 5 );
	
	L_V_CHRDR = new wxStaticText( panel_vtail, wxID_ANY, _("CHRDR"), wxDefaultPosition, wxDefaultSize, 0 );
	L_V_CHRDR->Wrap( -1 );
	fgsizer_planform2->Add( L_V_CHRDR, 0, wxALL, 5 );
	
	v_chrdr = new wxTextCtrl( panel_vtail, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgsizer_planform2->Add( v_chrdr, 0, wxALL|wxEXPAND, 5 );
	
	L_V_CHRDBP = new wxStaticText( panel_vtail, wxID_ANY, _("CHRDBP"), wxDefaultPosition, wxDefaultSize, 0 );
	L_V_CHRDBP->Wrap( -1 );
	fgsizer_planform2->Add( L_V_CHRDBP, 0, wxALL, 5 );
	
	v_chrdbp = new wxTextCtrl( panel_vtail, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgsizer_planform2->Add( v_chrdbp, 0, wxALL|wxEXPAND, 5 );
	
	L_V_CHRDTP = new wxStaticText( panel_vtail, wxID_ANY, _("CHRDTP"), wxDefaultPosition, wxDefaultSize, 0 );
	L_V_CHRDTP->Wrap( -1 );
	fgsizer_planform2->Add( L_V_CHRDTP, 0, wxALL, 5 );
	
	v_chrdtp = new wxTextCtrl( panel_vtail, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgsizer_planform2->Add( v_chrdtp, 0, wxALL|wxEXPAND, 5 );
	
	L_V_SSPNOP = new wxStaticText( panel_vtail, wxID_ANY, _("SSPNOP"), wxDefaultPosition, wxDefaultSize, 0 );
	L_V_SSPNOP->Wrap( -1 );
	fgsizer_planform2->Add( L_V_SSPNOP, 0, wxALL, 5 );
	
	v_sspnop = new wxTextCtrl( panel_vtail, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgsizer_planform2->Add( v_sspnop, 0, wxALL|wxEXPAND, 5 );
	
	V_SSPN = new wxStaticText( panel_vtail, wxID_ANY, _("SSPN"), wxDefaultPosition, wxDefaultSize, 0 );
	V_SSPN->Wrap( -1 );
	fgsizer_planform2->Add( V_SSPN, 0, wxALL, 5 );
	
	v_sspn = new wxTextCtrl( panel_vtail, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgsizer_planform2->Add( v_sspn, 0, wxALL|wxEXPAND, 5 );
	
	L_V_SSPNE = new wxStaticText( panel_vtail, wxID_ANY, _("SSPNE"), wxDefaultPosition, wxDefaultSize, 0 );
	L_V_SSPNE->Wrap( -1 );
	fgsizer_planform2->Add( L_V_SSPNE, 0, wxALL, 5 );
	
	v_sspne = new wxTextCtrl( panel_vtail, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgsizer_planform2->Add( v_sspne, 0, wxALL|wxEXPAND, 5 );
	
	L_V_SAVSI = new wxStaticText( panel_vtail, wxID_ANY, _("SAVSI"), wxDefaultPosition, wxDefaultSize, 0 );
	L_V_SAVSI->Wrap( -1 );
	fgsizer_planform2->Add( L_V_SAVSI, 0, wxALL, 5 );
	
	v_savsi = new wxTextCtrl( panel_vtail, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgsizer_planform2->Add( v_savsi, 0, wxALL|wxEXPAND, 5 );
	
	L_V_SAVSO = new wxStaticText( panel_vtail, wxID_ANY, _("SAVSO"), wxDefaultPosition, wxDefaultSize, 0 );
	L_V_SAVSO->Wrap( -1 );
	fgsizer_planform2->Add( L_V_SAVSO, 0, wxALL, 5 );
	
	v_savso = new wxTextCtrl( panel_vtail, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgsizer_planform2->Add( v_savso, 0, wxALL|wxEXPAND, 5 );
	
	V_CHSTAT = new wxStaticText( panel_vtail, wxID_ANY, _("CHSTAT"), wxDefaultPosition, wxDefaultSize, 0 );
	V_CHSTAT->Wrap( -1 );
	fgsizer_planform2->Add( V_CHSTAT, 0, wxALL, 5 );
	
	v_chstat = new wxTextCtrl( panel_vtail, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgsizer_planform2->Add( v_chstat, 0, wxALL|wxEXPAND, 5 );
	
	L_V_SVWB = new wxStaticText( panel_vtail, wxID_ANY, _("SVWB(1)"), wxDefaultPosition, wxDefaultSize, 0 );
	L_V_SVWB->Wrap( -1 );
	fgsizer_planform2->Add( L_V_SVWB, 0, wxALL, 5 );
	
	v_svwb = new wxTextCtrl( panel_vtail, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgsizer_planform2->Add( v_svwb, 0, wxALL|wxEXPAND, 5 );
	
	L_V_SVB = new wxStaticText( panel_vtail, wxID_ANY, _("SVB(1)"), wxDefaultPosition, wxDefaultSize, 0 );
	L_V_SVB->Wrap( -1 );
	fgsizer_planform2->Add( L_V_SVB, 0, wxALL, 5 );
	
	v_svb = new wxTextCtrl( panel_vtail, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgsizer_planform2->Add( v_svb, 0, wxALL|wxEXPAND, 5 );
	
	L_V_SVHB = new wxStaticText( panel_vtail, wxID_ANY, _("SVHB(1)"), wxDefaultPosition, wxDefaultSize, 0 );
	L_V_SVHB->Wrap( -1 );
	fgsizer_planform2->Add( L_V_SVHB, 0, wxALL, 5 );
	
	v_svhb = new wxTextCtrl( panel_vtail, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgsizer_planform2->Add( v_svhb, 0, wxALL|wxEXPAND, 5 );
	
	
	bsizer_planform_child2->Add( fgsizer_planform2, 1, wxEXPAND, 5 );
	
	
	bsizer_planform2->Add( bsizer_planform_child2, 1, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbsizer_naca2;
	sbsizer_naca2 = new wxStaticBoxSizer( new wxStaticBox( panel_vtail, wxID_ANY, _("AIRFOIL") ), wxVERTICAL );
	
	m_staticText433 = new wxStaticText( panel_vtail, wxID_ANY, _("Airfoil Name"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText433->Wrap( -1 );
	sbsizer_naca2->Add( m_staticText433, 0, wxALL, 5 );
	
	v_airfoil_name = new wxTextCtrl( panel_vtail, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	v_airfoil_name->SetMaxLength( 0 ); 
	sbsizer_naca2->Add( v_airfoil_name, 0, wxALL, 5 );
	
	wxString v_naca_seriesChoices[] = { _("NACA 1 Series"), _("NACA 2 Series"), _("NACA 4 Series"), _("NACA 5 Series"), _("NACA 6 Series"), _("Custom Airfoil") };
	int v_naca_seriesNChoices = sizeof( v_naca_seriesChoices ) / sizeof( wxString );
	v_naca_series = new wxRadioBox( panel_vtail, wxID_ANY, _("Type"), wxDefaultPosition, wxDefaultSize, v_naca_seriesNChoices, v_naca_seriesChoices, 1, wxRA_SPECIFY_COLS );
	v_naca_series->SetSelection( 2 );
	sbsizer_naca2->Add( v_naca_series, 0, wxBOTTOM|wxRIGHT|wxLEFT, 5 );
	
	v_cmd_import_airfoil = new wxButton( panel_vtail, wxID_ANY, _("Import Airfoil"), wxDefaultPosition, wxDefaultSize, 0 );
	sbsizer_naca2->Add( v_cmd_import_airfoil, 0, wxALL, 5 );
	
	
	bsizer_planform2->Add( sbsizer_naca2, 0, wxEXPAND, 5 );
	
	
	sbsizer_vtail_geom->Add( bsizer_planform2, 1, wxEXPAND, 5 );
	
	
	panel_vtail->SetSizer( sbsizer_vtail_geom );
	panel_vtail->Layout();
	sbsizer_vtail_geom->Fit( panel_vtail );
	nt_geometry->AddPage( panel_vtail, _("VERTICAL TAIL"), false );
	flaps_pane = new wxPanel( nt_geometry, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	nt_geometry->AddPage( flaps_pane, _("FLAPS"), false );
	elevator_pane = new wxPanel( nt_geometry, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	nt_geometry->AddPage( elevator_pane, _("ELEVATOR"), false );
	panel_jet = new wxPanel( nt_geometry, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	nt_geometry->AddPage( panel_jet, _("JET POWER"), false );
	
	bsizer_geom->Add( nt_geometry, 1, wxEXPAND|wxALL, 5 );
	
	
	geometry_pane->SetSizer( bsizer_geom );
	geometry_pane->Layout();
	bsizer_geom->Fit( geometry_pane );
	nt_wxDatcom->AddPage( geometry_pane, _("GEOMETRY"), true );
	
	gsizer_notebook->Add( nt_wxDatcom, 1, wxEXPAND|wxALL, 5 );
	
	wxBoxSizer* bsizer_log_panel;
	bsizer_log_panel = new wxBoxSizer( wxVERTICAL );
	
	bsizer_log_panel->SetMinSize( wxSize( 100,-1 ) ); 
	panel_log = new wxPanel( main_pane, ID_PANEL_LOG, wxDefaultPosition, wxDefaultSize, 0 );
	wxBoxSizer* bsizer_logtxt;
	bsizer_logtxt = new wxBoxSizer( wxVERTICAL );
	
	m_log_txt = new wxTextCtrl( panel_log, ID_M_LOG, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_DONTWRAP|wxTE_MULTILINE );
	m_log_txt->SetMaxLength( 0 ); 
	m_log_txt->SetFont( wxFont( 11, 76, 90, 90, false, wxEmptyString ) );
	m_log_txt->SetBackgroundColour( wxColour( 255, 255, 213 ) );
	
	bsizer_logtxt->Add( m_log_txt, 1, wxEXPAND|wxTOP|wxBOTTOM|wxRIGHT, 0 );
	
	
	panel_log->SetSizer( bsizer_logtxt );
	panel_log->Layout();
	bsizer_logtxt->Fit( panel_log );
	bsizer_log_panel->Add( panel_log, 1, wxEXPAND|wxALL, 0 );
	
	
	gsizer_notebook->Add( bsizer_log_panel, 1, wxEXPAND, 5 );
	
	
	bsizer_child->Add( gsizer_notebook, 12, wxEXPAND, 5 );
	
	
	main_pane->SetSizer( bsizer_child );
	main_pane->Layout();
	bsizer_child->Fit( main_pane );
	bsizer_main->Add( main_pane, 1, wxEXPAND, 5 );
	
	
	this->SetSizer( bsizer_main );
	this->Layout();
	statusBar = this->CreateStatusBar( 2, wxST_SIZEGRIP, wxID_ANY );
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( GUI_MainFrame::OnClose ) );
	this->Connect( newProject->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUI_MainFrame::OnClear ) );
	this->Connect( saveAs->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUI_MainFrame::OnSave ) );
	this->Connect( menuFileQuit->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUI_MainFrame::OnQuit ) );
	this->Connect( importDatcomData->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUI_MainFrame::OnImport ) );
	this->Connect( generateDatcomOutput->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUI_MainFrame::OnGenerateDat ) );
	this->Connect( runDatcom->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUI_MainFrame::OnRunDatcom ) );
	this->Connect( visualizeAircraft->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUI_MainFrame::OnPlotAircraft ) );
	this->Connect( plotResults->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUI_MainFrame::OnPlotResults ) );
	this->Connect( selectDataForPlot->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUI_MainFrame::OnPlotData ) );
	this->Connect( menuHelpAbout->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUI_MainFrame::OnAbout ) );
}

GUI_MainFrame::~GUI_MainFrame()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( GUI_MainFrame::OnClose ) );
	this->Disconnect( ID_NEW_PROJECT, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUI_MainFrame::OnClear ) );
	this->Disconnect( ID_SAVE_AS, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUI_MainFrame::OnSave ) );
	this->Disconnect( idMenuQuit, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUI_MainFrame::OnQuit ) );
	this->Disconnect( ID_IMPORT_DATCOM_DATA, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUI_MainFrame::OnImport ) );
	this->Disconnect( ID_GENERATE_DATCOM_OUTPUT, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUI_MainFrame::OnGenerateDat ) );
	this->Disconnect( ID_RUN_DATCOM, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUI_MainFrame::OnRunDatcom ) );
	this->Disconnect( ID_VISUALIZE_AIRCRAFT, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUI_MainFrame::OnPlotAircraft ) );
	this->Disconnect( ID_PLOT_RESULTS, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUI_MainFrame::OnPlotResults ) );
	this->Disconnect( ID_SELECT_DATA_FOR_PLOT, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUI_MainFrame::OnPlotData ) );
	this->Disconnect( idMenuAbout, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUI_MainFrame::OnAbout ) );
	
}
