#ifndef ORGATE_H
#define ORGATE_H
#include "Gate.h"
class ORGate : public Gate {
public:
ORGate(const Input& in1, const Input& in2);
int evaluate() const override;
private:
const Input& input1;
const Input& input2;
};
#endif
