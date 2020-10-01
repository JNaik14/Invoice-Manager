#include "Client.h"

Client::Client(const std::string& Name,const std::string& BillTo,const std::string& GSTIN,const std::string& Address,const std::string& City,const std::string& Country,const std::string& ZipCode):
    Company(Name,BillTo,GSTIN,Address,City,Country,ZipCode)
{
    std::cerr << "Created Client : " << Name << '\n';
}
Client::~Client()
{
    std::cerr << "Destoryed Client\n";
}

void Client::SetDataFromString(const std::string& str)
{
    std::vector<std::string> vec;
    int ii{0};
    int where{0};
    for(int i{0};i<=6;++i)
        {
            if(i<=5)
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

std::ostream& operator<<(std::ostream& out, const Client& client)
{
    out << client.m_name << '\0' << client.m_extra  << '\0' << client.m_GSTIN  << '\0' << client.m_address  << '\0' << client.m_city  << '\0' << client.m_country  << '\0' << client.m_zipCode  << '\n';
    return out;
}


std::istream& operator>>(std::istream& in, Client& client)
{
    std::getline(in,client.m_name,'\0');
    std::getline(in,client.m_extra,'\0');
    std::getline(in,client.m_GSTIN,'\0');
    std::getline(in,client.m_address,'\0');
    std::getline(in,client.m_city,'\0');
    std::getline(in,client.m_country,'\0');
    std::getline(in,client.m_zipCode,'\n');
    return in;
}
