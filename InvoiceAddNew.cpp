#include "wx_pch.h"
#include "InvoiceAddNew.h"

#ifndef WX_PRECOMP
//(*InternalHeadersPCH(InvoiceAddNew)
#include <wx/intl.h>
#include <wx/string.h>
//*)
#endif
//(*InternalHeaders(InvoiceAddNew)
#include <wx/font.h>
//*)
#include <wx/event.h>
#include "misc.h"
#include "CompanyAddNew.h"
#include "ItemsAddNew.h"

//(*IdInit(InvoiceAddNew)
const long InvoiceAddNew::ID_COMBOBOX1 = wxNewId();
const long InvoiceAddNew::ID_BUTTON1 = wxNewId();
const long InvoiceAddNew::ID_STATICTEXT1 = wxNewId();
const long InvoiceAddNew::ID_STATICTEXT2 = wxNewId();
const long InvoiceAddNew::ID_STATICTEXT3 = wxNewId();
const long InvoiceAddNew::ID_TEXTCTRL1 = wxNewId();
const long InvoiceAddNew::ID_STATICTEXT6 = wxNewId();
const long InvoiceAddNew::ID_TEXTCTRL2 = wxNewId();
const long InvoiceAddNew::ID_STATICTEXT4 = wxNewId();
const long InvoiceAddNew::ID_DATEPICKERCTRL1 = wxNewId();
const long InvoiceAddNew::ID_STATICTEXT5 = wxNewId();
const long InvoiceAddNew::ID_DATEPICKERCTRL2 = wxNewId();
const long InvoiceAddNew::ID_BUTTON2 = wxNewId();
const long InvoiceAddNew::ID_ITEMLIST = wxNewId();
const long InvoiceAddNew::ID_STATICTEXT8 = wxNewId();
//*)

BEGIN_EVENT_TABLE(InvoiceAddNew,wxDialog)
    //(*EventTable(InvoiceAddNew)
    //*)
END_EVENT_TABLE()

InvoiceAddNew::InvoiceAddNew(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
    //(*Initialize(InvoiceAddNew)
    wxBoxSizer* BoxSizer10;
    wxBoxSizer* BoxSizer11;
    wxBoxSizer* BoxSizer12;
    wxBoxSizer* BoxSizer13;
    wxBoxSizer* BoxSizer14;
    wxBoxSizer* BoxSizer15;
    wxBoxSizer* BoxSizer16;
    wxBoxSizer* BoxSizer17;
    wxBoxSizer* BoxSizer1;
    wxBoxSizer* BoxSizer2;
    wxBoxSizer* BoxSizer3;
    wxBoxSizer* BoxSizer4;
    wxBoxSizer* BoxSizer5;
    wxBoxSizer* BoxSizer6;
    wxBoxSizer* BoxSizer7;
    wxBoxSizer* BoxSizer8;
    wxBoxSizer* BoxSizer9;
    wxStaticBoxSizer* StaticBoxSizer1;
    wxStaticBoxSizer* StaticBoxSizer2;
    wxStaticBoxSizer* StaticBoxSizer3;
    wxStaticBoxSizer* StaticBoxSizer4;

    Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("wxID_ANY"));
    BoxSizer1 = new wxBoxSizer(wxVERTICAL);
    StaticBoxSizer1 = new wxStaticBoxSizer(wxVERTICAL, this, _("Client"));
    BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
    ClientSelect = new wxComboBox(this, ID_COMBOBOX1, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_COMBOBOX1"));
    BoxSizer2->Add(ClientSelect, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    AddClient = new wxButton(this, ID_BUTTON1, _("Add Client"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    BoxSizer2->Add(AddClient, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticBoxSizer1->Add(BoxSizer2, 0, wxEXPAND, 5);
    StaticBoxSizer2 = new wxStaticBoxSizer(wxHORIZONTAL, this, _("Details"));
    BoxSizer5 = new wxBoxSizer(wxVERTICAL);
    BoxSizer13 = new wxBoxSizer(wxHORIZONTAL);
    Name = new wxStaticText(this, ID_STATICTEXT1, _("Name"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    wxFont NameFont(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    Name->SetFont(NameFont);
    BoxSizer13->Add(Name, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer5->Add(BoxSizer13, 1, wxEXPAND, 5);
    BoxSizer15 = new wxBoxSizer(wxHORIZONTAL);
    Address = new wxStaticText(this, ID_STATICTEXT2, _("Address"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    BoxSizer15->Add(Address, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer5->Add(BoxSizer15, 1, wxEXPAND, 5);
    StaticBoxSizer2->Add(BoxSizer5, 1, wxALIGN_TOP, 5);
    StaticBoxSizer1->Add(StaticBoxSizer2, 0, wxBOTTOM|wxLEFT|wxRIGHT|wxEXPAND, 5);
    BoxSizer1->Add(StaticBoxSizer1, 0, wxALL|wxEXPAND, 5);
    BoxSizer3 = new wxBoxSizer(wxVERTICAL);
    BoxSizer6 = new wxBoxSizer(wxHORIZONTAL);
    BoxSizer10 = new wxBoxSizer(wxHORIZONTAL);
    StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("Invoice ID :"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
    BoxSizer10->Add(StaticText3, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    InvoiceID = new wxTextCtrl(this, ID_TEXTCTRL1, _("Text"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    BoxSizer10->Add(InvoiceID, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer6->Add(BoxSizer10, 1, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer11 = new wxBoxSizer(wxHORIZONTAL);
    StaticText4 = new wxStaticText(this, ID_STATICTEXT6, _("Order No. :"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT6"));
    BoxSizer11->Add(StaticText4, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    OrderNo = new wxTextCtrl(this, ID_TEXTCTRL2, _("Text"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
    BoxSizer11->Add(OrderNo, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer6->Add(BoxSizer11, 1, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer3->Add(BoxSizer6, 0, wxEXPAND, 5);
    BoxSizer7 = new wxBoxSizer(wxHORIZONTAL);
    BoxSizer8 = new wxBoxSizer(wxHORIZONTAL);
    StaticText1 = new wxStaticText(this, ID_STATICTEXT4, _("Invoice Date :"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
    BoxSizer8->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    InvoiceDate = new wxDatePickerCtrl(this, ID_DATEPICKERCTRL1, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize, wxDP_DEFAULT|wxDP_DROPDOWN|wxDP_SHOWCENTURY, wxDefaultValidator, _T("ID_DATEPICKERCTRL1"));
    BoxSizer8->Add(InvoiceDate, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer7->Add(BoxSizer8, 1, wxEXPAND, 5);
    BoxSizer9 = new wxBoxSizer(wxHORIZONTAL);
    StaticText2 = new wxStaticText(this, ID_STATICTEXT5, _("Due Date :"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT5"));
    BoxSizer9->Add(StaticText2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    DueDate = new wxDatePickerCtrl(this, ID_DATEPICKERCTRL2, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize, wxDP_DEFAULT|wxDP_DROPDOWN|wxDP_SHOWCENTURY, wxDefaultValidator, _T("ID_DATEPICKERCTRL2"));
    BoxSizer9->Add(DueDate, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer7->Add(BoxSizer9, 1, wxEXPAND, 5);
    BoxSizer3->Add(BoxSizer7, 0, wxEXPAND, 5);
    BoxSizer1->Add(BoxSizer3, 0, wxALL|wxEXPAND, 5);
    StaticBoxSizer3 = new wxStaticBoxSizer(wxVERTICAL, this, _("Items"));
    BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
    AddItem = new wxButton(this, ID_BUTTON2, _("Add Item"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
    BoxSizer4->Add(AddItem, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticBoxSizer3->Add(BoxSizer4, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer12 = new wxBoxSizer(wxHORIZONTAL);
    ItemsList = new wxCheckListBox(this, ID_ITEMLIST, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_ITEMLIST"));
    BoxSizer12->Add(ItemsList, 1, wxALL|wxEXPAND, 5);
    StaticBoxSizer3->Add(BoxSizer12, 1, wxEXPAND, 5);
    BoxSizer16 = new wxBoxSizer(wxHORIZONTAL);
    StaticBoxSizer4 = new wxStaticBoxSizer(wxVERTICAL, this, _("Total Summary"));
    BoxSizer17 = new wxBoxSizer(wxHORIZONTAL);
    Total = new wxStaticText(this, ID_STATICTEXT8, _("Total"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT8"));
    BoxSizer17->Add(Total, 1, wxALL|wxEXPAND, 5);
    StaticBoxSizer4->Add(BoxSizer17, 1, wxALL|wxEXPAND, 5);
    BoxSizer16->Add(StaticBoxSizer4, 1, wxALL|wxEXPAND, 5);
    StaticBoxSizer3->Add(BoxSizer16, 1, wxALL|wxEXPAND, 5);
    BoxSizer1->Add(StaticBoxSizer3, 1, wxALL|wxEXPAND, 5);
    BoxSizer14 = new wxBoxSizer(wxHORIZONTAL);
    Next = new wxButton(this, wxID_OK, _("Next"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("wxID_OK"));
    BoxSizer14->Add(Next, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button4 = new wxButton(this, wxID_CANCEL, _("Cancel"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("wxID_CANCEL"));
    BoxSizer14->Add(Button4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer1->Add(BoxSizer14, 0, wxBOTTOM|wxLEFT|wxRIGHT|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    SetSizer(BoxSizer1);
    BoxSizer1->Fit(this);
    BoxSizer1->SetSizeHints(this);
    Center();

    Connect(ID_COMBOBOX1,wxEVT_COMMAND_COMBOBOX_SELECTED,(wxObjectEventFunction)&InvoiceAddNew::OnClientSelectSelected);
    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&InvoiceAddNew::OnAddClientClick);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&InvoiceAddNew::OnAddItemClick);
    Connect(ID_ITEMLIST,wxEVT_COMMAND_CHECKLISTBOX_TOGGLED,(wxObjectEventFunction)&InvoiceAddNew::OnItemsListToggled);
    Connect(ID_ITEMLIST,wxEVT_COMMAND_LISTBOX_DOUBLECLICKED,(wxObjectEventFunction)&InvoiceAddNew::OnItemsListDClick);
    Connect(wxID_OK,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&InvoiceAddNew::OnNextClick);
    //*)
    I.AddItemsFromFile("Items");
    C.AddClientsFromFile("Clients");
    if(wxFileName::IsFileReadable("Items"))
    {
        for(int i{0}; i<=I.size()-1; ++i)
        {
            ItemsList->AppendAndEnsureVisible(I[i].GetName() + "  |  " + I[i].GetQuantity() + " x " + I[i].GetUnitCost() + " = " + I[i].GetTotal() + " + (" + I[i].GetTax() + ") = Rs. " + I[i].GetGrandTotal());
        }
    }

    if(wxFileName::IsFileReadable("Clients"))
    {
        wxArrayString vec;
        for(int i{0}; i<=C.size()-1; ++i)
        {
            vec.Add(C[i].GetName());
            ClientSelect->Append(C[i].GetName());
        }
        ClientSelect->AutoComplete(vec);
    }

}

InvoiceAddNew::~InvoiceAddNew()
{
    //(*Destroy(InvoiceAddNew)
    //*)
}

class Pdfx : public wxPdfDocument
{
public:
    void SetHeader(const wxString& Title)
    {
        // Helvetica bold 15
        SetFont(wxS("Times"),wxS("B"),20);
        // Move to the right
        Cell(80);
        // Title
        Cell(30,10,Title,wxPDF_BORDER_BOTTOM,0,wxPDF_ALIGN_CENTER);
        // Line break
        Ln();
    }
    void SetOwner(Owner& O)
    {
        Ln();
        SetFont(wxS("Times"),wxS(""),15);
        Write(GetLeftMargin(),O.GetName());
        SetFont(wxS("Times"),wxS(""),12);
        Write(GetLeftMargin(),O.GetExtra());
        Write(GetLeftMargin(),O.GetAddress());
        Write(GetLeftMargin(),O.GetCity()+", "+O.GetCountry()+". "+O.GetzipCode());
        Write(GetLeftMargin(),O.GetGSTIN());
        Ln();
    }
    void GenarateTabel(wxArrayString& header, Items& I, wxArrayInt& arr)
    {
        // Colors, line width and bold font
        SetFillColour(wxColour(255,0,0));
        SetTextColour(255);
        SetDrawColour(wxColour(128,0,0));
        SetLineWidth(.3);
        SetFont("Times",wxS("B"),12);
        //Header
        double w[8] = {40,20,20,30,30,25,25};
        for (int i{0}; i < header.GetCount(); i++)
        {
            Cell(w[i],7,header[i],wxPDF_BORDER_FRAME, 0, wxPDF_ALIGN_CENTER, 1);
        }
        Ln();
        // Color and font restoration
        SetFillColour(wxColour(224,235,255));
        SetTextColour(0);
        SetFont(wxS(""),"",9);
        // Data
        int fill = 0;
        for (int j : arr)
        {
            Cell(w[0],6,I[j].GetName()+" ("+I[j].GetHSN()+")",wxPDF_BORDER_LEFT | wxPDF_BORDER_RIGHT,0,wxPDF_ALIGN_CENTER,fill);
            Cell(w[1],6,I[j].GetQuantity(),wxPDF_BORDER_LEFT | wxPDF_BORDER_RIGHT,0,wxPDF_ALIGN_CENTER,fill);
            Cell(w[2],6,"Rs."+I[j].GetUnitCost(),wxPDF_BORDER_LEFT | wxPDF_BORDER_RIGHT,0,wxPDF_ALIGN_CENTER,fill);
            Cell(w[3],6,"Rs."+I[j].GetCGST(false)+" ("+I[j].GetCGST(true)+"%)",wxPDF_BORDER_LEFT | wxPDF_BORDER_RIGHT,0,wxPDF_ALIGN_CENTER,fill);
            Cell(w[4],6,"Rs."+I[j].GetSGST(false)+" ("+I[j].GetSGST(true)+"%)",wxPDF_BORDER_LEFT | wxPDF_BORDER_RIGHT,0,wxPDF_ALIGN_CENTER,fill);
            Cell(w[5],6,"Rs."+I[j].GetTotal(),wxPDF_BORDER_LEFT | wxPDF_BORDER_RIGHT,0,wxPDF_ALIGN_CENTER,fill);
            Cell(w[6],6,"Rs."+I[j].GetGrandTotal(),wxPDF_BORDER_LEFT | wxPDF_BORDER_RIGHT,0,wxPDF_ALIGN_CENTER,fill);
            Ln();
            fill = 1 - fill;
        }
        Cell((w[0]+w[1]+w[2]+w[3]+w[4]+w[5]+w[6]),0,wxS(""),wxPDF_BORDER_TOP);
        Ln();
    }
};

void InvoiceAddNew::OnAddClientClick(wxCommandEvent& event)
{
    CompanyAddNew Clientt(this);
    Clientt.Name->SetValue("Client's Company Name..");
    Clientt.BillTo->SetValue("Bill To..");
    Clientt.GSTIN->SetValue("Companys GST Identification Number..");
    Clientt.Address->SetValue("Clients Address..");
    Clientt.City->SetValue("City..");
    Clientt.Country->SetValue("Country..");
    if(Clientt.ShowModal()==wxID_OK)
    {
        std::vector<wxString> vec;
        vec.reserve(10);

        GetData(vec,Clientt.Name);
        GetData(vec,Clientt.BillTo);
        GetData(vec,Clientt.GSTIN);
        GetData(vec,Clientt.Address);
        GetData(vec,Clientt.City);
        GetData(vec,Clientt.Country);
        GetData(vec,Clientt.Zip);

        std::fstream file("Clients",std::ios::app);
        Client c;
        c.SetData(vec[0].ToStdString(),vec[1].ToStdString(),vec[2].ToStdString(),vec[3].ToStdString(),vec[4].ToStdString(),vec[5].ToStdString(),vec[6].ToStdString());
        file << c;
        file.close();

        C.AddClient(vec[0].ToStdString(),vec[1].ToStdString(),vec[2].ToStdString(),vec[3].ToStdString(),vec[4].ToStdString(),vec[5].ToStdString(),vec[6].ToStdString());

        wxArrayString arr;
        for(int i{0}; i<=C.size()-1; ++i)
        {
            arr.Add(C[i].GetName());
        }
        ClientSelect->AutoComplete(arr);
        ClientSelect->SetValue(vec[0].ToStdString());
        ClientSelect->Append(vec[0].ToStdString());
        Name->SetLabel(vec[0].ToStdString());
        Address->SetLabel(c.GetAddress()+" , "+c.GetCity()+" , "+c.GetCountry()+" . "+c.GetzipCode());
    }
}

void InvoiceAddNew::OnAddItemClick(wxCommandEvent& event)
{
    std::vector<wxString> vec;
    ItemsAddNew Ite(this);
    if(Ite.ShowModal()==wxID_OK)
    {
        GetData(vec,Ite.Name);
        GetData(vec,Ite.Description);
        GetData(vec,Ite.Quantity);
        GetData(vec,Ite.UnitCost);
        GetData(vec,Ite.HSN);
        GetData(vec,Ite.CGST);
        GetData(vec,Ite.SGST);
        GetData(vec,Ite.Cess);


        std::fstream file("Items",std::ios::app);
        Item i;
        i.SetData(vec[0].ToStdString(),vec[1].ToStdString(),vec[2].ToStdString(),vec[3].ToStdString(),vec[4].ToStdString(),vec[5].ToStdString(),vec[6].ToStdString());
        file << i;
        file.close();

        I.AddItem(vec[0].ToStdString(),vec[1].ToStdString(),vec[2].ToStdString(),vec[3].ToStdString(),vec[4].ToStdString(),vec[5].ToStdString(),vec[6].ToStdString());
        ItemsList->AppendAndEnsureVisible(vec[0].ToStdString() + "  |  " + vec[2].ToStdString() + " x " + vec[3].ToStdString() + " = " + i.GetTotal() + " + (" + i.GetTax() + ") = Rs. " + i.GetGrandTotal());
    }
}

void InvoiceAddNew::OnItemsListDClick(wxCommandEvent& event)
{
    int id{ItemsList->GetSelection()};

    std::vector<std::string> vec;
    ItemsAddNew Ite(this);
    Ite.SetLabel("Edit Item | "+I[id].GetName());
    Ite.Name->SetValue(I[id].GetName());
    Ite.Description->SetValue(I[id].GetDescription());
    Ite.HSN->SetValue(I[id].GetHSN());
    Ite.Quantity->SetValue(I[id].GetQuantity());
    Ite.UnitCost->SetValue(I[id].GetUnitCost());
    Ite.SGST->SetValue(I[id].GetSGST(true));
    Ite.CGST->SetValue(I[id].GetCGST(true));
    if(Ite.ShowModal()==wxID_OK)
    {
        GetData(vec,Ite.Name);
        GetData(vec,Ite.Description);
        GetData(vec,Ite.Quantity);
        GetData(vec,Ite.UnitCost);
        GetData(vec,Ite.HSN);
        GetData(vec,Ite.CGST);
        GetData(vec,Ite.SGST);
        GetData(vec,Ite.Cess);

        I[id].SetData(vec[0],vec[1],vec[2],vec[3],vec[4],vec[5],vec[6]);
    }
    I.SaveItemsToFile("Items");

    ItemsList->SetString(id,I[id].GetName() + "  |  " + I[id].GetQuantity() + " x " + I[id].GetUnitCost() + " = " + I[id].GetTotal() + " + (" + I[id].GetTax() + ") = Rs. " + I[id].GetGrandTotal());
    wxArrayInt arr;
    ItemsList->GetCheckedItems(arr);
    if(!arr.IsEmpty())
    {
        double total{0};
        double Tax{0};
        for(auto i : arr)
        {
            total += std::stod(I[i].GetTotal());
            Tax += std::stod(I[i].GetTax());
        }
        Total->SetLabel(RemoveZeros(std::to_string(total)) + " + " + RemoveZeros(std::to_string(Tax)) + " = Rs. " + RemoveZeros(std::to_string(total+Tax)));
    }
    else
    {
        Total->SetLabel("Total");
    }
}

void InvoiceAddNew::OnClientSelectSelected(wxCommandEvent& event)
{
    int id{ClientSelect->GetCurrentSelection()};
    Name->SetLabel(C[id].GetName());
    Address->SetLabel(C[id].GetAddress()+" , "+C[id].GetCity()+" , "+C[id].GetCountry()+" . "+C[id].GetzipCode());
}

void InvoiceAddNew::OnItemsListToggled(wxCommandEvent& event)
{
    wxArrayInt arr;
    ItemsList->GetCheckedItems(arr);
    if(!arr.IsEmpty())
    {
        double total{0};
        double Tax{0};
        for(auto i : arr)
        {
            total += std::stod(I[i].GetTotal());
            Tax += std::stod(I[i].GetTax());
        }
        Total->SetLabel(RemoveZeros(std::to_string(total)) + " + " + RemoveZeros(std::to_string(Tax)) + " = Rs. " + RemoveZeros(std::to_string(total+Tax)));
    }
    else
    {
        Total->SetLabel("Total");
    }

}


void InvoiceAddNew::OnNextClick(wxCommandEvent& event)
{
    wxArrayString header;
    wxArrayInt arr;
    ItemsList->GetCheckedItems(arr);
    double total{0};
    double Tax{0};
    for(auto i : arr)
    {
        total += std::stod(I[i].GetTotal());
        Tax += std::stod(I[i].GetTax());
    }

    Owner O;
    std::ifstream file("Owner");
    file >> O;

    header.Add(wxS("Name (HSN)"));
    header.Add(wxS("Quantity"));
    header.Add(wxS("Unit Cost"));
    header.Add(wxS("CGST (%)"));
    header.Add(wxS("SGST (%)"));
    header.Add(wxS("Total"));
    header.Add(wxS("Grand Total"));

    Pdfx pdf;
    pdf.AddPage();
    pdf.SetFont("Times",wxS("B"),12);
    int id{ClientSelect->GetCurrentSelection()};
    std::string head =  "<p align=\"center\"><font size=\"20\">INVOICE</font></p>"
                        "<p>                                                     "
                        "<font size=\"16\"><b>"+O.GetName()+"</b></font><br/> "
                        "<font size=\"12\">"+O.GetExtra()+"</font><br/>               "
                        "<font size=\"10\">"+O.GetAddress()+"</font><br/>"
                        "<font size=\"10\">"+O.GetCity()+", "+O.GetCountry()+". "+O.GetzipCode()+"</font><br/>     "
                        "<font size=\"10\">GSTIN : "+O.GetGSTIN()+"</font><br/>"
                        "</p>                                                 "
                        "<p>"
                        "<font size=\"8\">Bill To.</font><br/>"
                        "<font size=\"16\"><b>"+C[id].GetName()+"</b><br/></font>"
                        "<font size=\"12\">"+C[id].GetExtra()+"</font><br/>              "
                        "<font size=\"10\">"+C[id].GetAddress()+"</font><br/>"
                        "<font size=\"10\">"+C[id].GetCity()+", "+C[id].GetCountry()+". "+C[id].GetzipCode()+"</font><br/>       "
                        "<font size=\"10\">GSTIN : "+C[id].GetGSTIN()+"</font><br/>  "
                        "</p> "
                        "<hr/>"
                        "<p>  "
                        "<font size=\"12\">Invoice ID  : "+InvoiceID->GetValue().ToStdString()+"</font><br/>    "
                        "<font size=\"12\">Order No.   : "+OrderNo->GetValue().ToStdString()+"</font><br/>      "
                        "</p>   ";
    std::string tail =  "<p align=\"center\">  "
                        "<font size=\"12\">SubTotal :  Rs. "+RemoveZeros(std::to_string(total))+"</font><br/>    "
                        "<font size=\"12\">CGST     :  Rs. "+I[id].GetCGST(false)+"</font><br/>      "
                        "<font size=\"12\">SGST     :  Rs. "+I[id].GetSGST(false)+"</font><br/> "
                        "<font size=\"12\">Total    :  Rs. "+RemoveZeros(std::to_string(total+Tax))+"</font><br/> "
                        "</p>   "
                        "<br/><br/><hr/><p>"
                        "<font size=\"12\">Note :</font><br/>"
                        "<font size=\"11\">Thanks For Doing Bussiness with Us.</font><br/><br/><br/>"
                        "<font size=\"12\">Terms and Conditions :</font><br/>"
                        "<font size=\"11\">Please Do The Payment Before The Due Date.</font><br/>"
                        "</p><hr/><hr/><hr/>";
    pdf.WriteXml(head);
    pdf.GenarateTabel(header,I,arr);
    pdf.SetFont("Times",wxS("B"),12);
    pdf.Ln(10);
    pdf.WriteXml(tail);

    pdf.SaveAsFile("Invoice.pdf");
    wxLaunchDefaultApplication("Invoice.pdf");

}
