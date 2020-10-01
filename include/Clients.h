#ifndef CLIENTS_H
#define CLIENTS_H
#include <vector>
#include <string>
#include <fstream>
#include <assert.h>
#include "Client.h"


class Clients : public Client
{
public:
    /** Default constructor */
    Clients();
    virtual ~Clients();
    void AddClient(const std::string& Name,const std::string& BillTo,const std::string& GSTIN,const std::string& Address,const std::string& City,const std::string& Country,const std::string& ZipCode);
    void AddClientsFromFile(const std::string& file);
    void SaveClientsToFile(const std::string& file);
    Client& GetClient(unsigned int Index);
    void RemoveClient(unsigned int Index);
    Client& operator[](unsigned int Index);
    int size()
    {
        return ClientsList.size();
    }
    std::vector<Client> ClientsList;
};

#endif // CLIENTS_H
