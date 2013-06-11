#ifndef __ENGINE_HPP__
#define __ENGINE_HPP__

template<class E>
class Engine
{
private:
	E engine;
public:
    int f(int a, int b) {
		return engine.f(a, b);
	}
};

#endif /* __TEST_HPP__ */
