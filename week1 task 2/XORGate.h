#ifndef XORGATE_H
#define XORGATE_H
#include "Gate.h"
class XORGate : public Gate {
public:
XORGate(const Input& in1, const Input& in2);
int evaluate() const override;
private:
const Input& input1;
const Input& input2;
};
#endif
