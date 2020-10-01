#include "Items.h"
#include <cassert>
#include <iostream>
#include <fstream>

Items::Items()
{
    std::cerr << "Items List Created\n";
}

void Items::AddItem(const std::string& Namex,const std::string& Descriptionx,const std::string& Quantityx,const std::string& UnitCostx,const std::string& HSNx,const std::string& SGSTx,const std::string& CGSTx)
{
//    ++counter;
    ItemsList.emplace_back(Namex,Descriptionx,Quantityx,UnitCostx,HSNx,SGSTx,CGSTx);
}

void Items::AddItemsFromFile(const std::string& file)
{
    std::ifstream in(file);
    for(std::string line; std::getline(in,line);)
    {
//        std::cerr << line;
        Item tmp;
        tmp.SetData(line);
        AddItem(tmp.GetName(),tmp.GetDescription(),tmp.GetQuantity(),tmp.GetUnitCost(),tmp.GetHSN(),tmp.GetCGST(true),tmp.GetSGST(true));
    }
}

void Items::SaveItemsToFile(const std::string& file)
{
    std::ofstream out(file,std::ios::out);
    for(int i{0};i<=this->size()-1;++i)
        {
            out << GetItem(i);
        }
}
Item& Items::GetItem(unsigned int index)
{
    assert(index <= (ItemsList.size()-1) and index >= 0 && "Out Of Index in GetItem()");
    return ItemsList.at(index);
}

Item& Items::operator[](unsigned int index)
{
    assert(index <= (ItemsList.size()-1) and index >= 0 && "Out Of Index in []");
    return ItemsList.at(index);
}
void Items::RemoveItem(unsigned int index)
{
    assert(index <= (ItemsList.size()-1) and index >= 0 && "Out Of Index in RemoveItem()");
    ItemsList.erase(ItemsList.end());
}

double Items::GetGrandTotal()
{
//    double FinalTotal{};
//    for (unsigned int i{0}; i<=(ItemsList.size()-1); ++i)
//    {
//        // Adds Total cost of the perticular Item to the Grand Total.
//        int Total{ItemsList.at(i).GetQuantity() * ItemsList.at(i).GetUnitCost()};
//        FinalTotal += ((Total * ItemsList.at(i).GetSGST())/100);
//        FinalTotal += ((Total * ItemsList.at(i).GetCGST())/100);
//        FinalTotal += ((Total * ItemsList.at(i).GetCess())/100);
//    }
//    return FinalTotal;
}
Items::~Items()
{
    std::cerr << "Items List Deleted\n";
}
