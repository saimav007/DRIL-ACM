#ifndef GATE_H
#define GATE_H
#include "Input.h"
class Gate {
public:
    virtual int evaluate() const = 0;
};
#endif 
