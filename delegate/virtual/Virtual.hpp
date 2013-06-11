#ifndef __VIRTUAL_HPP__
#define __VIRTUAL_HPP__

#include <iostream>

class BaseVirtual
{
public:
    virtual int f(int a, int b) = 0;
};

class Virtual : public BaseVirtual
{
public:
    int f(int a, int b);
};

#endif /* __VIRTUAL_HPP__ */
