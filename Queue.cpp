
#include "Queue.h"

void Queue::operator+=(int value) {
    queueData.push_back(value);
}
void Queue::operator-=(int count) {
    for (int i = 0; i < count; ++i) {
        if (!queueData.empty()) {
            queueData.erase(queueData.begin());
        }
    }
}
bool Queue::operator==(BaseDataStructure& other) {
    Queue* otherQueue = dynamic_cast<Queue*>(&other);
    if (otherQueue) {
        return queueData == otherQueue->queueData;
    }
    return false;
}
bool Queue::operator!=(BaseDataStructure& other) {
    return !(*this == other);
}
void Queue::operator+(BaseDataStructure& ds) {
    // Implementation for the operator+
}
void Queue::operator<<(int m) {
    // Implementation for the operator<<
}
void Queue::operator=(BaseDataStructure& ds) {
    // Implementation for the operator=
}
void Queue::pureVirtualFunction() {
    std::cout << "Queue's implementation of pureVirtualFunction()" << std::endl;
}
std::ostream& operator<<(std::ostream& os, const Queue& queue) {
    os << "Queue Contents: ";
    for (int i : queue.queueData) {
        os << i << " ";
    }
    return os;
}
