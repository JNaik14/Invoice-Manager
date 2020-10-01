#ifndef ITEMSADDNEW_H
#define ITEMSADDNEW_H

#ifndef WX_PRECOMP
//(*HeadersPCH(ItemsAddNew)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)
#endif
//(*Headers(ItemsAddNew)
#include <wx/spinctrl.h>
//*)

class ItemsAddNew: public wxDialog
{
public:

    ItemsAddNew(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
    virtual ~ItemsAddNew();

    //(*Declarations(ItemsAddNew)
    wxButton* Button1;
    wxButton* Cancel;
    wxButton* Clear;
    wxSpinCtrl* CGST;
    wxSpinCtrl* Cess;
    wxSpinCtrl* Quantity;
    wxSpinCtrl* SGST;
    wxSpinCtrlDouble* HSN;
    wxSpinCtrlDouble* UnitCost;
    wxStaticText* StaticText1;
    wxStaticText* StaticText2;
    wxStaticText* StaticText3;
    wxStaticText* StaticText4;
    wxStaticText* StaticText5;
    wxStaticText* StaticText6;
    wxStaticText* StaticText7;
    wxStaticText* StaticText8;
    wxTextCtrl* Description;
    wxTextCtrl* Name;
    //*)

protected:

    //(*Identifiers(ItemsAddNew)
    static const long ID_STATICTEXT1;
    static const long ID_TEXTCTRL1;
    static const long ID_STATICTEXT2;
    static const long ID_TEXTCTRL2;
    static const long ID_STATICTEXT3;
    static const long ID_SPINCTRL4;
    static const long ID_STATICTEXT4;
    static const long ID_SPINCTRLDOUBLE2;
    static const long ID_STATICTEXT5;
    static const long ID_SPINCTRLDOUBLE1;
    static const long ID_STATICTEXT6;
    static const long ID_SPINCTRL1;
    static const long ID_STATICTEXT7;
    static const long ID_SPINCTRL3;
    static const long ID_STATICTEXT8;
    static const long ID_SPINCTRL2;
    static const long ID_BUTTON2;
    //*)

private:

    //(*Handlers(ItemsAddNew)
    void OnClearClick(wxCommandEvent& event);
    //*)

    DECLARE_EVENT_TABLE()
};

#endif
