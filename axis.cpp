#include "axis.h"

Axis::Axis(const std::string &name) : _name(name), _max(0), _min(0) {
}

void Axis::tryUpdate(float value) {
    if (value > _max) _max = value;
    else if (value < _min) _min = value;
}
