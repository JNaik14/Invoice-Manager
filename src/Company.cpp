#include "Company.h"
Company::Company(const std::string& name,const std::string& extra,const std::string& GSTIN,const std::string& Address,const std::string& City,const std::string& Country,const std::string& ZipCode):
    m_name{name},
    m_extra{extra},
    m_GSTIN{GSTIN},
    m_address{Address},
    m_city{City},
    m_country{Country},
    m_zipCode{ZipCode}
{
    std::cerr << "Created Company : " << m_name << '\n';
}

void Company::SetData(const std::string& name,const std::string& extra,const std::string& GSTIN,const std::string& Address,const std::string& City,const std::string& Country,const std::string& ZipCode)
{
    m_name = name;
    m_extra = extra;
    m_GSTIN = GSTIN;
    m_address = Address;
    m_city = City;
    m_country = Country;
    m_zipCode = ZipCode;
}

std::vector<std::string> Company::GetData()
{
    std::vector vec{m_name,m_extra,m_GSTIN,m_address,m_city,m_country,m_zipCode};
    return vec;
}
Company::~Company()
{
    std::cerr << "Destroyed Company.\n";
}

Company::Company(const Company& other)
{
    std::cerr << "Copied Company.\n";
}

Company& Company::operator=(const Company& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    std::cerr << "Copied Company.\n";
    return *this;
}

std::ostream& operator<<(std::ostream& out, const Company& com)
{
    out << com.m_name << '\n' << com.m_extra << '\n' << com.m_GSTIN << '\n' << com.m_address << '\n' << com.m_city << '\n' << com.m_country << '\n' << com.m_zipCode;
    return out;
}

std::istream& operator>>(std::istream& in,Company& com)
{
    std::getline(in,com.m_name);
    std::getline(in,com.m_extra);
    std::getline(in,com.m_GSTIN);
    std::getline(in,com.m_address);
    std::getline(in,com.m_city);
    std::getline(in,com.m_country);
    std::getline(in,com.m_zipCode);
    return in;
}


