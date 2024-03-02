#ifndef STACK_HPP
#define STACK_HPP
#include <iostream>
#include <list>
#include "EmptyStackException.hpp"
template <typename T>
class Stack
{
private:
    std::list<T> _data{};

public:
    Stack() = default;
    Stack(const Stack &) = delete;            // disabled copy constructor
    Stack(Stack &&) = default;                // enabled move constructor brand new in C++11
    Stack &operator=(const Stack &) = delete; // disabled assignment operator
    Stack &operator=(Stack &&) = default;     // enabled assignment move operator brand new in C++11
    ~Stack() = default;

    // push function accepts one item val and if of void type
    void Push(T val);
    T Pop();
    T Top();
    size_t Size();
    bool isEmpty();
};

#endif

#include "Stack_i.hpp"