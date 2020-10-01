#include "Item.h"
#include "misc.h"
#include <iostream>
Item::Item(const std::string& Namex,const std::string& Descriptionx,const std::string& Quantityx,const std::string& UnitCostx,const std::string& HSNx,const std::string& SGSTx,const std::string& CGSTx):
    Name{Namex},
    Description{Descriptionx},
    Quantity{Quantityx},
    UnitCost{UnitCostx},
    HSN{HSNx},
    SGST{SGSTx},
    CGST{CGSTx}
{
    std::cerr << "Created Item : " << Name << '\n';
}

void Item::SetData(const std::string& Namex,const std::string& Descriptionx,const std::string& Quantityx,const std::string& UnitCostx,const std::string& HSNx,const std::string& SGSTx,const std::string& CGSTx)
{
    Name = Namex;
    Description = Descriptionx;
    Quantity = Quantityx;
    UnitCost = UnitCostx;
    HSN = HSNx;
    CGST = CGSTx;
    SGST = SGSTx;
}

void Item::SetData(const std::string& str)
{
    std::vector<std::string> vec;
    int ii{0};
    int where{0};
    for(int i{0};i<=7;++i)
        {
            if(i<=6)
            {
                where = str.find('\0',ii);
                vec.emplace_back(str.substr(ii,(where-ii)));
            }
            else
            {
                vec.emplace_back(str.substr(ii,str.size()));
            }
            ii = where;
            ++ii;
        }
    SetData(vec[0],vec[1],vec[2],vec[3],vec[4],vec[5],vec[6]);
}

std::vector<std::string> Item::GetData()
{
    std::vector<std::string> vec{Name,Description,Quantity,UnitCost,HSN,CGST,SGST};
    return vec;
}
std::string Item::GetGrandTotal()
{
    double Total{std::stoi(Quantity) * std::stod(UnitCost)};
    Total += (Total * (std::stod(SGST)+std::stod(CGST))/100);
    return RemoveZeros(std::to_string(Total));
}
std::string Item::GetTotal()
{
    try
    {
    return RemoveZeros(std::to_string(std::stoi(Quantity) * std::stod(UnitCost)));
    }
    catch(...){return "ERROR";}
}

std::string Item::GetTax()
{
    return RemoveZeros(std::to_string((std::stoi(Quantity) * std::stod(UnitCost)) * ((std::stod(SGST)+std::stod(CGST))/100)));
}

std::ostream& operator<<(std::ostream& out, const Item& item)
{
    out << item.Name << '\0' << item.Description  << '\0' << item.Quantity  << '\0' << item.UnitCost  << '\0' << item.HSN  << '\0' << item.SGST  << '\0' << item.CGST  << '\n';
    return out;
}
std::istream& operator>>(std::istream& in, Item& item)
{
    std::getline(in,item.Name,'\0');
    std::getline(in,item.Description,'\0');
    std::getline(in,item.Quantity,'\0');
    std::getline(in,item.UnitCost,'\0');
    std::getline(in,item.HSN,'\0');
    std::getline(in,item.SGST,'\0');
    std::getline(in,item.SGST,'\n');
    return in;
}

std::string Item::GetCGST(bool Percentage = true)
{
    if(Percentage)
    {
        return CGST;
    }
    else
    {
        return RemoveZeros(std::to_string((std::stod(GetTotal())*std::stod(CGST))/100));
    }
}

std::string Item::GetSGST(bool Percentage = true)
{
    if(Percentage)
    {
        return CGST;
    }
    else
    {
        return RemoveZeros(std::to_string((std::stod(GetTotal())*std::stod(SGST))/100));
    }
}
Item::~Item()
{
    std::cerr << "Deleted Item : " << Name << '\n';
}
