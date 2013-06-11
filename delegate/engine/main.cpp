#include <iostream>

#include "Engine1.hpp"
#include "Engine2.hpp"
#include "Engine.hpp"

using namespace std;

int main(int argc, char * argv[]) {
	Engine<Engine1> test;
	int a = 0;
	int i = 0;
	int j = 0;

	for (j = 0; j < 1000; j++) {
		a = 0;
		for (i = 0; i < 1000000; i++) {
			a = test.f(a, i);
		}
	}

	cout << a << endl;
	
	return 0;
}

