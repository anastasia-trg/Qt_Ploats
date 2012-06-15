#include "curve.h"

Curve::Curve() : _name(name) {

}

void Curve::addValue(float value)
{
    _values.push_back(value);
}
