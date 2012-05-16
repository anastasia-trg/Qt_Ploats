#include "filereader.h"
#include <map>
#include <vector>
#include <string>
#include <sstream>
#include <stdlib.h>

using namespace std;

FileReader(const char* filename) : _file(filename){
}

PlotsRenderer FileReader::read() {
    char asixX[10];
    char asixY[10];

    _file >> asixX;
    _file >> asixY;

    string line;
    getline(_file, line);

    stringstream line_stream(line);
    vector<string> names;
    while (line_stream) {
        string name;
        getline(line_stream, name, "\t");
        names.push_back(name);
    }

    CurvesInfo ci;
    vector<Curve*> curves;
    if (names[0] == "#") {
        for(vector<string>::const_iterator p = names.begin() + 1; p != names.end(); p++) {
            curves.push_back(ci.addCurve(*p));
        }
    } else {
        ci.addXValue(atoi(names[0]));
        for(vector<string>::const_iterator p = names.begin() + 1; p != names.end(); p++) {
            curves.push_back(ci.addCurve(""));

        }

    }
}
