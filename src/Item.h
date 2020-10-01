#ifndef ITEM_H
#define ITEM_H
#include <string>
#include <vector>

class Item
{
public:
    /** Default constructor */
    Item() = default;
    Item(const std::string&,const std::string&,const std::string&,const std::string&,const std::string&,const std::string&,const std::string&);
    /** Default destructor */
    virtual ~Item();

    void SetData(const std::string&,const std::string&,const std::string&,const std::string&,const std::string&,const std::string&,const std::string&);

    /** Access Name
     * \return The current value of Name
     */
    const std::string& GetName()
    {
        return Name;
    }
    /** Set Name
     * \param val New value to set
     */
    void SetName(const std::string& val)
    {
        Name = val;
    }
    /** Access Name
    * \return The current value of Name
    */
    const std::string& GetDescription()
    {
        return Description;
    }
    /** Set Name
     * \param val New value to set
     */
    void SetDescription(const std::string& val)
    {
        Description = val;
    }
    /** Access Quantity
     * \return The current value of Quantity
     */
    const std::string& GetQuantity()
    {
        return Quantity;
    }
    /** Set Quantity
     * \param val New value to set
     */
    void SetQuantity(const std::string& val)
    {
        Quantity = val;
    }
    /** Access UnitCost
     * \return The current value of UnitCost
     */
    const std::string& GetUnitCost()
    {
        if(UnitCost.compare("0"))
        {
            UnitCost.erase ( UnitCost.find_last_not_of('0') + 1, std::string::npos );
            UnitCost.erase ( UnitCost.find_last_not_of('.') + 1, std::string::npos );
        }
        return UnitCost;
    }
    /** Set UnitCost
     * \param val New value to set
     */
    void SetUnitCost(const std::string& val)
    {
        UnitCost = val;
    }
    /** Access HSN
     * \return The current value of HSN
     */
    const std::string& GetHSN()
    {
        return HSN;
    }
    /** Set HSN
     * \param val New value to set
     */
    void SetHSN(const std::string& val)
    {
        HSN = val;
    }
    /** Access SGST
     * \return The current value of SGST
     */
    std::string GetSGST(bool Percentage);

    /** Set SGST
     * \param val New value to set
     */
    void SetSGST(const std::string& val)
    {
        SGST = val;
    }
    /** Access CGST
     * \return The current value of CGST
     */
    std::string GetCGST(bool Percentage);

    /** Set CGST
     * \param val New value to set
     */
    void SetCGST(const std::string& val)
    {
        CGST = val;
    }

    friend std::ostream& operator<<(std::ostream& out, const Item& item);
    friend std::istream& operator>>(std::istream& out, Item& item);

    void SetData(const std::string& s);
    std::vector<std::string> GetData();
    std::string GetTotal();
    std::string GetTax();
    std::string GetGrandTotal();
private:
    std::string Name{}; //!< Member variable "Name"
    std::string Description{}; //!< Member variable "Description of the Item"
    std::string Quantity{}; //!< Member variable "Quantity"
    std::string UnitCost{}; //!< Member variable "UnitCost"
    std::string HSN{}; //!< Member variable "HSN"
    std::string SGST{}; //!< Member variable "SGST"
    std::string CGST{}; //!< Member variable "CGST"
};

#endif // ITEM_H
