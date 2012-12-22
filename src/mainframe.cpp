#include "mainframe.h"
#include <iostream>
using namespace std;
#include "wx/process.h"
#include <wx/textfile.h>
#include <wx/filedlg.h>

wxString input_file;
wxString fileName; //   IMPORTED FILE
wxString project_file; // FILE TO BE SAVED
wxString file; // FILE TO BE SAVED
wxString project_folder; // DATCOM FILE FOLDER TO BE SAVED
wxString project_file_full_path; // FULL DATCOM FILE SAVE AS PATH



MainFrame::MainFrame( wxWindow* parent )
    :
    GUI_MainFrame( parent )
{
#if wxUSE_STATUSBAR
    statusBar->SetStatusText(_("Hello Code::Blocks user!"), 0);
    statusBar->SetStatusText(_("Hello Code::Blocks user!"), 1);
#endif

}


wxString import_parameter( wxString parameter,int type)
{
    /* ----------------------------------- */
    wxFile file;
    file.Create(wxT("temp.txt"), true);
    file.Close();

    wxTextFile tmp_file(wxT("temp.txt"));

    wxString tmp_str;
    wxString _type_pre;

    wxString _pre = _("bash -e scripts/extract.sh ");
    wxString _array_pre = _(" --type=A ");
    wxString _number_pre= _(" --type=N ");
    // wxString _file_pre = _(" --file=");   // FILE REMOVED BECAUSE THE PROCESS
    // SPLITTED 2 PROCESS = CLEAN + EXTRACT
    wxString _param_pre = _(" --parameter=");



    /* ----------------------------------- */

    if (type == 100)

    {
        _type_pre = _number_pre;
    }

    else if (type == 101)

    {
        _type_pre = _array_pre;
    }

    // wxShell(_pre + _file_pre + input_file + _param_pre + parameter + _type_pre);

    wxShell(_pre + _param_pre + parameter + _type_pre);

    tmp_file.Open();
    tmp_str = tmp_file.GetFirstLine();
    tmp_file.Close();

    return tmp_str;
}


wxString import_aero( wxString parameter,wxString aero_prefix)
{
    /* ----------------------------------- */
    wxFile file;
    file.Create(wxT("temp.txt"), true);
    file.Close();

    wxTextFile tmp_file(wxT("temp.txt"));

    wxString tmp_str;
    wxString _type_pre;

    wxString _pre = _("bash -e scripts/extract.sh ");
    wxString _number_pre= _(" --type=N ");
    wxString _aero_pre= _(" --airfoil=");

    // wxString _file_pre = _(" --file=");   // FILE REMOVED BECAUSE THE PROCESS
    // SPLITTED 2 PROCESS = CLEAN + EXTRACT
    wxString _param_pre = _(" --parameter=");



    /* ----------------------------------- */


    // wxShell(_pre + _file_pre + input_file + _param_pre + parameter + _type_pre);

    wxShell(_pre +_aero_pre + aero_prefix +_param_pre + parameter + _number_pre);

    tmp_file.Open();
    tmp_str = tmp_file.GetFirstLine();
    tmp_file.Close();

    return tmp_str;
}


void MainFrame::OnClose( wxCloseEvent& event )
{
// TODO: Implement OnClose
}

void MainFrame::OnQuit( wxCommandEvent& event )
{
// TODO: Implement OnQuit
    Destroy();

}

void MainFrame::OnAbout( wxCommandEvent& event )
{
// TODO: Implement OnAbout
}

void MainFrame::OnImport( wxCommandEvent& event )
{

  wxFileDialog *openFileDialog = new wxFileDialog(this,wxEmptyString, wxGetCwd()+ _("\examples"),wxEmptyString,
              wxT("DATCOM+ Input (*.dcm)|*.dcm|Classical Datcom Input (for005.dat)|for005.dat|Datcom Input (*.inp)|*.inp|Txt files (*.txt)|*.txt"));


  if (openFileDialog->ShowModal() == wxID_OK){
      fileName = openFileDialog->GetPath();
  }


    if (openFileDialog->GetPath().IsEmpty())
        return;
    input_file=openFileDialog->GetPath();

    enum type {isNumber=100, isArray};

    wxExecute(_("clean.sh ") + input_file,wxEXEC_ASYNC); // CLEAN UP PROCESS



    _wt->SetLabel(import_parameter(_("WT") , isNumber));


//    BODY

    _ds->SetLabel(import_parameter(_("DS") , isNumber));
    _nx->SetLabel(import_parameter(_("NX") , isNumber));
    _x->SetLabel(import_parameter(_("X") , isArray));
    _r->SetLabel(import_parameter(_("R") , isArray));

    _s->SetLabel(import_parameter(_("S") , isArray));
    _p->SetLabel(import_parameter(_("P") , isArray));
    _zu->SetLabel(import_parameter(_("ZU") , isArray));
    _zl->SetLabel(import_parameter(_("ZL") , isArray));


    _bnose->SetLabel(import_parameter(_("BNOSE") , isNumber));
    _bln->SetLabel(import_parameter(_("BLN") , isNumber));
    _bla->SetLabel(import_parameter(_("BLA") , isNumber));
    _method->SetLabel(import_parameter(_("METHOD") , isNumber));

//        OPTIONS

    _sref->SetLabel(import_parameter(_("SREF") , isNumber));
    _cbarr->SetLabel(import_parameter(_("CBARR") , isNumber));
    _blref->SetLabel(import_parameter(_("BLREF") , isNumber));
    _rougfc->SetLabel(import_parameter(_("ROUGFC") , isNumber));


//		SYNTHS
    _xcg->SetLabel(import_parameter(_("XCG") , isNumber));
    _zcg->SetLabel(import_parameter(_("ZCG") , isNumber));
    _xw->SetLabel(import_parameter(_("XW") , isNumber));
    _zw->SetLabel(import_parameter(_("ZW") , isNumber));
    _aliw->SetLabel(import_parameter(_("ALIW") , isNumber));
    _xh->SetLabel(import_parameter(_("XH") , isNumber));
    _zh->SetLabel(import_parameter(_("ZH") , isNumber));
    _alih->SetLabel(import_parameter(_("ALIH") , isNumber));
    _xv->SetLabel(import_parameter(_("XV") , isNumber));
    _zv->SetLabel(import_parameter(_("ZV") , isNumber));




//		FLIGHT
    _nmach->SetLabel(import_parameter(_("NMACH") , isNumber));
    _mach->SetLabel(import_parameter(_("MACH") , isArray));

    _rnnub->SetLabel(import_parameter(_("RNNUB") , isArray));


    _alschd->SetLabel(import_parameter(_("ALSCHD") , isArray));
    _nalpha->SetLabel(import_parameter(_("NALPHA") , isNumber));
    _nalt->SetLabel(import_parameter(_("NALT") , isNumber));
    _alt->SetLabel(import_parameter(_("ALT") , isArray));
    _loop->SetLabel(import_parameter(_("LOOP") , isNumber));



//      WING

    w_type->SetLabel(import_aero(_T("TYPE"),_("W"))  );
    w_chrdr->SetLabel(import_aero(_T("CHRDR"),_("W"))  );
    w_chrdtp->SetLabel(import_aero(_T("CHRDTP"),_("W"))  );
    w_chrdbp->SetLabel(import_aero(_T("CHRDBP"),_("W"))  );
    w_sspn->SetLabel(import_aero(_T("SSPN"),_("W"))  );
    w_sspnop->SetLabel(import_aero(_T("SSPNOP"),_("W"))  );
    w_dhdadi->SetLabel(import_aero(_T("DHDADI"),_("W"))  );
    w_dhdado->SetLabel(import_aero(_T("DHDADO"),_("W"))  );
    w_chstat->SetLabel(import_aero(_T("CHSTAT"),_("W"))  );
    w_twista->SetLabel(import_aero(_T("TWISTA"),_("W"))  );
    w_sspndd->SetLabel(import_aero(_T("SSPNDD"),_("W"))  );
    w_sspne->SetLabel(import_aero(_T("SSPNE"),_("W"))  );
    w_savsi->SetLabel(import_aero(_T("SAVSI"),_("W"))  );
    w_savso->SetLabel(import_aero(_T("SAVSO"),_("W"))  );

//      VERTICAL

    v_type->SetLabel(import_aero(_T("TYPE"),_("V"))  );
    v_chrdr->SetLabel(import_aero(_T("CHRDR"),_("V"))  );
    v_chrdtp->SetLabel(import_aero(_T("CHRDTP"),_("V"))  );
    v_chrdbp->SetLabel(import_aero(_T("CHRDBP"),_("V"))  );
    v_sspn->SetLabel(import_aero(_T("SSPN"),_("V"))  );
    v_sspnop->SetLabel(import_aero(_T("SSPNOP"),_("V"))  );
    v_chstat->SetLabel(import_aero(_T("CHSTAT"),_("V"))  );
    v_sspne->SetLabel(import_aero(_T("SSPNE"),_("V"))  );
    v_savsi->SetLabel(import_aero(_T("SAVSI"),_("V"))  );
    v_savso->SetLabel(import_aero(_T("SAVSO"),_("V"))  );

//      HORIZONTAL

    h_type->SetLabel(import_aero(_T("TYPE"),_("H"))  );
    h_chrdr->SetLabel(import_aero(_T("CHRDR"),_("H"))  );
    h_chrdtp->SetLabel(import_aero(_T("CHRDTP"),_("H"))  );
    h_chrdbp->SetLabel(import_aero(_T("CHRDBP"),_("H"))  );
    h_sspn->SetLabel(import_aero(_T("SSPN"),_("H"))  );
    h_sspnop->SetLabel(import_aero(_T("SSPNOP"),_("H"))  );
    h_dhdadi->SetLabel(import_aero(_T("DHDADI"),_("H"))  );
    h_chstat->SetLabel(import_aero(_T("CHSTAT"),_("H"))  );
    h_twista->SetLabel(import_aero(_T("TWISTA"),_("H"))  );
    h_sspndd->SetLabel(import_aero(_T("SSPNDD"),_("H"))  );
    h_sspne->SetLabel(import_aero(_T("SSPNE"),_("H"))  );
    h_savsi->SetLabel(import_aero(_T("SAVSI"),_("H"))  );




//_caseid->SetLabel(tmp_str);
}




void MainFrame::append_text(wxString tmp1, wxString tmp2, wxString tmp3)
{

    wxString tmp;
    tmp=tmp1 + tmp2 + tmp3;
    if (tmp2.IsEmpty())
        return;
    else
    m_log_txt->AppendText(tmp);

}

void MainFrame::OnGenerateDat( wxCommandEvent& event )
{


// TODO: Implement OnGenerateDat
    m_log_txt->Clear();



    append_text(_("CASEID="),_caseid->GetValue(),_("\n\n")); // CASEID


// UNIT SYSTEM
    append_text(_(""),_("DIM ") + _working_units->GetStringSelection(),_("\n")); // DIM


// DERIVATIVES
    append_text(_(""),_("DERIV ") + _derivs->GetStringSelection(),_("\n")); // DERIV

// DAMP BUILD PLOT
    append_text(_(""),_("DAMP "),_("\n")); // DIM
    append_text(_(""),_("BUILD "),_("\n")); // DIM
    append_text(_(""),_("PLOT "),_("\n")); // DIM
    append_text(_(""),_("PART "),_("\n")); // DIM


if(_dump->GetValue()==true)
    append_text(_(""),_("DUMP CASE "),_("\n")); // DUMP CASE


// AEROFOILS
    wxString naca_prefix=_("NACA");
    wxString naca_airfoil;
    wxString str;
    wxString w_airfoil,h_airfoil,v_airfoil;
    wxString row = wxString::Format(_T("%d"), w_naca_series->GetRowCount());
    // int selected = wxString::Format(_T("%d"), w_naca_series->GetSelection());
    int selected;


    selected = w_naca_series->GetSelection();
    w_airfoil = w_airfoil_name->GetValue();
    switch (selected)
    {
    case 0: // NACA 1 SERIES
    str=_("W-1");
        break;

    case 1: // NACA 2
    str=_("W-2");
        break;

    case 2: // NACA 4
    str=_("W-4");

        break;

    case 3: // NACA 5
    str=_("W-5");

        break;

    case 4: // NACA 6
        str=_("W-6");
        break;

    case 5: // CUSTOM
        break;

    }

    naca_airfoil= naca_prefix + _("-") + str + _("-") + w_airfoil + _("\n");
    append_text(_(""), naca_airfoil,_(""));


// VERTICAL


    selected = v_naca_series->GetSelection();
    v_airfoil = v_airfoil_name->GetValue();
    switch (selected)
    {
    case 0: // NACA 1 SERIES
    str=_("V-1");
        break;

    case 1: // NACA 2
    str=_("V-2");
        break;

    case 2: // NACA 4
    str=_("V-4");

        break;

    case 3: // NACA 5
    str=_("V-5");

        break;

    case 4: // NACA 6
        str=_("V-6");
        break;

    case 5: // CUSTOM
        break;

    }

    naca_airfoil= naca_prefix + _("-") + str + _("-") + v_airfoil + _("\n");
    append_text(_(""), naca_airfoil,_(""));



// HORIZONTAL


    selected = h_naca_series->GetSelection();
    h_airfoil = h_airfoil_name->GetValue();
    switch (selected)
    {
    case 0: // NACA 1 SERIES
    str=_("H-1");
        break;

    case 1: // NACA 2
    str=_("H-2");
        break;

    case 2: // NACA 4
    str=_("H-4");

        break;

    case 3: // NACA 5
    str=_("H-5");

        break;

    case 4: // NACA 6
    str=_("H-6");
        break;

    case 5: // CUSTOM
        break;

    }

    naca_airfoil= naca_prefix + _("-") + str + _("-") + h_airfoil + _("\n");
    append_text(_(""), naca_airfoil,_(""));



// FLIGHT START
    append_text(_("$"), _("FLTCON"),_(" "));
    append_text(_(" NMACH=") , _nmach->GetValue() , _(",\n")) ;
    append_text(_(" MACH(1)=") , _mach->GetValue() , _(",\n")) ;
    append_text(_(" NALPHA=") , _nalpha->GetValue() , _(",\n")) ;
    append_text(_(" ALSCHD(1)=") , _alschd->GetValue() , _(",\n")) ;
    append_text(_(" NALT=") , _nalt->GetValue() , _(",\n")) ;
    append_text(_(" ALT=") , _alt->GetValue() , _(",\n")) ;
    append_text(_(" RNNUB(1)=") , _rnnub->GetValue() , _(",\n")) ;

    if(_loop->GetValue().IsEmpty())
        _loop->SetLabel(_("1.0"));
    append_text(_("LOOP=") ,_loop->GetValue() , _("$\n\n"));   // LAST FLIGHT
// FLIGHT END


// OPTIONS START
    append_text(_("$"), _("OPTINS"),_(" "));
    append_text(_(" SREF=") , _sref->GetValue() , _(",\n")) ;
    append_text(_(" CBARR=") , _cbarr->GetValue() , _(",\n")) ;
    append_text(_(" BLREF=") , _blref->GetValue() , _(",\n")) ;
    if(_rougfc->GetValue().IsEmpty())
        _rougfc->SetLabel(_("0.16E-3"));
    append_text(_("ROUGFC=") ,_rougfc->GetValue() , _("$\n\n"));   // LAST OPTIONS
// OPTIONS END

// SYNTHS START
    append_text(_("$"), _("SYNTHS"),_(" "));
    append_text(_(" XCG=") , _xcg->GetValue() , _(",\n")) ;
    append_text(_(" ZCG=") , _zcg->GetValue() , _(",\n")) ;
    append_text(_(" XW=") , _xw->GetValue() , _(",\n")) ;
    append_text(_(" ZW=") , _zw->GetValue() , _(",\n")) ;
    append_text(_(" ALIW=") , _aliw->GetValue() , _(",\n")) ;
    append_text(_(" XH=") , _xh->GetValue() , _(",\n")) ;
    append_text(_(" ZH=") , _zh->GetValue() , _(",\n")) ;
    append_text(_(" ALIH=") , _alih->GetValue() , _(",\n")) ;
    append_text(_(" XV=") , _xv->GetValue() , _(",\n")) ;
    append_text(_(" ZV=") , _zv->GetValue() , _(",\n")) ;

    if(_scale->GetValue().IsEmpty())
        _scale->SetLabel(_("1.0"));
    append_text(_("SCALE=") ,_scale->GetValue() , _("$\n\n"));   // LAST SYNTHS
// SYNTHS END

// BODY START
    append_text(_("$"), _("BODY"),_(" "));
    append_text(_("NX=") , _nx->GetValue() , _(",\n")) ;
    append_text(_(" X(1)=") , _x->GetValue() , _(",\n")) ;
    append_text(_(" R(1)=") , _r->GetValue() , _(",\n")) ;
    append_text(_(" S(1)=") , _s->GetValue() , _(",\n")) ;
    append_text(_(" P(1)=") , _p->GetValue() , _(",\n")) ;
    append_text(_(" BNOSE=") , _bnose->GetValue() , _(",\n")) ;
    append_text(_(" BLN=") , _bln->GetValue() , _(",\n")) ;
    append_text(_(" BLA=") , _bla->GetValue() , _(",\n")) ;
    append_text(_(" ZU(1)=") , _zu->GetValue() , _(",\n")) ;
    append_text(_(" ZL(1)=") , _zl->GetValue() , _(",\n")) ;
    append_text(_(" DS=") , _ds->GetValue() , _(",\n")) ;

    if(_method->GetValue().IsEmpty())
        _method->SetLabel(_("1.0"));
    append_text (_("METHOD=") ,_method->GetValue() , _("$\n\n"));   // LAST BODY
// BODY END


// WING START
    append_text(_("$"), _("WGPLNF"),_(" "));
    append_text(_(" CHRDR=") , w_chrdr->GetValue() , _(",\n")) ;
    append_text(_(" CHRDBP=") , w_chrdbp->GetValue() , _(",\n")) ;
    append_text(_(" CHRDTP=") , w_chrdtp->GetValue() , _(",\n")) ;
    append_text(_(" SSPNOP=") , w_sspnop->GetValue() , _(",\n")) ;
    append_text(_(" SSPN=") , w_sspn->GetValue() , _(",\n")) ;
    append_text(_(" SSPNE=") , w_sspne->GetValue() , _(",\n")) ;
    append_text(_(" SAVSI=") , w_savsi->GetValue() , _(",\n")) ;
    append_text(_(" SAVSO=") , w_savso->GetValue() , _(",\n")) ;
    append_text(_(" CHSTAT=") , w_chstat->GetValue() , _(",\n")) ;
    append_text(_(" SSPNDD=") , w_sspndd->GetValue() , _(",\n")) ;
    append_text(_(" TWISTA=") , w_twista->GetValue() , _(",\n")) ;
    append_text(_(" DHDADI=") , w_dhdadi->GetValue() , _(",\n")) ;
    append_text(_(" DHDADO=") , w_dhdado->GetValue() , _(",\n")) ;

    if(w_type->GetValue().IsEmpty())
        w_type->SetLabel(_("1.0"));
    append_text (_("TYPE=") ,w_type->GetValue() , _("$\n\n"));   // LAST WING
// WING END

// VERTICAL START
    append_text(_("$"), _("VTPLNF"),_(" "));
    append_text(_(" CHRDR=") , v_chrdr->GetValue() , _(",\n")) ;
    append_text(_(" CHRDBP=") , v_chrdbp->GetValue() , _(",\n")) ;
    append_text(_(" CHRDTP=") , v_chrdtp->GetValue() , _(",\n")) ;
    append_text(_(" SSPNOP=") , v_sspnop->GetValue() , _(",\n")) ;
    append_text(_(" SSPN=") , v_sspn->GetValue() , _(",\n")) ;
    append_text(_(" SSPNE=") , v_sspne->GetValue() , _(",\n")) ;
    append_text(_(" SAVSI=") , v_savsi->GetValue() , _(",\n")) ;
    append_text(_(" CHSTAT=") , v_chstat->GetValue() , _(",\n")) ;

    append_text(_(" SVWB(1)=") , v_svwb->GetValue() , _(",\n")) ;
    append_text(_(" SVB(1)=") , v_svb->GetValue() , _(",\n")) ;
    append_text(_(" SVHB(1)=") , v_svhb->GetValue() , _(",\n")) ;


    if(v_type->GetValue().IsEmpty())
        v_type->SetLabel(_("1.0"));
    append_text (_("TYPE=") ,v_type->GetValue() , _("$\n\n"));   // LAST VERTICAL
// VERTICAL END

// HORIZONTAL START
    append_text(_("$"), _("HTPLNF"),_(" "));
    append_text(_(" CHRDR=") , h_chrdr->GetValue() , _(",\n")) ;
    append_text(_(" CHRDBP=") , h_chrdbp->GetValue() , _(",\n")) ;
    append_text(_(" CHRDTP=") , h_chrdtp->GetValue() , _(",\n")) ;
    append_text(_(" SSPNOP=") , h_sspnop->GetValue() , _(",\n")) ;
    append_text(_(" SSPN=") , h_sspn->GetValue() , _(",\n")) ;
    append_text(_(" SSPNE=") , h_sspne->GetValue() , _(",\n")) ;
    append_text(_(" SAVSI=") , h_savsi->GetValue() , _(",\n")) ;
    append_text(_(" CHSTAT=") , h_chstat->GetValue() , _(",\n")) ;
    append_text(_(" SSPNDD=") , h_sspndd->GetValue() , _(",\n")) ;
    append_text(_(" TWISTA=") , h_twista->GetValue() , _(",\n")) ;
    append_text(_(" DHDADI=") , h_dhdadi->GetValue() , _(",\n")) ;
    append_text(_(" SHB(1)=") , h_shb->GetValue() , _(",\n")) ;
    append_text(_(" SEXT(1)=") , h_sext->GetValue() , _(",\n")) ;
    append_text(_(" RLPH=") , h_rlph->GetValue() , _(",\n")) ;

    if(h_type->GetValue().IsEmpty())
        h_type->SetLabel(_("1.0"));
    append_text (_("TYPE=") ,h_type->GetValue() , _("$\n\n"));   // LAST HORIZONTAL
// HORIZONTAL END





}

void MainFrame::OnSave(wxCommandEvent& event)
{
    // SAVE AND OPEN NOTEPAD++
 wxFileDialog *openFileDialog = new wxFileDialog(this,wxEmptyString, wxEmptyString,wxEmptyString,
              wxT("DATCOM+ Input (*.dcm)|*.dcm|Classical Datcom Input (for005.dat)|for005.dat|Datcom Input (*.inp)|*.inp|Txt files (*.txt)|*.txt"),
              wxFD_SAVE+wxFD_PREVIEW+wxFD_OVERWRITE_PROMPT+wxFD_CHANGE_DIR);

openFileDialog->ShowModal();

    wxMessageDialog *dial = new wxMessageDialog(NULL,
      wxT("Open Datcom data file in editor?"), wxT("Question"),
      wxYES_NO | wxNO_DEFAULT | wxICON_QUESTION);

project_file=openFileDialog->GetFilename();
project_folder=openFileDialog->GetDirectory();
project_file_full_path=openFileDialog->GetPath();

    if(_caseid->GetValue().IsEmpty()) // CHECK CASEID
        _caseid->SetLabel(project_file);


if (project_file_full_path.IsEmpty())

    return;
    else
    m_log_txt->SaveFile(project_file_full_path);
    if (dial->ShowModal() == wxID_YES){

    wxString cmd;
    cmd=_("notepad++.exe ")+project_file_full_path;
    wxExecute(cmd, wxEXEC_ASYNC);

    }
}


void MainFrame::OnCompare( wxCommandEvent& event )
{
// TODO: Implement OnCompare
}



void MainFrame::OnPlotAircraft( wxCommandEvent& event ){

wxString folder;
  wxFileDialog *openFileDialog = new wxFileDialog(this,wxEmptyString, wxEmptyString,wxEmptyString,
      wxT("DATCOM+ Input (*.dcm)|*.dcm|Classical Datcom Input (for005.dat)|for005.dat|Datcom Input (*.inp)|*.inp|Txt files (*.txt)|*.txt"));



  if (openFileDialog->ShowModal() == wxID_OK){
      fileName = openFileDialog->GetPath();
      file = openFileDialog->GetFilename();
      folder = openFileDialog->GetDirectory();
//      wxSetWorkingDirectory(folder);
  }


    if (openFileDialog->GetPath().IsEmpty())
        return;
    file=openFileDialog->GetPath();
    wxShell(_("modeler.exe ")+ file + _(">")+file+_(".ac"));
    wxShell(_("ac3dview.exe ")+file+_(".ac"));
    }
void MainFrame::OnRunDatcom( wxCommandEvent& event ){

     // SAVE AND OPEN NOTEPAD++
 wxFileDialog *openFileDialog = new wxFileDialog(this,wxEmptyString, wxEmptyString,wxEmptyString,
              wxT("DATCOM+ Input (*.dcm)|*.dcm|Classical Datcom Input (for005.dat)|for005.dat|Datcom Input (*.inp)|*.inp|Txt files (*.txt)|*.txt"),
   wxFD_OPEN+wxFD_FILE_MUST_EXIST+wxFD_CHANGE_DIR);


openFileDialog->ShowModal();


project_file=openFileDialog->GetFilename();
project_folder=openFileDialog->GetDirectory();
project_file_full_path=openFileDialog->GetPath();


if (project_file_full_path.IsEmpty())

    return;
    else
    wxShell(_("datcom.bat ") + project_file_full_path);



}
void MainFrame::OnPlotResults( wxCommandEvent& event ){


 wxFileDialog *openXML = new wxFileDialog(this,wxEmptyString, wxEmptyString,wxEmptyString,
              wxT("JSB Sim Data(*.xml)|*.xml"),
   wxFD_OPEN+wxFD_FILE_MUST_EXIST+wxFD_CHANGE_DIR);

    openXML->ShowModal();

project_file=openXML->GetFilename();
project_folder=openXML->GetDirectory();
project_file_full_path=openXML->GetPath();


    wxShell(_("jiff.bat ") + project_file_full_path);
    wxPuts(_("-------------------------------------------"));


}
void MainFrame::OnClear( wxCommandEvent& event ){
	MainFrame *frame = new MainFrame(NULL);
    frame->SetIcon(wxICON(datcom)); // To Set App Icon
    frame->Show();
}


void MainFrame::OnPlotData( wxCommandEvent& event ){
wxString plt_data;
 wxFileDialog *openPLT = new wxFileDialog(this,wxEmptyString, wxEmptyString,wxEmptyString,
              wxT("GNU Plot Script(*.plt)|*.plt"),
   wxFD_OPEN+wxFD_FILE_MUST_EXIST+wxCHANGE_DIR);

    openPLT->ShowModal();

plt_data=openPLT->GetPath();

wxString plot_cmd;
plot_cmd =_("wgnuplot.exe ") + plt_data + _("  -persist");
wxExecute(plot_cmd,wxEXEC_ASYNC);


}
