#ifndef DELETEROWS_H
#define DELETEROWS_H

#ifndef WX_PRECOMP
	//(*HeadersPCH(DeleteRows)
	#include <wx/button.h>
	#include <wx/dialog.h>
	#include <wx/sizer.h>
	#include <wx/stattext.h>
	#include <wx/textctrl.h>
	//*)
#endif
//(*Headers(DeleteRows)
//*)

class DeleteRows: public wxDialog
{
	public:

		DeleteRows(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~DeleteRows();

		//(*Declarations(DeleteRows)
		wxButton* Cancel;
		wxButton* Ok;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxStaticText* StaticText3;
		wxTextCtrl* From;
		wxTextCtrl* To;
		//*)

	protected:

		//(*Identifiers(DeleteRows)
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT2;
		static const long ID_TEXTCTRL1;
		static const long ID_STATICTEXT3;
		static const long ID_TEXTCTRL2;
		//*)

	private:

		//(*Handlers(DeleteRows)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
