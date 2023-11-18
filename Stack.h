

#ifndef STACK_H
#define STACK_H

#include "BaseDataStructure.h"
#include <vector>

class Stack : public BaseDataStructure {
private:
    std::vector<int> stackData;

public:
    void operator+=(int value) override;
    void operator-=(int count) override;
    bool operator==(BaseDataStructure& other) override;
    bool operator!=(BaseDataStructure& other) override;
    void operator+(BaseDataStructure& ds) override;
    void operator<<(int m) override;
    void operator=(BaseDataStructure& ds) override;
    void pureVirtualFunction() override;
    friend std::ostream& operator<<(std::ostream& os, const Stack& stack);
};

#endif 
