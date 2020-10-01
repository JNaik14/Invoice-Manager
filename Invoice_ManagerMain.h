/***************************************************************
 * Name:      Invoice_ManagerMain.h
 * Purpose:   Defines Application Frame
 * Author:    Jugal Naik (jugalnaik14@gmail.com)
 * Created:   2020-09-16
 * Copyright: Jugal Naik (jugal.tk)
 * License:
 **************************************************************/

#ifndef INVOICE_MANAGERMAIN_H
#define INVOICE_MANAGERMAIN_H

//(*Headers(Invoice_ManagerFrame)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/grid.h>
#include <wx/menu.h>
#include <wx/notebook.h>
#include <wx/panel.h>
#include <wx/sizer.h>
#include <wx/statusbr.h>
//*)
#include "Invoice.h"

class Invoice_ManagerFrame: public wxFrame
{
public:

    Invoice_ManagerFrame(wxWindow* parent,wxWindowID id = -1);
    virtual ~Invoice_ManagerFrame();
    Invoice inv;

private:
    void StartUp();
    //(*Handlers(Invoice_ManagerFrame)
    void OnQuit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
    void OnButton1Click(wxCommandEvent& event);
    void OnClearClick(wxCommandEvent& event);
    void OnAddNewInvoiceSelected(wxCommandEvent& event);
    void OnAddSalesOrderClick(wxCommandEvent& event);
    void OnAddNewItemsClick(wxCommandEvent& event);
    void OnAddNewClientClick(wxCommandEvent& event);
    void OnAddNewInvoiceClick(wxCommandEvent& event);
    void OnEditOwnerSelected(wxCommandEvent& event);
    void OnDeleteClientClick(wxCommandEvent& event);
    void OnDeleteItemsClick(wxCommandEvent& event);
    void OnDeleteInvoiceClick(wxCommandEvent& event);
    //*)

    //(*Identifiers(Invoice_ManagerFrame)
    static const long ID_GRID1;
    static const long ID_BUTTON2;
    static const long ID_BUTTON5;
    static const long ID_GRID2;
    static const long ID_BUTTON6;
    static const long ID_BUTTON7;
    static const long ID_GRID3;
    static const long ID_BUTTON8;
    static const long ID_BUTTON9;
    static const long ID_BUTTON1;
    static const long ID_BUTTON3;
    static const long ID_BUTTON4;
    static const long ID_PANEL1;
    static const long ID_PANEL2;
    static const long ID_PANEL3;
    static const long ID_PANEL4;
    static const long ID_NOTEBOOK1;
    static const long ID_EditOwner;
    static const long ID_MENUITEM1;
    static const long idMenuQuit;
    static const long ID_AddNewInvoice;
    static const long ID_MENUITEM2;
    static const long ID_MENUITEM3;
    static const long ID_AddNew;
    static const long ID_QuickInvoice;
    static const long ID_InvoiceList;
    static const long ID_AddSaleOrder;
    static const long ID_SaleOrderList;
    static const long ID_AddNewPurchase;
    static const long ID_AddPurchaseOrder;
    static const long ID_PurchaseRecorderList;
    static const long ID_PurchaseOrderList;
    static const long ID_MENUITEM11;
    static const long ID_MENUITEM12;
    static const long ID_MENUITEM13;
    static const long ID_MENUITEM14;
    static const long ID_MENUITEM15;
    static const long idMenuAbout;
    static const long ID_STATUSBAR1;
    static const long ID_MENUITEM4;
    //*)

    //(*Declarations(Invoice_ManagerFrame)
    wxButton* AddNewClient;
    wxButton* AddNewInvoice;
    wxButton* AddNewItems;
    wxButton* AddSalesOrder;
    wxButton* Button1;
    wxButton* Button3;
    wxButton* DeleteClient;
    wxButton* DeleteInvoice;
    wxButton* DeleteItems;
    wxGrid* ClientsList;
    wxGrid* InvoicesList;
    wxGrid* ItemsList;
    wxMenu Menu7;
    wxMenu* Menu3;
    wxMenu* Menu4;
    wxMenu* Menu5;
    wxMenu* Menu6;
    wxMenu* MenuItem4;
    wxMenuItem* DeleteRow;
    wxMenuItem* EditOwner;
    wxMenuItem* MenuItem10;
    wxMenuItem* MenuItem11;
    wxMenuItem* MenuItem12;
    wxMenuItem* MenuItem13;
    wxMenuItem* MenuItem14;
    wxMenuItem* MenuItem15;
    wxMenuItem* MenuItem16;
    wxMenuItem* MenuItem17;
    wxMenuItem* MenuItem18;
    wxMenuItem* MenuItem19;
    wxMenuItem* MenuItem20;
    wxMenuItem* MenuItem3;
    wxMenuItem* MenuItem5;
    wxMenuItem* MenuItem6;
    wxMenuItem* MenuItem7;
    wxMenuItem* MenuItem8;
    wxMenuItem* MenuItem9;
    wxNotebook* Notebook1;
    wxPanel* Panel1;
    wxPanel* Panel2;
    wxPanel* Panel3;
    wxPanel* Panel4;
    wxStatusBar* StatusBar1;
    //*)

    DECLARE_EVENT_TABLE()
};

#endif // INVOICE_MANAGERMAIN_H
