#ifndef MISC_H
#define MISC_H
#include <vector>
#include <string>
#include <fstream>
#include <wx/textctrl.h>
#include <wx/spinctrl.h>
void GetData(std::vector<wxString>& vec,const wxTextCtrl* txt);
void GetData(std::vector<wxString>& vec,const wxSpinCtrl* txt);
void GetData(std::vector<wxString>& vec,const wxSpinCtrlDouble* txt);
void GetData(std::vector<std::string>& vec,const wxTextCtrl* txt);
void GetData(std::vector<std::string>& vec,const wxSpinCtrl* txt);
void GetData(std::vector<std::string>& vec,const wxSpinCtrlDouble* txt);
std::string RemoveZeros(const std::string& str);
bool DoesFileExist (const std::string& name);
#endif // MISC_H
