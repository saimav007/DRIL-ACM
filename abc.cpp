#include <iostream>
#include <vector>
#include <list>
using namespace std;

class BaseDataStructure
{
public:
    virtual void operator+=(int value) = 0;
    virtual void operator-=(int value) = 0;
    virtual bool operator==(BaseDataStructure &ds) = 0;
    virtual bool operator!=(BaseDataStructure &ds) = 0;
    virtual void operator+(BaseDataStructure &ds) = 0;
    virtual void operator<<(int m) = 0;
    virtual void operator=(BaseDataStructure &ds) = 0;
};

class Array : public BaseDataStructure
{
private:
    vector<int> array;

public:
    void operator+=(int value)
    {
        array.push_back(value);
    }
    void operator-=(int value)
    {
        if (!array.empty())
        {
            array.pop_back();
        }
    }
    bool operator==(BaseDataStructure &ds)
    {
        Array dsa = dynamic_cast<Array &>(ds);
        int i = 0;
        for (int element : array)
        {
            if (element != dsa.array[i])
            {
                return false;
            }
            i++;
        }
        return true;
    }
    bool operator!=(BaseDataStructure &ds)
    {
        Array dsa = dynamic_cast<Array &>(ds);
        return !(dsa.array == array);
    }
    void operator+(BaseDataStructure &ds)
    {
        for (int i : array)
        {
            array.push_back(i);
        }
    }
    void operator<<(int m)
    {
        for (int element : array)
        {
            cout << element << " ";
        }
    }

    void operator=(BaseDataStructure &ds)
    {
        Array* dsa = dynamic_cast<Array*>(&ds);
        for (int i : dsa->array)
        {
            array.push_back(i);
        }
    }
};



class Stack : public BaseDataStructure
{
private:
    vector<int> stackData;

public:
 void operator+=(int value) override {
        stackData.push_back(value);
    }
     void operator-=(int count) override {
        for (int i = 0; i < count; ++i) {
            if (!stackData.empty()) {
                stackData.pop_back();
            }
        }
    }
        bool operator==(BaseDataStructure& other) override {
        Stack* otherStack = dynamic_cast<Stack*>(&other);
        if (otherStack) {
            return stackData == otherStack->stackData;
        }
        return false;
    }
        bool operator!=(BaseDataStructure& other) override {
        return !(*this == other);
    }
     friend std::ostream& operator<<(std::ostream& os, const Stack& stack) {
        os << "Stack Contents: ";
        for (int i : stack.stackData) {
            os << i << " ";
        }
        return os;
    }
 void operator+(BaseDataStructure& ds) override {
    }

    void operator<<(int m) override {
    }

    void operator=(BaseDataStructure& ds) override {
    }
};

class Queue : public BaseDataStructure {
private:
    std::vector<int> queueData;

public:
    void operator+=(int value) override {
        queueData.push_back(value);
    }

    void operator-=(int count) override {
        for (int i = 0; i < count; ++i) {
            if (!queueData.empty()) {
                queueData.erase(queueData.begin());
            }
        }
    }

    bool operator==(BaseDataStructure& other) override {
        Queue* otherQueue = dynamic_cast<Queue*>(&other);
        if (otherQueue) {
            return queueData == otherQueue->queueData;
        }
        return false;
    }

    bool operator!=(BaseDataStructure& other) override {
        return !(*this == other);
    }

friend std::ostream& operator<<(std::ostream& os, const Queue& queue) {
        os << "Queue Contents: ";
        for (int i : queue.queueData) {
            os << i << " ";
        }
        return os;
    }
    void operator+(BaseDataStructure& ds) override {
    }

    void operator<<(int m) override {
    }

    void operator=(BaseDataStructure& ds) override {
    }
};


int main()
{
    Array a;
    a += 1;
    a += 2;
    a += 3;
    a += 4;
    a += 5;
    a -=5;
    a <<0;
    Array a1;
    a1 += 1;
    a1 += 3; 
    a1 << 0;
    cout << (a == a1)<<" "<<endl;
    cout << (a != a1)<<" "<<endl;

    Stack stack1;
    Stack stack2;

    stack1 += 7;
    stack1 += 8;
    stack1 += 9;

    stack2 += 10;
    stack2 += 11;
    stack2 += 12;
    
    std::cout << stack1 << std::endl;
    std::cout << stack2 << std::endl;

    if (stack1 == stack2) {
        std::cout << "Stack 1 and Stack 2 are identical." << std::endl;
    } else {
        std::cout << "Stack 1 and Stack 2 are not identical." << std::endl;
    }

    Queue queue1;
    Queue queue2;

    queue1 += 13;
    queue1 += 14;
    queue1 += 15;

    queue2 += 16;
    queue2 += 17;
    queue2 += 18;

    std::cout << queue1 << std::endl;
    std::cout << queue2 << std::endl;

    if (queue1 == queue2) {
        std::cout << "Queue 1 and Queue 2 are identical." << std::endl;
    } else {
        std::cout << "Queue 1 and Queue 2 are not identical." << std::endl;
    }

    return 0;
}