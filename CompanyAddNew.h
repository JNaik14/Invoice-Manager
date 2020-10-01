#ifndef COMPANYADDNEW_H
#define COMPANYADDNEW_H

#ifndef WX_PRECOMP
//(*HeadersPCH(CompanyAddNew)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)
#endif
//(*Headers(CompanyAddNew)
#include <wx/spinctrl.h>
//*)

class CompanyAddNew: public wxDialog
{
public:

    CompanyAddNew(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
    virtual ~CompanyAddNew();

    //(*Declarations(CompanyAddNew)
    wxButton* Button1;
    wxButton* Button2;
    wxButton* Clear;
    wxSpinCtrl* Zip;
    wxStaticText* BillToStatic;
    wxStaticText* StaticText1;
    wxStaticText* StaticText3;
    wxStaticText* StaticText4;
    wxStaticText* StaticText5;
    wxStaticText* StaticText6;
    wxStaticText* StaticText9;
    wxTextCtrl* Address;
    wxTextCtrl* BillTo;
    wxTextCtrl* City;
    wxTextCtrl* Country;
    wxTextCtrl* GSTIN;
    wxTextCtrl* Name;
    //*)

protected:

    //(*Identifiers(CompanyAddNew)
    static const long ID_STATICTEXT1;
    static const long ID_TEXTCTRL1;
    static const long ID_STATICTEXT2;
    static const long ID_TEXTCTRL2;
    static const long ID_STATICTEXT9;
    static const long ID_TEXTCTRL3;
    static const long ID_STATICTEXT3;
    static const long ID_TEXTCTRL4;
    static const long ID_STATICTEXT5;
    static const long ID_TEXTCTRL5;
    static const long ID_STATICTEXT6;
    static const long ID_TEXTCTRL6;
    static const long ID_STATICTEXT4;
    static const long ID_SPINCTRL1;
    static const long ID_BUTTON1;
    //*)

private:

    //(*Handlers(CompanyAddNew)
    void OnClearClick(wxCommandEvent& event);
    //*)

    DECLARE_EVENT_TABLE()
};

#endif
