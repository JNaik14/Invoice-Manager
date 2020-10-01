#ifndef INVOICE_H
#define INVOICE_H
#include "Items.h"
#include "Client.h"
#include "Owner.h"

class Invoice
{
public:
    void SetOwner(const std::string& Name,const std::string& Propriter,const std::string& GSTIN,const std::string& Address,const std::string& City,const std::string& Country,const std::string& ZipCode);
    void SetClient(const std::string& Name,const std::string& Propriter,const std::string& GSTIN,const std::string& Address,const std::string& City,const std::string& Country,const std::string& ZipCode);

    Items m_list;
    Owner m_owner;
    Client m_client;
};

#endif // INVOICE_H
