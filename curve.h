#ifndef CURVE_H
#define CURVE_H

#include <vector>
#include <string>

using namespace std;

class Curve
{
public:
    Curve();
    Curve(const string &name);
    void addValue(float value);

private:
    string _name;
    vector<float> _values;
};

#endif // CURVE_H
