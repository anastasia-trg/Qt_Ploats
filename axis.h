#ifndef AXIS_H
#define AXIS_H

#include <string>

class Axis
{
public:
    Axis(const std::string &name);

    float max() const { return _max; }
    float min() const { return _min; }

    void tryUpdate(float value);

private:
    std::string _name;
    float _max, _min;
};

#endif // AXIS_H
