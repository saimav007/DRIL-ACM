

#include "Stack.h"
void Stack::operator+=(int value) {
    stackData.push_back(value);
}
void Stack::operator-=(int count) {
    for (int i = 0; i < count; ++i) {
        if (!stackData.empty()) {
            stackData.pop_back();
        }
    }
}
bool Stack::operator==(BaseDataStructure& other) {
    Stack* otherStack = dynamic_cast<Stack*>(&other);
    if (otherStack) {
        return stackData == otherStack->stackData;
    }
    return false;
}
bool Stack::operator!=(BaseDataStructure& other) {
    return !(*this == other);
}
void Stack::operator+(BaseDataStructure& ds) {
    // Implementation for the operator+
}
void Stack::operator<<(int m) {
    // Implementation for the operator<<
}
void Stack::operator=(BaseDataStructure& ds) {
    // Implementation for the operator=
}
void Stack::pureVirtualFunction() {
    std::cout << "Stack's implementation of pureVirtualFunction()" << std::endl;
}
std::ostream& operator<<(std::ostream& os, const Stack& stack) {
    os << "Stack Contents: ";
    for (int i : stack.stackData) {
        os << i << " ";
    }
    return os;
}
