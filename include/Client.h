#ifndef CLIENT_H
#define CLIENT_H

#include "Company.h"


class Client : public Company
{
public:
    /** Default constructor */
    Client() = default;
    Client(const std::string& Name,const std::string& BillTo,const std::string& GSTIN,const std::string& Address,const std::string& City,const std::string& Country,const std::string& ZipCode);
    /** Default destructor */
    virtual ~Client();
    void SetDataFromString(const std::string& String);
    friend std::ostream& operator<<(std::ostream& out, const Client& com);
    friend std::istream& operator>>(std::istream& in,Client& com);
};

#endif // CLIENT_H
