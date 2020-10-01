#include "Owner.h"

Owner::Owner(const std::string& Name,const std::string& Propriter,const std::string& GSTIN,const std::string& Address,const std::string& City,const std::string& Country,const std::string& ZipCode):
    Company(Name,Propriter,GSTIN,Address,City,Country,ZipCode)
{
    std::cerr << "Created Owner : " << Name << '\n';
}
Owner::~Owner()
{
    std::cerr << "Destroyed Owner\n";
}
