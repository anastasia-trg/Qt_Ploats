#include "curve.h"

Curve::Curve(const std::string &name) : _name(name) {
}

void Curve::addValue(float value) {
    _values.push_back(value);
}
