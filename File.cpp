//#include "File.h"
//
//void File::rea(std::string& s,std::fstream& f)
//{
//    char a[s.size()];
//    f.read(reinterpret_cast<char*>(a),s.size());
//    s = a;
//    delete[] a;
//}
//void File::writ(const std::string& s,std::fstream& f);
//{
//    f.write(reinterpret_cast<char*>(s.c_str()),s.size());
//}
//bool File::readFile(std::vector<std::string>& vec,const std::string& f)
//{
//    std::fstream file(f, std::ios::in | std::ios::binary);
//    for (std::string s : vec)
//    {
//        file.seekp(s.size() , std::ios::beg);
//        rea(s,file);
//    }
//
//}
//void File::writeFile(std::vector<std::string>& vec,const std::string& f)
//{
//    std::fstream file(f, std::ios::in | std::ios::binary);
//    for (std::string s : vec)
//    {
//        file.seekp(s.size() , std::ios::beg);
//        writ(s,file);
//    }
//}
//
//
//
