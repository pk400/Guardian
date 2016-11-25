#include "State.hpp"
#include "PlayState.hpp"
#include <cstdio>

class SStack {
	State** states;
	size_t maxsize;
	size_t currsize;
	public:
		SStack(size_t m);
		void push_back(State* s);
		State* pop_back();
		State* top();
		size_t getCurrSize() {
			return currsize;
		}
};
