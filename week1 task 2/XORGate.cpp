#include "XORGate.h"
XORGate::XORGate(const Input& in1, const Input& in2) : input1(in1), input2(in2) {}
int XORGate::evaluate() const {
    return (input1.value || input2.value) && !(input1.value && input2.value);
}
