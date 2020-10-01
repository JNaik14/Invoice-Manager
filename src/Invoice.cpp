#include "Invoice.h"

void Invoice::SetOwner(const std::string& Name,const std::string& Propriter,const std::string& GSTIN,const std::string& Address,const std::string& City,const std::string& Country,const std::string& ZipCode)
{
    std::cerr << "Owner Created Name : " << Name << '\n';
    m_owner.SetData(Name,Propriter,GSTIN,Address,City,Country,ZipCode);
}

void Invoice::SetClient(const std::string& Name,const std::string& BillTo,const std::string& GSTIN,const std::string& Address,const std::string& City,const std::string& Country,const std::string& ZipCode)
{
    std::cerr << "Client Created Name : " << Name << '\n';
    m_client.SetData(Name,BillTo,GSTIN,Address,City,Country,ZipCode);
}
