#ifndef FILEREADER_H
#define FILEREADER_H

#include <fstream>

class FileReader
{
public:
    FileReader(const char *filename);
//    PlotsRenderer read();

private:
    std::ifstream _file;
};

#endif // FILEREADER_H
