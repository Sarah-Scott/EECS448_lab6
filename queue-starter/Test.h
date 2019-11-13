#ifndef TEST_H
#define TEST_H

#include "Queue.h"

class Test {
	public:
		Test();
		~Test();
		void run();

	private:
		void createEmpty();
		void enqueueNotEmpty();
		void enqueuePeak();
		void enqueueDequeueEmpty();
		void enqueueChar();
		void enqueueTwicePeek();
		void enqueueTwiceDequeuePeek();
		void enqueueTwicePeekOp();
		void enqueueNegativeInt();
		void enqueueTwiceDequeueTwiceEmpty();
		void dequeueEmpty();
};

#endif
