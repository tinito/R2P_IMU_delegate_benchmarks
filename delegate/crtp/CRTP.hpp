#ifndef __CRTP_HPP__
#define __CRTP_HPP__

template <typename Derived>
class Base
{
public:
    int f(int a, int b)
    {
        static_cast<Derived*>(this)->implementation(a, b);
    }

	int implementation(int a, int b) {
		return 0;
	}
};

class CRTP : public Base<CRTP>
{
public:
    int implementation(int a, int b)
    {
        return a + b;
    }
};

#endif /* __CRTP_HPP__ */
