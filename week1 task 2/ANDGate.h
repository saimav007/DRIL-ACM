#ifndef ANDGATE_H
#define ANDGATE_H
#include "Gate.h"
class ANDGate : public Gate {
public:
 ANDGate(const Input& in1, const Input& in2);
int evaluate() const override;
private:
const Input& input1;
const Input& input2;
};
#endif 
