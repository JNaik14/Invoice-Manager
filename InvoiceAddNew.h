#ifndef INVOICEADDNEW_H
#define INVOICEADDNEW_H

#ifndef WX_PRECOMP
	//(*HeadersPCH(InvoiceAddNew)
	#include <wx/button.h>
	#include <wx/checklst.h>
	#include <wx/combobox.h>
	#include <wx/dialog.h>
	#include <wx/sizer.h>
	#include <wx/stattext.h>
	#include <wx/textctrl.h>
	//*)
#endif
//(*Headers(InvoiceAddNew)
#include <wx/datectrl.h>
#include <wx/dateevt.h>
//*)

#include "Invoice.h"
#include "Clients.h"

class InvoiceAddNew: public wxDialog
{
	public:

		InvoiceAddNew(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~InvoiceAddNew();

		//(*Declarations(InvoiceAddNew)
		wxButton* AddClient;
		wxButton* AddItem;
		wxButton* Button4;
		wxButton* Next;
		wxCheckListBox* ItemsList;
		wxComboBox* ClientSelect;
		wxDatePickerCtrl* DueDate;
		wxDatePickerCtrl* InvoiceDate;
		wxStaticText* Address;
		wxStaticText* Name;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxStaticText* StaticText3;
		wxStaticText* StaticText4;
		wxStaticText* Total;
		wxTextCtrl* InvoiceID;
		wxTextCtrl* OrderNo;
		//*)

		Clients C;
		Items I;

	protected:

		//(*Identifiers(InvoiceAddNew)
		static const long ID_COMBOBOX1;
		static const long ID_BUTTON1;
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT2;
		static const long ID_STATICTEXT3;
		static const long ID_TEXTCTRL1;
		static const long ID_STATICTEXT6;
		static const long ID_TEXTCTRL2;
		static const long ID_STATICTEXT4;
		static const long ID_DATEPICKERCTRL1;
		static const long ID_STATICTEXT5;
		static const long ID_DATEPICKERCTRL2;
		static const long ID_BUTTON2;
		static const long ID_ITEMLIST;
		static const long ID_STATICTEXT8;
		//*)

	private:

		//(*Handlers(InvoiceAddNew)
		void OnAddClientClick(wxCommandEvent& event);
		void OnAddItemClick(wxCommandEvent& event);
		void OnItemsListDClick(wxCommandEvent& event);
		void OnClientSelectSelected(wxCommandEvent& event);
		void OnItemsListToggled(wxCommandEvent& event);
		void OnNextClick(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
