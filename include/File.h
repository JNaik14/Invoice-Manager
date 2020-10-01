#ifndef FILE_H
#define FILE_H
#include <fstream>
#include "Invoice.h"

using namespace std;
class File
{
public:
    void read(fstream& file,Invoice& I);
    void write(fstream& file,Invoice& I);
    bool read_from_file(int a,Invoice& I);
    void write_in_file(int a,Invoice& I);
    void seek_object(fstream& file,int a);
    int countcheck(fstream& file);
};

#endif // FILE_H
