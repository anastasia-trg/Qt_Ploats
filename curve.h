#ifndef CURVE_H
#define CURVE_H

#include <vector>
#include <string>

class Curve
{
public:
    Curve(const std::string &name);
    void addValue(float value);

private:
    std::string _name;
    std::vector<float> _values;
};

#endif // CURVE_H
