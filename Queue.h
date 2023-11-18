
#ifndef QUEUE_H
#define QUEUE_H
#include "BaseDataStructure.h"
#include <vector>
class Queue : public BaseDataStructure {
private:
    std::vector<int> queueData;
public:
    void operator+=(int value) override;
    void operator-=(int count) override;
    bool operator==(BaseDataStructure& other) override;
    bool operator!=(BaseDataStructure& other) override;
    void operator+(BaseDataStructure& ds) override;
    void operator<<(int m) override;
    void operator=(BaseDataStructure& ds) override;
    void pureVirtualFunction() override;
    friend std::ostream& operator<<(std::ostream& os, const Queue& queue);
};
#endif
