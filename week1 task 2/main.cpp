#include "Gate.h"
#include "Input.h"
#include "ANDGate.h"
#include "ORGate.h"
#include "XORGate.h"
#include <iostream>
using namespace std;
int main() {
    const Input& trueInput = T::instance();
    const Input& falseInput = F::instance();
    ANDGate andGate1(trueInput, trueInput);
    ORGate orGate1(trueInput, falseInput);
    XORGate xorGate1(falseInput, trueInput);
    int result = andGate1.evaluate() || orGate1.evaluate() || xorGate1.evaluate();
    cout << "Circuit result: "<<result<<endl;
    return 0;
}

