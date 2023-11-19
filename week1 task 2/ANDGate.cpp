#include "ANDGate.h"
ANDGate::ANDGate(const Input& in1, const Input& in2) : input1(in1), input2(in2) {}
int ANDGate::evaluate() const {
    return input1.value && input2.value;//logical and operation
}
