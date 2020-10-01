/***************************************************************
 * Name:      Invoice_ManagerApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Jugal Naik (jugalnaik14@gmail.com)
 * Created:   2020-09-16
 * Copyright: Jugal Naik (jugal.tk)
 * License:
 **************************************************************/

#include "wx_pch.h"
#include "Invoice_ManagerApp.h"

//(*AppHeaders
#include "Invoice_ManagerMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(Invoice_ManagerApp);

bool Invoice_ManagerApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	Invoice_ManagerFrame* Frame = new Invoice_ManagerFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
