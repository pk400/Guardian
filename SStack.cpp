#include "SStack.hpp"
#include <iostream>

SStack::SStack(size_t m) {
	maxsize = m;
	currsize = 0;
	states = new State*[maxsize]();
}

void SStack::push_back(State* s) {
	if(s) {
		states[currsize++] = s;
	}
}

State* SStack::pop_back() {
	return states[--currsize];
}

State* SStack::top() {
	return states[0];
}
