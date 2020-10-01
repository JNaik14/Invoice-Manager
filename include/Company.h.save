#ifndef COMPANY_H
#define COMPANY_H
#include <string>
#include <iostream>
#include <vector>

class Company
{
public:
    Company() = default;
    /** Default constructor */
    Company(const std::string&,const std::string&,const std::string&,const std::string&,const std::string&,const std::string&,const std::string&);
    void SetData(const std::string&,const std::string&,const std::string&,const std::string&,const std::string&,const std::string&,const std::string&);
    std::vector<std::string> GetData();
    /** Default destructor */
    virtual ~Company();
    /** Copy constructor
     *  \param other Object to copy from
     */
    Company(const Company& other);
    /** Assignment operator
     *  \param other Object to assign from
     *  \return A reference to this
     */
    Company& operator=(const Company& other);

    /** Access name
     * \return The current value of name
     */
    const std::string& GetName()
    {
        return m_name;
    }
    /** Set name
    * \param val New value to set
    */
    void SetName(const std::string& val)
    {
        m_name = val;
    }

    void SetExtra(const std::string& val)
    {
        m_extra = val;
    }

    const std::string& GetExtra()
    {
        return m_extra;
    }

    /** Access GSTIN
     * \return The current value of GSTIN
     */
    const std::string& GetGSTIN()
    {
        return m_GSTIN;
    }
    /** Set GSTIN
     * \param val New value to set
     */
    void SetGSTIN(const std::string& val)
    {
        m_GSTIN = val;
    }
    /** Access address
     * \return The current value of address
     */
    const std::string& GetAddress()
    {
        return m_address;
    }
    /** Set address
     * \param val New value to set
     */
    void SetAddress(const std::string& val)
    {
        m_address = val;
    }
    /** Access city
     * \return The current value of city
     */
    const std::string& GetCity()
    {
        return m_city;
    }
    /** Set city
     * \param val New value to set
     */
    void SetCity(const std::string& val)
    {
        m_city = val;
    }
    /** Access country
     * \return The current value of country
     */
    const std::string& GetCountry()
    {
        return m_country;
    }
    /** Set country
     * \param val New value to set
     */
    void SetCountry(const std::string& val)
    {
        m_country = val;
    }
    /** Access zipCode
     * \return The current value of zipCode
     */
    const std::string& GetzipCode()
    {
        return m_zipCode;
    }
    /** Set zipCode
     * \param val New value to set
     */
    void SetzipCode(const std::string& val)
    {
        m_zipCode = val;
    }


    /** Overloading Operator<< (For Printing)
     * \
     */
    friend std::ostream& operator<<(std::ostream& out, const Company& com);
    friend std::istream& operator>>(std::istream& in,Company& com);

protected:
    std::string m_name{}; //!< Member variable "m_name"
    std::string m_extra{}; //!< Memeber variable "m_extra"
    std::string m_GSTIN{}; //!< Member variable "m_GSTIN"
    std::string m_address{}; //!< Member variable "m_address"
    std::string m_city{}; //!< Member variable "m_city"
    std::string m_country{}; //!< Member variable "m_country"
    std::string m_zipCode{}; //!< Member variable "m_zipCode"
};

#endif // COMPANY_H
