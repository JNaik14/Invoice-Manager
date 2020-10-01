#include "misc.h"

std::string RemoveZeros(const std::string& string)
{
    std::string str{string};
    str.erase ( str.find_last_not_of('0') + 1, std::string::npos );
    str.erase ( str.find_last_not_of('.') + 1, std::string::npos );
    return str;
}
void GetData(std::vector<wxString>& vec,const wxTextCtrl* txt)
{
    vec.emplace_back(txt->GetValue());
}

void GetData(std::vector<wxString>& vec,const wxSpinCtrl* txt)
{
    wxString tmp;
    tmp << txt->GetValue();
    vec.emplace_back(tmp);
}
void GetData(std::vector<wxString>& vec,const wxSpinCtrlDouble* txt)
{
    wxString tmp;
    tmp << txt->GetValue();
    vec.emplace_back(tmp);
}

void GetData(std::vector<std::string>& vec,const wxTextCtrl* txt)
{
    vec.emplace_back(txt->GetValue().ToStdString());
}

void GetData(std::vector<std::string>& vec,const wxSpinCtrl* txt)
{
    std::string tmp = std::to_string(txt->GetValue());
    vec.emplace_back(tmp);
}
void GetData(std::vector<std::string>& vec,const wxSpinCtrlDouble* txt)
{
    std::string tmp = std::to_string(txt->GetValue());
    vec.emplace_back(tmp);
}
bool DoesFileExist (const std::string& name)
{
    std::ifstream f(name.c_str());
    return f.fail();
}
