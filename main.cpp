#include <iostream>
#include "BaseDataStructure.h"
#include "Array.h"
#include "Stack.h"
#include "Queue.h"

int main() {
    Array a;
    a += 1;
    a += 2;
    a += 3;
    a += 4;
    a += 5;
    a -= 5;
    a << 0;
    Array a1;
    a1 += 1;
    a1 += 3;
    a1 << 0;
    std::cout << (a == a1) << " " << std::endl;
    std::cout << (a != a1) << " " << std::endl;

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