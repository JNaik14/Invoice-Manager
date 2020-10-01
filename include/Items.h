#ifndef ITEMS_H
#define ITEMS_H
#include <vector>
#include "Item.h"


class Items : public Item
{
public:
    /** Default constructor */
    Items();
    /** Default destructor */
    virtual ~Items();

    void AddItem(const std::string&,const std::string&,const std::string&,const std::string&,const std::string&,const std::string&,const std::string&);
    void AddItemsFromFile(const std::string& file);
    void SaveItemsToFile(const std::string& file);
    Item& GetItem(unsigned int Index);
    void RemoveItem(unsigned int Index);
    Item& operator[](unsigned int Index);
    int size()
    {
        return ItemsList.size();
    }

    double GetGrandTotal();

    std::vector<Item> ItemsList;
//    int counter{0};
};

#endif // ITEMS_H
