#ifndef CURVESINFO_H
#define CURVESINFO_H

#include "curve.h"
#include <string>

using namespace std;

class CurvesInfo
{
public:
    CurvesInfo();
    Curve* addCurve(const string& name);
    void addXValue(float xValue);

private:
    vector<Curves*> _curves;
    vector<float> _xValues;
};

#endif // CURVESINFO_H
