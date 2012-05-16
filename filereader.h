#ifndef FILEREADER_H
#define FILEREADER_H

#include <fstream>
#include "plotsrenderer.h"

class FileReader
{
public:
    FileReader(const char* filename);
    PlotsRenderer read();

private:
    ifstream _file;
};

#endif // FILEREADER_H
