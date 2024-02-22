#ifndef STACK_I_HPP
#define STACK_I_HPP

#include "Stack.hpp"
template <typename T>
inline void Stack<T>::Push(T val)
{
    _data.push_back(val);
}

template <typename T>
inline T Stack<T>::Pop()
{
    if (_data.empty())
    {
        throw EmptyStackException("Stack underflow");
    }
    else
        _data.pop_back();
}

template <typename T>
inline T Stack<T>::Top()
{
    if (!isEmpty())
        return _data.back();
    else
    {
        throw EmptyStackException("Stack is empty");
    }
    return -1;
}

template <typename T>
size_t Stack<T>::Size()
{
    return _data.size();
}

template <typename T>
inline bool Stack<T>::isEmpty()
{
    return _data.empty();
}

#endif // STACK_I_HPP
