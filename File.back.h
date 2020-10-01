#ifndef FILE_H
#define FILE_H
#include <fstream>
#include "Invoice.h"
#include <string>
using namespace std;
class File
{
public:
    template <typename type>
    void read(fstream& file,type& type_name)
    {
        file.read(reinterpret_cast<char*>(this), sizeof(type_name));
    }

    template <typename type>
    void write(fstream& file,type& type_name)
    {
        file.write(reinterpret_cast<char*>(this), sizeof(type_name));
    }

    template <typename type>
    void seek_object(fstream& file, int a,type& type_name)
    {
        file.seekp(sizeof(type_name)*(a - 1), ios::beg);
    }

    bool read_from_file(int a,const string& FileName)
    {
        int temp;
        fstream file(FileName, ios::in | ios::binary | ios::app);
        temp = this->countcheck(file);
        if (a>temp)
        {
            cout << "Maximum ID exceeded " << endl;
            return false;
        }
        this->seek_object(file, a);
        this->read(file);
        if (file.eof())
        {
            return false;
        }

        return true;
    }

    void write_in_file(int a,const string& FileName)
    {
        fstream file(FileName, ios::out | ios::app | ios::binary);
        this->seek_object(file, a);
        this->write(file);
    }
    template <typename type>
    int countcheck(fstream& file,type& type_name)
    {
        int temp;
        file.seekg(0, ios::end);
        temp = file.tellp() / sizeof(type_name);
        file.seekg(0, ios::beg);
        return temp;
    }
};

#endif // FILE_H
