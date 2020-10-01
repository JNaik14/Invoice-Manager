#ifndef OWNER_H
#define OWNER_H

#include "Company.h"


class Owner : public Company
{
public:
    /** Default constructor */
    Owner() = default;
    Owner(const std::string& name,const std::string& extra,const std::string& gstin,const std::string& address,const std::string& city,const std::string& counrty,const std::string& zip);
    /** Default destructor */
    virtual ~Owner();

protected:

private:

};

#endif // OWNER_H
