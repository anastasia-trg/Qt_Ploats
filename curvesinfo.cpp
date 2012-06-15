#include "curvesinfo.h"

CurvesInfo::CurvesInfo()
{
}

Curve * CurvesInfo::addCurve(const std::string &name) {
    _curves.push_back(Curve(name));
    return  &_curves[_curves.size() - 1];
}

void CurvesInfo::addXValue(float xValue){
    _xValues.push_back(xValue);
}
