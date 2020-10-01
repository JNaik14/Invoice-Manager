#include "File.h"
int i{sizeof(Invoice)};
void File::seek_object(fstream& file, int a)
{
	file.seekp(i*(a - 1), ios::beg);
}

void File::read(fstream& file,Invoice& I)
{
    file >> I.m_owner;
    file >> I.m_client;
}

void File::write(fstream& file,Invoice& I)
{
	file << I.m_owner;
	file << '\n';
	file << I.m_client;
}

bool File::read_from_file(int a,Invoice& I)
{
	int temp;
	fstream file("DATA", ios::in | ios::app);
	temp = this->countcheck(file);
	if (a>temp) { cout << "Maximum ID exceeded\n"; return false;}
	this->seek_object(file, a);
	this->read(file,I);
	if (file.eof())
	{
		cout << "EOF Reached Failed\n"; return false;
	}
	return true;
}

void File::write_in_file(int a,Invoice& I)
{
	fstream file("DATA", ios::out);
	this->seek_object(file, a);
	this->write(file,I);
}

int File::countcheck(fstream& file)
{
	int temp;
	file.seekg(0, ios::end);
	temp = file.tellp() / i;
	file.seekg(0, ios::beg);
	return temp;
}
