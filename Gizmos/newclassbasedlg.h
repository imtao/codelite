//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: newclasswizard.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef NEWCLASSWIZARD_BASE_CLASSES_H
#define NEWCLASSWIZARD_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/dialog.h>
#include <wx/iconbndl.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/button.h>
#include <wx/checkbox.h>
#include <wx/collpane.h>
#include <wx/listctrl.h>
#include <wx/choice.h>
#include <wx/arrstr.h>

class NewClassBaseDlg : public wxDialog
{
protected:
    wxStaticText* m_staticText1;
    wxTextCtrl* m_textClassName;
    wxStaticText* m_staticText9;
    wxStaticText* m_staticTextNamespace;
    wxTextCtrl* m_textCtrlNamespace;
    wxButton* m_buttonBrowseNamespaces;
    wxStaticText* m_staticText6;
    wxTextCtrl* m_textCtrlBlockGuard;
    wxStaticText* m_staticText4;
    wxTextCtrl* m_textCtrlVD;
    wxButton* m_buttonSelectVD;
    wxStaticText* m_staticText2;
    wxTextCtrl* m_textCtrlGenFilePath;
    wxButton* m_buttonBrowseFolder;
    wxStaticText* m_staticText8;
    wxCheckBox* m_checkBoxInline;
    wxCheckBox* m_checkBoxHpp;
    wxTextCtrl* m_textCtrlFileName;
    wxCollapsiblePane* m_collPane2;
    wxStaticText* m_staticText7;
    wxListCtrl* m_listCtrl1;
    wxButton* m_buttonAddInheritance;
    wxButton* m_buttonDelInheritance;
    wxCheckBox* m_checkBoxCopyable;
    wxCheckBox* m_checkBoxImplVirtual;
    wxCheckBox* m_checkBoxSingleton;
    wxCheckBox* m_checkBoxImplPureVirtual;
    wxCheckBox* m_checkBoxVirtualDtor;
    wxButton* m_buttonOK;
    wxButton* m_buttonCancel;

protected:
    virtual void OnTextEnter(wxCommandEvent& event) { event.Skip(); }
    virtual void OnBrowseNamespace(wxCommandEvent& event) { event.Skip(); }
    virtual void OnBrowseVD(wxCommandEvent& event) { event.Skip(); }
    virtual void OnBrowseFolder(wxCommandEvent& event) { event.Skip(); }
    virtual void OnCheckInline(wxCommandEvent& event) { event.Skip(); }
    virtual void OnListItemActivated(wxListEvent& event) { event.Skip(); }
    virtual void OnListItemDeSelected(wxListEvent& event) { event.Skip(); }
    virtual void OnListItemSelected(wxListEvent& event) { event.Skip(); }
    virtual void OnButtonAdd(wxCommandEvent& event) { event.Skip(); }
    virtual void OnButtonDelete(wxCommandEvent& event) { event.Skip(); }
    virtual void OnButtonDeleteUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnCheckImpleAllVirtualFunctions(wxCommandEvent& event) { event.Skip(); }
    virtual void OnButtonOK(wxCommandEvent& event) { event.Skip(); }
    virtual void OnOkUpdateUI(wxUpdateUIEvent& event) { event.Skip(); }

public:
    NewClassBaseDlg(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("New Class"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~NewClassBaseDlg();
};


class NewIneritanceBaseDlg : public wxDialog
{
protected:
    wxStaticText* m_staticText20;
    wxTextCtrl* m_textCtrlInhertiance;
    wxButton* m_button24;
    wxStaticText* m_staticText26;
    wxChoice* m_choiceAccess;
    wxStdDialogButtonSizer* m_stdBtnSizer14;
    wxButton* m_button16;
    wxButton* m_button18;

protected:
    virtual void OnButtonMore(wxCommandEvent& event) { event.Skip(); }

public:
    NewIneritanceBaseDlg(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("NewIneritanceDlgBase"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~NewIneritanceBaseDlg();
};

#endif
