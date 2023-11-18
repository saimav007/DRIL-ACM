
#ifndef BASE_DATA_STRUCTURE_H
#define BASE_DATA_STRUCTURE_H
#include <iostream>
class BaseDataStructure {
public:
    virtual void operator+=(int value) = 0;
    virtual void operator-=(int value) = 0;
    virtual bool operator==(BaseDataStructure& ds) = 0;
    virtual bool operator!=(BaseDataStructure& ds) = 0;
    virtual void operator+(BaseDataStructure& ds) = 0;
    virtual void operator<<(int m) = 0;
    virtual void operator=(BaseDataStructure& ds) = 0;
    virtual void pureVirtualFunction() = 0;
    virtual ~BaseDataStructure() {}
};
#endif 
