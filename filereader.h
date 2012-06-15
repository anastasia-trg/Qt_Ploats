#ifndef FILEREADER_H
#define FILEREADER_H

#include <fstream>
#include "curvesinfo.h"

class FileReader
{
public:
    FileReader(const char* filename);
    CurvesInfo read();
private:
    ifstream _file;
};

#endif // FILEREADER_H
